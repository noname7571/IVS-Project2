/**
 * @file calculator.cpp
 * @author xnespo10
 * @brief GUI interface for the calculator.
 * @version 0.1
 * @date 2022-04-29
 * 
 */
#include "calculator.h"
#include "ui_calculator.h"
#include <QRegularExpression>

#include "../mathlib.h"

// https://doc.qt.io/qt-5/qtwidgets-widgets-calculator-example.html

/**
 * @brief Declaration of 
 * 
 */

bool finito = false;
bool power = false;
bool root = false;
bool expectMulDiv = false;
bool isAbs = false;
bool isFact = false;
bool waitingForOperand = true;
double sumSoFar = 0.0;
double factorSoFar = 0.0;
double spec = 0.0;
QString prevOp = "";
QString OpPrevMulDiv = "";
//

/**
 * @brief Construct a new Calculator:: Calculator object
 * 
 * @param parent Parent widget to attach to.
 */
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setReadOnly(true);           // display as read-only
    ui->Display->setText(QString::number(0)); // def val == 0    
}

/**
 * @brief Destroy the Calculator:: Calculator object
 * 
 */
Calculator::~Calculator()
{
    delete ui;
}

/**
 * @brief Function to handle the number button press event.
 * 
 */
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

/**
 * @brief Function to handle unary operator press event.
 * 
 */
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

/**
 * @brief Function to handle power and root button press events.
 * 
 */
void Calculator::specialPress()
{
    QPushButton *button = (QPushButton *)sender();
    QString op = button->text();
    double number = ui->Display->text().toDouble();

    if (waitingForOperand)
    {
        return;
    }

    if (op == "power"){
        power = true;
        op = "^";
    } else {
        root = true;
        op = "~";
    }

    if (isAbs || isFact){
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + op);
        if (isAbs){
            isAbs = false;
            try {
                 number = mathlib::abs(number);
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        } else{
            isFact = false;
            try {
                 number = mathlib::factorial(number);
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid value");
                finito = true;
                return;
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        }
    } else {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " " +op);
    }

    spec = number;
    waitingForOperand = true;
}

/**
 * @brief Function to handle the binary operator press event.
 * 
 */
void Calculator::mathOpPress()
{
    QPushButton *button = (QPushButton *)sender();
    QString op = button->text();
    double number = ui->Display->text().toDouble();
    ui->Display->setMaxLength(18);

    if (waitingForOperand)
        return;

    if (isAbs || isFact)
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + op);
        if (isAbs){
            try {
                 number = mathlib::abs(number);
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        } else {
            try {
                 number = mathlib::factorial(number);
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid value");
                finito = true;
                return;
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        }
    }
    else
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " " + op);
    }

    if(power || root){
        if(power){
            try {
                 number = mathlib::power(spec, number);
                 power = false;
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid exponent");
                finito = true;
                return;
            }
        } else {
            try {
                number = mathlib::getRoot(spec, number);
                root = false;
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid exponent");
                finito = true;
                return;
            }
        }
    }

    if ((op == "*" || op == "/") && (prevOp == "+" || prevOp == "-")){
        factorSoFar = number;
        OpPrevMulDiv = prevOp;
        expectMulDiv = true;
    } else {
        if(expectMulDiv){
            if (prevOp == "*"){
                try {
                    factorSoFar = mathlib::mul(factorSoFar, number);
                } catch (std::out_of_range const&) {
                    reset();
                    ui->Display->setText("Overflow");
                    finito = true;
                    return;
                }
            } else if (prevOp == "/"){
                try {
                    factorSoFar = mathlib::div(factorSoFar, number);
                } catch (std::out_of_range const&) {
                    reset();
                    ui->Display->setText("Overflow");
                    finito = true;
                    return;
                } catch (std::invalid_argument const&) {
                    reset();
                    ui->Display->setText("Division by zero");
                    finito = true;
                    return;
                }
            }
            if(op == "+" || op == "-"){
                if (!calc(factorSoFar, OpPrevMulDiv)) return;
                expectMulDiv = false;
            }
        }
        else {
            if (!calc(number, prevOp)) return;
        }
    }

    if (prevOp.isEmpty())
    {
        sumSoFar = number;
    }

    ui->Display->setText(QString::number(sumSoFar));
    prevOp = op;
    waitingForOperand = true;
    isAbs = false;
    isFact = false;
}

/**
 * @brief Function to handle the equals button press event.
 * 
 */
