#include "game.h"
#include "ui_game.h"
#include <QKeyEvent>
#include<QTime>
#include<QTimer>
#include "result.h"


Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    //ui->label_3->setText(QString::number(score));
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move1()));
    connect(timer,SIGNAL(timeout()),this,SLOT(move2()));
    timer->start(10);

    QTimer *timer2= new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(counttime()));
    timer2->start(1000);

    don= new QMediaPlayer();
    don->setMedia(QUrl("qrc:/use/don.m4a"));
    katsu= new QMediaPlayer();
    katsu->setMedia(QUrl("qrc:/use/katsu.m4a"));


    ui->setupUi(this);


}

Game::~Game()
{
    delete ui;
}

 void Game::keyPressEvent(QKeyEvent *event)
{
     if(event->key() == Qt::Key_D){
         int x = ui->blue1->x();
         int y = ui->blue1->y();
         if(x<=170 && x>=130){
         ui->blue1->move(QPoint(500,108));
        score=score+50;
        ui->label_3->setText(QString::number(score));

     }
   }
     if(event->key() == Qt::Key_F){
         int x = ui->red1->x();
         int y = ui->red1->y();
         if(x<=170 && x>=130){
         ui->red1->move(QPoint(500,108));
         score=score+50;
         ui->label_3->setText(QString::number(score));
     }

   }
     if(event->key() == Qt::Key_J){
         int x = ui->red1->x();
         int y = ui->red1->y();
         if(x<=170 && x>=130){
         ui->red1->move(QPoint(500,108));
         score=score+50;
         ui->label_3->setText(QString::number(score));
     }

   }
     if(event->key() == Qt::Key_K){
         int x = ui->blue1->x();
         int y = ui->blue1->y();
         if(x<=170 && x>=130){
         ui->blue1->move(QPoint(500,108));
         score=score+50;
         ui->label_3->setText(QString::number(score));
     }

   }

}

 void Game::move1()
 {  int x=ui->red1->x();
    int y=ui->red1->y();
    ui->red1->move(QPoint(x-4,y));
    if(x<=110){
        ui->red1->move(QPoint(x+520,y));}

 }
 void Game::move2()
 {  int x=ui->blue1->x();
    int y=ui->blue1->y();
    ui->blue1->move(QPoint(x-4,y));
    if(x<=110){
        ui->blue1->move(QPoint(x+520,y));}

 }
void Game::counttime()

{  time=time-1;
   ui->label_4->setText(QString::number(time));

  if (time==0){
      result.getscore(score);
      result.show();
      result.showscore();
      this->hide();
   }

}










