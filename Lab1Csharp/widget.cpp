#include "widget.h"
#include "ui_widget.h"
#include <moveitem.h>

static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->resize(640,640);
    this->setFixedSize(640,640);

    scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);

    ui->graphicsView->resize(600,600);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    scene->setSceneRect(0,0,500,500);
}




void Widget::on_pushButton_clicked()
{
    moveitem *item = new moveitem();
    item->setPos(randomBetween(30, 470),
                 randomBetween(30,470));
    scene->addItem(item);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    Krug *item = new Krug();
    item->setPos(randomBetween(30, 470),
                 randomBetween(30,470));
    scene->addItem(item);
}

void Widget::on_pushButton_3_clicked()
{
    Triangle *item = new Triangle();
    item->setPos(randomBetween(30, 470),
                 randomBetween(30,470));
    scene->addItem(item);
}
