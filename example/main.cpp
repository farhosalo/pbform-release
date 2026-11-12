#include <QApplication>

#include "person.pb.h"
#include "person.qtform.h"

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);

  demo::Person message;
  demo::PersonForm form;
  form.setMessage(message);
  form.show();

  const int result = app.exec();
  form.getMessage(message);
  return result;
}
