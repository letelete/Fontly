#ifndef JSON_PARSER_HPP
#define JSON_PARSER_HPP

#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>

class jsonWrapper {
public:
  jsonWrapper(QString PATH);
  QString getElementFromObject(QString element);

private:
  QString content;
  QString PATH;
  QFile file;
  QJsonDocument jsonDocument;
  QJsonObject jsonObject;

  void setJson();
};

#endif // JSON_PARSER_HPP
