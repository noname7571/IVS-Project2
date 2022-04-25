#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:

    ////
    void numPress();
    void mathOpPress();
    void unaryPress();
    void specialPress();
    void equalPress();
    void pointPress();
    void signPress();
    void backspacePress();
    void clear();
    void clearAll();

private:
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
