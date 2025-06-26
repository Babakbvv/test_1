#include "signup2.h"
#include "ui_signup2.h"

signUP2::signUP2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::signUP2)
{
    ui->setupUi(this);
}

signUP2::~signUP2()
{
    delete ui;
}
