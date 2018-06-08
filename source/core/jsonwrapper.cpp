#include "jsonwrapper.hpp"

jsonWrapper::jsonWrapper(QString PATH) {
  if (!PATH.isEmpty()) {
    this->PATH = PATH;

    file.setFileName(this->PATH);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
      qDebug() << "Couldn't open file" << PATH;
    } else {
      content = file.readAll();
      file.close();

      setJson();
    }
  } else {
    qDebug() << "PATH is empty";
  }
}

void jsonWrapper::setJson() {
  jsonDocument = QJsonDocument::fromJson(content.toUtf8());
  jsonObject = jsonDocument.object();
}

QString jsonWrapper::getElementFromObject(QString element) {
  return jsonObject.value(element).toString();
}
