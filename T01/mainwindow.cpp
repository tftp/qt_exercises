#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setColor()
{
    QPalette pal;
    QColor color = QColorDialog::getColor();
    if(color.isValid()) {
        pal.setColor(QPalette::Window, color);
        ui->label_2->setAutoFillBackground(true);
        ui->label_2->setPalette(pal);
        ui->label_2->setText(color.name());
    }
}

void MainWindow::clear()
{
    ui->label_2->setAutoFillBackground(false);
    ui->label_2->setText("");
}

