#ifndef CALCULATOR2_H
#define CALCULATOR2_H
#include <QWidget>
#include <QtWidgets/QMainWindow>
#include "ui_calculator2.h"
QT_BEGIN_NAMESPACE
namespace Ui {
	class Calculator2;
}
class QScxmlStateMachine;
QT_END_NAMESPACE

class Calculator2 : public QWidget
{
	Q_OBJECT

public:
	explicit Calculator2(QScxmlStateMachine *machine, QWidget *parent = 0);
	~Calculator2();

private:
	QT_PREPEND_NAMESPACE(Ui::Calculator2) *ui;
	QScxmlStateMachine *m_machine;
	//Ui::Calculator2Class ui;
};

#endif // CALCULATOR2_H
