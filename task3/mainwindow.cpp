#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MyGuiApp");

    ui->List1->setDragDropMode(QAbstractItemView::DragDrop);
    ui->List1->setDefaultDropAction(Qt::MoveAction);
    ui->List1->setObjectName("List1");
    ui->List1->acceptDrops();

    ui->List2->setDragDropMode(QAbstractItemView::DragDrop);
    ui->List2->setDefaultDropAction(Qt::MoveAction);
    ui->List2->setObjectName("List1");
    ui->List2->acceptDrops();
}


MainWindow::~MainWindow()
{
    delete ui;
}

