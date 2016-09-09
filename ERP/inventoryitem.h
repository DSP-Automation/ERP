#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <QString>
#include "inventorysupplier.h"

#define maxSuppliers 5

class inventoryItem
{
public:
    inventoryItem(int id, QString name, QString code_internal, QString code_external, QString code_type, QString type, QString description, QVector<inventorySupplier> &value);
    ~inventoryItem();

    int getId() const;
    void setId(int value);
    QString getName() const;
    void setName(const QString &value);
    QString getCode_internal() const;
    void setCode_internal(const QString &value);
    QString getCode_external() const;
    void setCode_external(const QString &value);
    QString getCode_type() const;
    void setCode_type(const QString &value);
    QString getType() const;
    void setType(const QString &value);
    QString getDescription() const;
    void setDescription(const QString &value);
    QVector<inventorySupplier> getSuppliers() const;
    void setSuppliers(const QVector<inventorySupplier> &value);

private:
    int id;
    QString name;
    QString code_internal;
    QString code_external;
    QString code_type;
    QString type;
    QString description;
    QVector <inventorySupplier> suppliers;

};

#endif // INVENTORYITEM_H
