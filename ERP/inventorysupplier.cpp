#include "inventorysupplier.h"

inventorySupplier::inventorySupplier(int v_id, QString v_name, int v_amount, float v_price_buy, float v_price_sell, QObject *parent): QObjectData(parent)
{
    setId(v_id);
    setName(v_name);
    setAmount(v_amount);
    setPrice_buy(v_price_buy);
    setPrice_sell(v_price_sell);
}
inventorySupplier::~inventorySupplier()
{

}

int inventorySupplier::getId() const
{
    return id;
}

void inventorySupplier::setId(int value)
{
    id = value;
}

QString inventorySupplier::getName() const
{
    return name;
}

void inventorySupplier::setName(const QString &value)
{
    name = value;
}

int inventorySupplier::getAmount() const
{
    return amount;
}

void inventorySupplier::setAmount(int value)
{
    amount = value;
}

float inventorySupplier::getPrice_buy() const
{
    return price_buy;
}

void inventorySupplier::setPrice_buy(float value)
{
    price_buy = value;
}

float inventorySupplier::getPrice_sell() const
{
    return price_sell;
}

void inventorySupplier::setPrice_sell(float value)
{
    price_sell = value;
}
