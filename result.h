#ifndef RESULT_H
#define RESULT_H

#include <QWidget>


namespace Ui {
class Result;
}

class Result : public QWidget
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = 0);
    ~Result();
    void showscore();
    void getscore(int c);
    int score1;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Result *ui;



};

#endif // RESULT_H
