#include "triangle.h"

Triangle::Triangle(QObject *parent)
    : QObject(parent), QGraphicsItem()

{

}

Triangle::~Triangle()
{

}

QRectF Triangle::boundingRect() const
{
    return QRectF (-40,-40,100,100);
}

void Triangle:: paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::red);
    painter->drawLine(0,-30,-30,60);
    painter->drawLine(-30,60,60,60);
    painter->drawLine(60,60,0,-30);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void Triangle::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    this->setPos(mapToScene(event->pos()));
}

void Triangle::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void Triangle::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}
