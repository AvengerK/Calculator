#include "calculator.h"
//#include <iostream>
#include <QtWidgets/QApplication>
//using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Calculator w;
	w.show();
	return a.exec();
}
