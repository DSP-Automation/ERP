#ifndef NAVIGATORMENU_H
#define NAVIGATORMENU_H

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSpacerItem>

class navigatorMenu : public QWidget
{
    Q_OBJECT
public:
    explicit navigatorMenu(QWidget *parent = 0);

signals:

public slots:

private:
    QPushButton *homeButton;
    QPushButton *inventoryButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacerHorizontal;
};

#endif // NAVIGATORMENU_H
