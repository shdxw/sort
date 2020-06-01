#pragma once

#include <QWidget>
#include <secondWindow.h>

class VerticalBox : public QWidget {

  public:
    VerticalBox(QWidget *parent = 0);
    ~VerticalBox();
  private slots:

    void push_main_button2();

    void push_main_button3();


};


