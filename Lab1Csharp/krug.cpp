#include "krug.h"

Krug::Krug(QObject *parent)
    : QObject(parent), QGraphicsItem()

{

}

Krug::~Krug()
{

}

QRectF Krug::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void Krug:: paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::red);
    painter->drawEllipse(-30,-30,60,60);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void Krug::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    this->setPos(mapToScene(event->pos()));
}

void Krug::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void Krug::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}
