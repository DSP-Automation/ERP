#include "inventorycontent.h"

inventoryContent::inventoryContent(QWidget *parent) : QWidget(parent)
{
    dh = new debugHandler();
}
inventoryContent::~inventoryContent()
{

}
int inventoryContent::readItemsFromDatabase(QString server, QString username, QString password, QString database)
{
    database = QSqlDatabase::addDatabase("QMYSQL");
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


}
