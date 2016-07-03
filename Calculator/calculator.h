#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QtWidgets/QMainWindow>
#include <QApplication>
#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include "ui_calculator.h"

class Calculator : public QDialog
{
	Q_OBJECT
protected:
	QLineEdit* lineEditor;
	QPushButton* button_0;
	QPushButton* button_1;
	QPushButton* button_2;
	QPushButton* button_3;
	QPushButton* button_4;
	QPushButton* button_5;
	QPushButton* button_6;
	QPushButton* button_7;
	QPushButton* button_8;
	QPushButton* button_9;
	QPushButton* button_ce;
	QPushButton* button_plus;
	QPushButton* button_minus;
	QPushButton* button_times;
	QPushButton* button_divide;
	QPushButton* button__;
	QPushButton* button_result;
	int num1, num2, result;
	bool plus_minus;
	int mark;
	char operate;
	QString S;
public:
	Calculator(QWidget *parent = 0);
	~Calculator();

private:
	Ui::CalculatorClass ui;
	private slots:
	void button_0_clicked();
	void button_1_clicked();
	void button_2_clicked();
	void button_3_clicked();
	void button_4_clicked();
	void button_5_clicked();
	void button_6_clicked();
	void button_7_clicked();
	void button_8_clicked();
	void button_9_clicked();
	void button_ce_clicked();
	void button_plus_clicked();
	void button_minus_clicked();
	void button_times_clicked();
	void button_divide_clicked();
	void button__clicked();
	void button_result_clicked();
};

#endif // CALCULATOR_H