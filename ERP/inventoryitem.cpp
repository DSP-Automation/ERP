#include "inventoryitem.h"

inventoryItem::inventoryItem(int id, QString name, QString code_internal, QString code_external, QString code_type, QString type, QString description, QVector<inventorySupplier> &value)
{

}
inventoryItem::~inventoryItem()
{

}

int inventoryItem::getId() const
{
    return id;
}

void inventoryItem::setId(int value)
{
    id = value;
}

QString inventoryItem::getName() const
{
    return name;
}

void inventoryItem::setName(const QString &value)
{
    name = value;
}

QString inventoryItem::getCode_internal() const
{
    return code_internal;
}

void inventoryItem::setCode_internal(const QString &value)
{
    code_internal = value;
}

QString inventoryItem::getCode_external() const
{
    return code_external;
}

void inventoryItem::setCode_external(const QString &value)
{
    code_external = value;
}

QString inventoryItem::getCode_type() const
{
    return code_type;
}

void inventoryItem::setCode_type(const QString &value)
{
    code_type = value;
}

QString inventoryItem::getType() const
{
    return type;
}

void inventoryItem::setType(const QString &value)
{
    type = value;
}

QString inventoryItem::getDescription() const
{
    return description;
}

void inventoryItem::setDescription(const QString &value)
{
    description = value;
}

QVector<inventorySupplier> inventoryItem::getSuppliers() const
{
    return suppliers;
}

void inventoryItem::setSuppliers(const QVector<inventorySupplier> &value)
{
    suppliers = value;
}

