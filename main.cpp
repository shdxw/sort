#include "firstWindow.h"
#include "secondWindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  VerticalBox window;

  window.resize(400, 230);
  window.setWindowTitle("Меню выбора");
  window.show();
  return app.exec();
}
