/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ClearAll;
    QPushButton *Button7;
    QPushButton *Absolute;
    QPushButton *Button4;
    QPushButton *Point;
    QPushButton *Button0;
    QPushButton *Add;
    QPushButton *Power;
    QPushButton *Root;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *Equals;
    QPushButton *Button5;
    QPushButton *Multiply;
    QPushButton *Negation;
    QPushButton *Factorial;
    QPushButton *Button1;
    QPushButton *Clear;
    QPushButton *Backspace;
    QPushButton *Divide;
    QPushButton *Subtract;
    QPushButton *Button2;
    QPushButton *Button8;
    QPushButton *Button9;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *Fulldisplay;
    QLineEdit *Display;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setEnabled(true);
        Calculator->resize(406, 527);
        Calculator->setMaximumSize(QSize(16777215, 16777215));
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: grey;\n"
"}"));
        Calculator->setAnimated(false);
        Calculator->setDockOptions(QMainWindow::AllowTabbedDocks);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ClearAll = new QPushButton(centralwidget);
        ClearAll->setObjectName(QString::fromUtf8("ClearAll"));
        sizePolicy.setHeightForWidth(ClearAll->sizePolicy().hasHeightForWidth());
        ClearAll->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        ClearAll->setFont(font);
        ClearAll->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        ClearAll->setAutoDefault(false);
        ClearAll->setFlat(false);

        gridLayout->addWidget(ClearAll, 2, 1, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        Button7->setFont(font1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button7->setAutoDefault(false);
        Button7->setFlat(false);

        gridLayout->addWidget(Button7, 3, 0, 1, 1);

        Absolute = new QPushButton(centralwidget);
        Absolute->setObjectName(QString::fromUtf8("Absolute"));
        sizePolicy.setHeightForWidth(Absolute->sizePolicy().hasHeightForWidth());
        Absolute->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(11);
        Absolute->setFont(font2);
        Absolute->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}"));

        gridLayout->addWidget(Absolute, 2, 4, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button4->setAutoDefault(false);
        Button4->setFlat(false);

        gridLayout->addWidget(Button4, 4, 0, 1, 1);

        Point = new QPushButton(centralwidget);
        Point->setObjectName(QString::fromUtf8("Point"));
        sizePolicy.setHeightForWidth(Point->sizePolicy().hasHeightForWidth());
        Point->setSizePolicy(sizePolicy);
        Point->setFont(font);
        Point->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Point->setAutoDefault(false);
        Point->setFlat(false);

        gridLayout->addWidget(Point, 6, 2, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button0->setAutoDefault(false);
        Button0->setFlat(false);

        gridLayout->addWidget(Button0, 6, 1, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Add->setAutoDefault(false);
        Add->setFlat(false);

        gridLayout->addWidget(Add, 5, 3, 1, 1);

        Power = new QPushButton(centralwidget);
        Power->setObjectName(QString::fromUtf8("Power"));
        sizePolicy.setHeightForWidth(Power->sizePolicy().hasHeightForWidth());
        Power->setSizePolicy(sizePolicy);
        Power->setFont(font2);
        Power->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Power->setAutoDefault(false);
        Power->setFlat(false);

        gridLayout->addWidget(Power, 4, 4, 1, 1);

        Root = new QPushButton(centralwidget);
        Root->setObjectName(QString::fromUtf8("Root"));
        sizePolicy.setHeightForWidth(Root->sizePolicy().hasHeightForWidth());
        Root->setSizePolicy(sizePolicy);
        Root->setFont(font2);
        Root->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Root->setAutoDefault(false);
        Root->setFlat(false);

        gridLayout->addWidget(Root, 5, 4, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button6->setAutoDefault(false);
        Button6->setFlat(false);

        gridLayout->addWidget(Button6, 4, 2, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button3->setAutoDefault(false);
        Button3->setFlat(false);

        gridLayout->addWidget(Button3, 5, 2, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setFont(font);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #25978e;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #1a6b65;\n"
"	border: none;\n"
"}\n"
""));
        Equals->setAutoDefault(false);
        Equals->setFlat(false);

        gridLayout->addWidget(Equals, 6, 3, 1, 2);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button5->setAutoDefault(false);
        Button5->setFlat(false);

        gridLayout->addWidget(Button5, 4, 1, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Multiply->setAutoDefault(false);
        Multiply->setFlat(false);

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        Negation = new QPushButton(centralwidget);
        Negation->setObjectName(QString::fromUtf8("Negation"));
        sizePolicy.setHeightForWidth(Negation->sizePolicy().hasHeightForWidth());
        Negation->setSizePolicy(sizePolicy);
        Negation->setFont(font);
        Negation->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Negation->setAutoDefault(false);
        Negation->setFlat(false);

        gridLayout->addWidget(Negation, 6, 0, 1, 1);

        Factorial = new QPushButton(centralwidget);
        Factorial->setObjectName(QString::fromUtf8("Factorial"));
        Factorial->setEnabled(true);
        sizePolicy.setHeightForWidth(Factorial->sizePolicy().hasHeightForWidth());
        Factorial->setSizePolicy(sizePolicy);
        Factorial->setFont(font2);
        Factorial->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Factorial->setAutoDefault(false);
        Factorial->setFlat(false);

        gridLayout->addWidget(Factorial, 3, 4, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button1->setAutoDefault(false);
        Button1->setFlat(false);

        gridLayout->addWidget(Button1, 5, 0, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFont(font);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Clear->setAutoDefault(false);
        Clear->setFlat(false);

        gridLayout->addWidget(Clear, 2, 0, 1, 1);

        Backspace = new QPushButton(centralwidget);
        Backspace->setObjectName(QString::fromUtf8("Backspace"));
        sizePolicy.setHeightForWidth(Backspace->sizePolicy().hasHeightForWidth());
        Backspace->setSizePolicy(sizePolicy);
        Backspace->setFont(font2);
        Backspace->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Backspace->setIconSize(QSize(30, 30));
        Backspace->setAutoDefault(false);
        Backspace->setFlat(false);

        gridLayout->addWidget(Backspace, 2, 2, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Divide->setAutoDefault(false);
        Divide->setFlat(false);

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFont(font);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #c2eeeb;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #93c7c3;\n"
"	border: none;\n"
"}\n"
""));
        Subtract->setAutoDefault(false);
        Subtract->setFlat(false);

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button2->setAutoDefault(false);
        Button2->setFlat(false);

        gridLayout->addWidget(Button2, 5, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button8->setAutoDefault(false);
        Button8->setFlat(false);

        gridLayout->addWidget(Button8, 3, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #efefef;\n"
"	color:  black;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #9e9e9e;\n"
"	border: none;\n"
"}\n"
""));
        Button9->setAutoDefault(false);
        Button9->setFlat(false);

        gridLayout->addWidget(Button9, 3, 2, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 125));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: white;\n"
"border: none;\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Fulldisplay = new QLineEdit(widget);
        Fulldisplay->setObjectName(QString::fromUtf8("Fulldisplay"));
        Fulldisplay->setEnabled(true);
        sizePolicy.setHeightForWidth(Fulldisplay->sizePolicy().hasHeightForWidth());
        Fulldisplay->setSizePolicy(sizePolicy);
        Fulldisplay->setMinimumSize(QSize(0, 0));
        Fulldisplay->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(24);
        font3.setBold(false);
        Fulldisplay->setFont(font3);
        Fulldisplay->setAutoFillBackground(false);
        Fulldisplay->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: grey;\n"
"    border: none;\n"
"}"));
        Fulldisplay->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        Fulldisplay->setReadOnly(true);

        gridLayout_2->addWidget(Fulldisplay, 0, 0, 1, 1);

        Display = new QLineEdit(widget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setEnabled(true);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        Display->setMinimumSize(QSize(0, 0));
        Display->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Calibri")});
        font4.setPointSize(32);
        font4.setBold(true);
        Display->setFont(font4);
        Display->setAutoFillBackground(false);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: black;\n"
"    border: none;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        Display->setReadOnly(true);

        gridLayout_2->addWidget(Display, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        ClearAll->setDefault(false);
        Button7->setDefault(false);
        Button4->setDefault(false);
        Point->setDefault(false);
        Button0->setDefault(false);
        Add->setDefault(false);
        Power->setDefault(false);
        Root->setDefault(false);
        Button6->setDefault(false);
        Button3->setDefault(false);
        Equals->setDefault(false);
        Button5->setDefault(false);
        Multiply->setDefault(false);
        Negation->setDefault(false);
        Factorial->setDefault(false);
        Button1->setDefault(false);
        Clear->setDefault(false);
        Backspace->setDefault(false);
        Divide->setDefault(false);
        Subtract->setDefault(false);
        Button2->setDefault(false);
        Button8->setDefault(false);
        Button9->setDefault(false);


        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator - grindset", nullptr));
        ClearAll->setText(QCoreApplication::translate("Calculator", "CE", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Absolute->setText(QCoreApplication::translate("Calculator", "abs", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Point->setText(QCoreApplication::translate("Calculator", ",", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Power->setText(QCoreApplication::translate("Calculator", "power", nullptr));
        Root->setText(QCoreApplication::translate("Calculator", "root", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Negation->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Factorial->setText(QCoreApplication::translate("Calculator", "fact", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        Backspace->setText(QCoreApplication::translate("Calculator", "backspace", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Fulldisplay->setText(QString());
        Display->setText(QCoreApplication::translate("Calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
