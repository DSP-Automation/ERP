#include "inventoryitem.h"

inventoryItem::inventoryItem(int v_id, QString v_name, QString v_code_internal, QString v_code_external, QString v_code_type, QString v_type, QString v_description, QVector<inventorySupplier *> &v_value, QObject *parent) :QObject(parent)
{
    setId(v_id);
    setName(v_name);
    setCode_external(v_code_external);
    setCode_internal(v_code_internal);
    setCode_type(v_code_type);
    setType(v_type);
    setDescription(v_description);
    setSuppliers(v_value);
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

QVector<inventorySupplier *> inventoryItem::getSuppliers() const
{
    return suppliers;
}

void inventoryItem::setSuppliers(const QVector<inventorySupplier *> &value)
{
    suppliers = value;
}



