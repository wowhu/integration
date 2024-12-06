#include "commandew.h"
#include "ui_commandew.h"

commandew::commandew(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::commandew)
{
    ui->setupUi(this);
}

commandew::~commandew()
{
    delete ui;
}
