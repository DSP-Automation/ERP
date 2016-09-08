#include "navigatormenu.h"

navigatorMenu::navigatorMenu(QWidget *parent) : QWidget(parent)
{
    horizontalLayout = new QHBoxLayout(this);

    //set homebutton add an icon and set the size
    homeButton = new QPushButton(this);
    homeButton->setIcon(QIcon(QPixmap(":/icons/navigatorMenu/homeIcon.png")));
    homeButton->setIconSize(QSize(62,62));
    homeButton->setFixedSize(64,64);

    //create a temporary second button
    inventoryButton = new QPushButton(this);
    inventoryButton->setIcon(QIcon(QPixmap(":/icons/navigatorMenu/inventoryIcon.png")));
    inventoryButton->setIconSize(QSize(62,62));
    inventoryButton->setFixedSize(64,64);

    //create a spacer
    spacerHorizontal = new QSpacerItem(1,1,QSizePolicy::Expanding,QSizePolicy::Minimum);

    //Add to layout
    horizontalLayout->addWidget(homeButton);
    horizontalLayout->addWidget(inventoryButton);
    horizontalLayout->addSpacerItem(spacerHorizontal);
    horizontalLayout->addStretch();
}