void Calculator::equalPress()
{
    double number = ui->Display->text().toDouble();
    if (waitingForOperand)
        return;

    if (isAbs || isFact)
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " =");
        if (isAbs){
            try {
                 number = mathlib::abs(number);
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        } else {
            try {
                 number = mathlib::factorial(number);
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid value");
                finito = true;
                return;
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        }
    }
    else
    {
        ui->Fulldisplay->setText(ui->Fulldisplay->text() + " " + ui->Display->text() + " =");
    }

    if(power || root){
        if(power){
            try {
                 number = mathlib::power(spec, number);
                 power = false;
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid exponent");
                finito = true;
                return;
            }
        } else {
            try {
                number = mathlib::getRoot(spec, number);
                root = false;
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Invalid exponent");
                finito = true;
                return;
            }
        }
    }

    if(expectMulDiv){
        if (prevOp == "*"){
            try {
                factorSoFar = mathlib::mul(factorSoFar, number);
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            }
        } else if (prevOp == "/"){
            try {
                factorSoFar = mathlib::div(factorSoFar, number);
            } catch (std::out_of_range const&) {
                reset();
                ui->Display->setText("Overflow");
                finito = true;
                return;
            } catch (std::invalid_argument const&) {
                reset();
                ui->Display->setText("Division by zero");
                finito = true;
                return;
            }
        }
        if (!calc(factorSoFar, OpPrevMulDiv)) return;
        expectMulDiv = false;
    }
    else {
        if (!calc(number, prevOp)) return;
    }

    if (prevOp.isEmpty())
    {
        sumSoFar = number;
    }

    ui->Display->setText(QString::number(sumSoFar));

    reset();
    finito = true;
}

/**
 * @brief Function to handle the point button press event.
 * 
 */
void Calculator::pointPress()
{
    if (waitingForOperand)
        ui->Display->setText("0");
    if (!ui->Display->text().contains("."))
        ui->Display->setText(ui->Display->text() + ".");
    waitingForOperand = false;
} // good

/**
 * @brief Function to handle the sign button press event.
 * 
 */
void Calculator::signPress()
{
    QString text = ui->Display->text();
    double value = text.toDouble();

    if (value > 0.0)
    {
        ui->Display->setMaxLength(19);
        text.prepend("-");
    }
    else if (value < 0.0)
    {
        text.remove(0, 1);
        ui->Display->setMaxLength(18);
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

/**
 * @brief Function to clear the input display.
 * 
 */
void Calculator::clear()
{
    ui->Display->setText("0");
    ui->Display->setMaxLength(18);
    waitingForOperand = true;
} // good

/**
 * @brief Function to clear the input and output display.
 * 
 */
void Calculator::clearAll()
{
    ui->Display->setText("0");
    ui->Fulldisplay->clear();
    reset();
} // good


/**
 * @brief Function to clear the calculation parameters.
 * 
 */
void Calculator::reset()
{
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    waitingForOperand = true;
    expectMulDiv = false;
    isAbs = false;
    isFact = false;
    power = false;
    root = false;
    prevOp = "";
    OpPrevMulDiv = "";
    ui->Display->setMaxLength(18);
}

/**
 * @brief Function to perform an operation based on the input parameters.
 * 
 * @param a Number to be operated on.
 * @param Op The operation to be performed.
 * @return true -> Successful operation.
 * @return false -> Unsuccessful operation caused by an error.
 */
bool Calculator::calc(double a, QString Op)
{
    if (Op == "+") {
        try {
            sumSoFar = mathlib::add(sumSoFar, a);
        } catch (std::out_of_range const&) {
            reset();
            ui->Display->setText("Overflow");
            finito = true;
            return false;
        }
    }
    else if (Op == "-") {
        try {
            sumSoFar = mathlib::sub(sumSoFar, a);
        } catch (std::out_of_range const&) {
            reset();
            ui->Display->setText("Overflow");
            finito = true;
            return false;
        }
    }
    else if (Op == "*") {
        try {
            sumSoFar = mathlib::mul(sumSoFar, a);
        } catch (std::out_of_range const&) {
            reset();
            ui->Display->setText("Overflow");
            finito = true;
            return false;
        }
    }
    else if (Op == "/") {
        try {
            sumSoFar = mathlib::div(sumSoFar, a);
        } catch (std::out_of_range const&) {
            reset();
            ui->Display->setText("Overflow");
            finito = true;
            return false;
        } catch (std::invalid_argument const&) {
            reset();
            ui->Display->setText("Division by zero");
            finito = true;
            return false;
        }
    }


    return true;
}
