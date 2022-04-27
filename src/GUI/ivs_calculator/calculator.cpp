#include "calculator.h"
#include "./ui_calculator.h"
#include <QRegularExpression>

#include "mathlib.h"

// https://doc.qt.io/qt-5/qtwidgets-widgets-calculator-example.html

bool finito = false;
bool special = false;
bool expectMulDiv = false;
bool isAbs = false;
bool isFact = false;
bool waitingForOperand = true;
double sumSoFar = 0.0;
double prev = 0.0;
QString prevOp = "";
QString OpPrevMulDiv = "";
//

// constructor
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setReadOnly(true);           // display as read-only
    ui->Display->setText(QString::number(0)); // def val == 0

}

// destructor
Calculator::~Calculator()
{
    delete ui;
}

void Calculator::numPress()
{
    QPushButton *button = (QPushButton *)sender();
    int numVal = button->text().toInt();

    if (ui->Display->text() == "0" && numVal == 0)
        return;
    if (isAbs || isFact)
    {
        return;
    }

    if (waitingForOperand)
    {
        ui->Display->clear();
        waitingForOperand = false;
    }
    if (finito)
    {
        ui->Fulldisplay->clear();
        finito = false;
    }
    ui->Display->setText(ui->Display->text() + QString::number(numVal));
}

void Calculator::unaryPress()
{
    QPushButton *button = (QPushButton *)sender();
    QString op = button->text();

    if (waitingForOperand || isAbs || isFact)
    {
        return;
    }

    if (op == "abs")
    {
        isAbs = true;
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " abs(" + ui->Display->text() + ")");
    }
    else
    {
        isFact = true;
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " fact(" + ui->Display->text() + ")");
    }
}

void Calculator::specialPress()
{
    QPushButton *button = (QPushButton *)sender();
    QString op = button->text();

    if (waitingForOperand || isAbs || isFact)
    {
        return;
    }

    if (op == "power")
    {
        special = true;
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " ^");
    }
    else
    {
        special = true;
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " ~");
    }

    waitingForOperand = true;
}

void Calculator::mathOpPress()
{
    QPushButton *button = (QPushButton *)sender();
    QString op = button->text();
    double number = ui->Display->text().toDouble();

    if (waitingForOperand)
        return;

    if (isAbs || isFact)
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + op);
        if (isAbs && number < 0)
            number *= -1;
    }
    else
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " " + op);
        if (prevOp == "")
        {
            // sumSoFar = ui->Display->text().toDouble();
        }
    }
    ui->Display->setText(QString::number(sumSoFar));
    prevOp = op;

    waitingForOperand = true;
    isAbs = false;
    isFact = false;
}

void Calculator::equalPress()
{
    double number = ui->Display->text().toDouble();
    if (waitingForOperand)
        return;

    if (prevOp == "")
    {
        // sumSoFar = ui->Display->text().toDouble();
    }

    if (isAbs || isFact)
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " =");
        if (isAbs && number < 0)
            number *= -1;
    }
    else
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " =");
    }

    ui->Display->setText(QString::number(sumSoFar));

    // reset
    sumSoFar = 0.0;
    prev = 0.0;
    OpPrevMulDiv = "";
    prevOp = "";
    waitingForOperand = true;
    isAbs = false;
    finito = true;
}

void Calculator::pointPress()
{
    if (waitingForOperand)
        ui->Display->setText("0");
    if (!ui->Display->text().contains('.'))
        ui->Display->setText(ui->Display->text() + tr("."));
    waitingForOperand = false;
} // good

void Calculator::signPress()
{
    QString text = ui->Display->text();
    double value = text.toDouble();

    if (value > 0.0)
    {
        text.prepend(tr("-"));
    }
    else if (value < 0.0)
    {
        text.remove(0, 1);
    }
    ui->Display->setText(text);
} // good

void Calculator::backspacePress()
{
    if (waitingForOperand)
        return;

    QString text = ui->Display->text();
    text.chop(1);
    if (text.isEmpty())
    {
        text = "0";
        waitingForOperand = true;
    }
    ui->Display->setText(text);
} // good

void Calculator::clear()
{
    ui->Display->setText("0");
    waitingForOperand = true;
} // good

void Calculator::clearAll()
{
    ui->Display->setText("0");
    ui->Fulldisplay->clear();
    sumSoFar = 0.0;
    prev = 0.0;
    waitingForOperand = true;
    isAbs = false;
    isFact = false;
    prevOp = "";
    OpPrevMulDiv = "";
} // good
