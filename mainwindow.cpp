#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget* placeholder = new QWidget( this );
    ui->mainToolBar->insertWidget( new QAction( this ), placeholder );
    placeholder->resize(100,placeholder->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}
