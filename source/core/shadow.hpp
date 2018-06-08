#ifndef SHADOW_HPP
#define SHADOW_HPP

#include <QGraphicsDropShadowEffect>
#include <QObject>

class shadow : public QObject {
  Q_OBJECT
public:
  explicit shadow(int blurRadius, int xOffset, int yOffset, QColor color,
                  QObject *parent);
  QGraphicsDropShadowEffect *effect;
};

#endif // SHADOW_HPP
