#include "inventorysupplier.h"

inventorySupplier::inventorySupplier(int id, QString name, int amount, float price_buy, float price_sell)
{

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
