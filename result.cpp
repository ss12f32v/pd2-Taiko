#include "result.h"
#include "ui_result.h"
#include "game.h"

#include <QApplication>
#include <QProcess>
Result::Result(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);

}

Result::~Result()
{
    delete ui;
}
void Result::getscore(int c)
{
    score1=c;
}


void Result::showscore()
{
 ui->label_2->setText(QString::number(score1));
}

void Result::on_pushButton_clicked()
{

    this->hide();
}


void Result::on_pushButton_2_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}
