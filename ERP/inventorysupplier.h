#ifndef INVENTORYSUPPLIER_H
#define INVENTORYSUPPLIER_H

#include <QString>

class inventorySupplier
{
public:
    inventorySupplier(int id, int amount, float price_buy, float price_sell);
    ~inventorySupplier();

    int getId() const;
    void setId(int value);
    QString getName() const;
    void setName(const QString &value);
    int getAmount() const;
    void setAmount(int value);
    float getPrice_buy() const;
    void setPrice_buy(float value);
    float getPrice_sell() const;
    void setPrice_sell(float value);


private:
    int id;
    QString name;
    int amount;
    float price_buy;
    float price_sell;
};

#endif // INVENTORYSUPPLIER_H
