#include "inventorycontent.h"

inventoryContent::inventoryContent(QWidget *parent) : QWidget(parent)
{
}
inventoryContent::~inventoryContent()
{

}
int inventoryContent::readItemsFromDatabase(QString server, QString username, QString password, QString database)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(server);
    db.setDatabaseName(database);
    db.setUserName(username);
    db.setPassword(password);
    databaseConnectionOpen = db.open();
    if(!databaseConnectionOpen)
    {
        dh.writeDebugMessageWithLocation("problem opening databaseconnection please check the connection info");
        return -1;
    }
    int i = 0;
    QSqlQuery query;
    query.prepare("GET * FROM items");
    query.exec();
    while(query.next())
    {
        int j=0;
        QSqlQuery query1;
        QVector<inventorySupplier * > tempVector;
        query1.prepare("GET lsi.id, s.name, lsi.amount, sli.price_buy, sli.price_sell FROM link_supplier_item as lsi LEFT JOIN suppliers as s on lsi.id = s.id WHERE lsi.id = :id");
        query1.bindValue(":id", query.value(0));
        query.exec();
        while(query1.next())
        {
            inventorySupplier *temp = new inventorySupplier(query1.value(0).toInt(),query1.value(1).toString(),query1.value(2).toInt(), query1.value(3).toFloat(),query1.value(4).toFloat());
            tempVector.push_back(temp);
            j++;
        }

        inventoryItem *tempItem =  new inventoryItem(query.value(0).toInt(), query.value(1).toString(), query.value(2).toString(),query.value(3).toString(),query.value(4).toString(),query.value(5).toString(),query.value(6).toString(),tempVector);
        itemVector.push_back(tempItem);
        i++;
    }



}
