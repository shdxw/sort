#include "secondWindow.h"
#include "firstWindow.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    QWidget *window2 = new QWidget();
         window2->resize(320, 240);
         window2->show();
}

Widget::~Widget()
{
    delete this;
}




