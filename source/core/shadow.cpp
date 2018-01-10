#include "core/shadow.hpp"

shadow::shadow(int blurRadius, int xOffset, int yOffset, QColor color, QObject *parent) : QObject(parent)
{
    effect = new QGraphicsDropShadowEffect;

    effect->setBlurRadius( blurRadius );
    effect->setXOffset( xOffset );
    effect->setYOffset( yOffset );
    effect->setColor( color );
}
