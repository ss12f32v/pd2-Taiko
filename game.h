#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "result.h"
#include <QMediaPlayer>

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    int time=30;
    int score=0;
    explicit Game(QWidget *parent = 0);
    ~Game();
public slots:
    void move1();
    void move2();
    void counttime();


private:
    Ui::Game *ui;
    void keyPressEvent(QKeyEvent * event);
    Result result;
    QMediaPlayer * don;
    QMediaPlayer * katsu;

};

#endif // GAME_H
