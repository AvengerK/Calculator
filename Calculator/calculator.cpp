#include <QLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <cmath>
#include <QDebug>
#include <string>
#include <cstdio>
#include <cstring>
#include "calculator.h"
using namespace std;
Calculator::Calculator(QWidget *parent)
	: QDialog(parent)
{
	num1 = 0;
	num2 = 0;
	result = 0;
	positive_negative = true;
	point_pressed = false;
	lineEditor = new QLineEdit("0");
	S = "";
	button_0 = new QPushButton("0");
	button_1 = new QPushButton("1");
	button_2 = new QPushButton("2");
	button_3 = new QPushButton("3");
	button_4 = new QPushButton("4");
	button_5 = new QPushButton("5");
	button_6 = new QPushButton("6");
	button_7 = new QPushButton("7");
	button_8 = new QPushButton("8");
	button_9 = new QPushButton("9");
	button_point = new QPushButton(".");
	button_ce = new QPushButton("CE");
	button_plus = new QPushButton("+");
	button_minus = new QPushButton("-");
	button_times = new QPushButton("*");
	button_divide = new QPushButton("/");
	button__ = new QPushButton("+/-");
	button_result = new QPushButton("=");
	QHBoxLayout *Hl1 = new QHBoxLayout;
	QHBoxLayout *Hl2 = new QHBoxLayout;
	QHBoxLayout *Hl3 = new QHBoxLayout;
	QHBoxLayout *Hl4 = new QHBoxLayout;
	QHBoxLayout *Hl5 = new QHBoxLayout;
	Hl1->addWidget(lineEditor);
	Hl1->addWidget(button_ce);
	Hl2->addWidget(button_1);
	Hl2->addWidget(button_2);
	Hl2->addWidget(button_3);
	Hl2->addWidget(button_plus);
	Hl3->addWidget(button_4);
	Hl3->addWidget(button_5);
	Hl3->addWidget(button_6);
	Hl3->addWidget(button_minus);
	Hl4->addWidget(button_7);
	Hl4->addWidget(button_8);
	Hl4->addWidget(button_9);
	Hl4->addWidget(button_times);
	Hl5->addWidget(button__);
	Hl5->addWidget(button_0);
	Hl5->addWidget(button_point);
	Hl5->addWidget(button_result);
	Hl5->addWidget(button_divide);
	QVBoxLayout* v1 = new QVBoxLayout;
	v1->addLayout(Hl1);
	v1->addLayout(Hl2);
	v1->addLayout(Hl3);
	v1->addLayout(Hl4);
	v1->addLayout(Hl5);
	connect(button_0, SIGNAL(clicked()), this, SLOT(button_0_clicked()));
	connect(button_1, SIGNAL(clicked()), this, SLOT(button_1_clicked()));
	connect(button_2, SIGNAL(clicked()), this, SLOT(button_2_clicked()));
	connect(button_3, SIGNAL(clicked()), this, SLOT(button_3_clicked()));
	connect(button_4, SIGNAL(clicked()), this, SLOT(button_4_clicked()));
	connect(button_5, SIGNAL(clicked()), this, SLOT(button_5_clicked()));
	connect(button_6, SIGNAL(clicked()), this, SLOT(button_6_clicked()));
	connect(button_7, SIGNAL(clicked()), this, SLOT(button_7_clicked()));
	connect(button_8, SIGNAL(clicked()), this, SLOT(button_8_clicked()));
	connect(button_9, SIGNAL(clicked()), this, SLOT(button_9_clicked()));
	connect(button_point, SIGNAL(clicked()), this, SLOT(button_point_clicked()));
	connect(button_plus, SIGNAL(clicked()), this, SLOT(button_plus_clicked()));
	connect(button_minus, SIGNAL(clicked()), this, SLOT(button_minus_clicked()));
	connect(button_times, SIGNAL(clicked()), this, SLOT(button_times_clicked()));
	connect(button_divide, SIGNAL(clicked()), this, SLOT(button_divide_clicked()));
	connect(button_result, SIGNAL(clicked()), this, SLOT(button_result_clicked()));
	connect(button_ce, SIGNAL(clicked()), this, SLOT(button_ce_clicked()));
	connect(button__, SIGNAL(clicked()), this, SLOT(button__clicked()));
	setLayout(v1);
}
void Calculator::button_0_clicked() {
	S += "0";
	lineEditor->setText(S);
}
void Calculator::button_1_clicked() {
	S += "1";
	lineEditor->setText(S);
}
void Calculator::button_2_clicked() {
	S += "2";
	lineEditor->setText(S);
}
void Calculator::button_3_clicked() {
	S += "3";
	lineEditor->setText(S);
}
void Calculator::button_4_clicked() {
	S += "4";
	lineEditor->setText(S);
}
void Calculator::button_5_clicked() {
	S += "5";
	lineEditor->setText(S);
}
void Calculator::button_6_clicked() {
	S += "6";
	lineEditor->setText(S);
}
void Calculator::button_7_clicked() {
	S += "7";
	lineEditor->setText(S);
}
void Calculator::button_8_clicked() {
	S += "8";
	lineEditor->setText(S);
}
void Calculator::button_9_clicked() {
	S += "9";
	lineEditor->setText(S);
}
void Calculator::button_point_clicked(){
	if (!point_pressed)
	{
		S += ".";
		lineEditor->setText(S);
		point_pressed = true;
	}
}
void Calculator::button_plus_clicked() {
	num1 = lineEditor->text().toDouble();
	positive_negative = true;
	operate = '+';
	S = "";
	point_pressed = false;
}
void Calculator::button_minus_clicked() {
	num1 = lineEditor->text().toDouble();
	positive_negative = true;
	operate = '-';
	S = "";
	point_pressed = false;
}
void Calculator::button_times_clicked() {
	num1 = lineEditor->text().toDouble();
	positive_negative = true;
	operate = '*';
	S = "";
	point_pressed = false;
}
void Calculator::button_divide_clicked() {
	num1 = lineEditor->text().toDouble();
	positive_negative = true;
	operate = '/';
	S = "";
	point_pressed = false;
}
void Calculator::button__clicked() {
	S += "-";
	lineEditor->setText(S);
	positive_negative = false;
}
void Calculator::button_result_clicked() {
	num2 = lineEditor->text().toDouble();
	S = "";
	switch (operate)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2)
		{
			result = num1 / num2;
		}
		break;
	default:
		break;
	}
	char str[20];
	sprintf(str, "%g", result);
	lineEditor->setText(str);
	point_pressed = false;
}
void Calculator::button_ce_clicked() {
	positive_negative = true;
	S = "";
	lineEditor->setText("0");
	num1 = num2 = 0;
	point_pressed = false;
}
Calculator::~Calculator()
{

}