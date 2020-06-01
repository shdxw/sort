#include "firstWindow.h"
#include "secondWindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QApplication>

void VerticalBox::push_main_button2(){
        Widget window2;
        window2.show();
        this->close();
   }

void VerticalBox::push_main_button3(){
        Widget window3;
        window3.show();
        this->close();
   }

VerticalBox::VerticalBox(QWidget *parent)
    : QWidget(parent) {
  QVBoxLayout *vbox = new QVBoxLayout(this);
  vbox->setSpacing(1);

  QPushButton *gen = new QPushButton("Генерация последовательностей", this);
  gen->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  //connect(gen, &QPushButton::clicked, this, &VerticalBox::push_main_button2() );


  QPushButton *exp = new QPushButton("Сортировка последовательностей", this);
  exp->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

  QPushButton *about = new QPushButton("О программе", this);
  about->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

  QPushButton *exit = new QPushButton("Выход", this);
  exit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  connect(exit, &QPushButton::clicked, qApp, &QApplication::closeAllWindows);




  vbox->addWidget(gen);
  vbox->addWidget(exp);
  vbox->addWidget(about);
  vbox->addWidget(exit);


  setLayout(vbox);
}

VerticalBox::~VerticalBox()
{
    delete this;
}





