#ifndef INVENTORYCONTENT_H
#define INVENTORYCONTENT_H

#include <QWidget>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "inventoryitem.h"
#include "databaseconnectioninfo.h"
#include "debughandler.h"
#include "inventorysupplier.h"


class inventoryContent : public QWidget
{
    Q_OBJECT
public:
    explicit inventoryContent(QWidget *parent = 0);
    ~inventoryContent();
    int readItemsFromDatabase(QString server, QString username, QString password, QString database);

signals:

public slots:

private:
    QVector <inventoryItem *> itemVector;
    QSqlDatabase db;
    bool databaseConnectionOpen;
    debugHandler dh;

};

#endif // INVENTORYCONTENT_H
