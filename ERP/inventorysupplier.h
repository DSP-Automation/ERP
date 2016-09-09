#ifndef INVENTORYSUPPLIER_H
#define INVENTORYSUPPLIER_H

#include <QObject>
#include <QString>

class inventorySupplier : public QObject
{
    Q_OBJECT
public:
    explicit inventorySupplier(int v_id, QString v_name, int v_amount, float v_price_buy, float v_price_sell, QObject *parent = 0);
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
