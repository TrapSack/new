#include "moveitem.h"

moveitem::moveitem(QObject *parent)
    : QObject(parent), QGraphicsItem()

{

}

moveitem::~moveitem()
{

}

QRectF moveitem::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void moveitem:: paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-30,-30,60,60);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void moveitem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    this->setPos(mapToScene(event->pos()));
}

void moveitem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void moveitem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}
