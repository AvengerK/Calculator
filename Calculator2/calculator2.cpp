#include "ui_calculator2.h"
#include "calculator2.h"

#include <QStringListModel>
#include <QScxmlStateMachine>
QT_USE_NAMESPACE
Calculator2::Calculator2(QScxmlStateMachine *machine, QWidget *parent)
	: QWidget(parent),ui(new Ui::Calculator2),
	m_machine(machine)
{
	//ui.setupUi(this);
	ui->setupUi(this);

	connect(ui->digit0,)
}

Calculator2::~Calculator2()
{

}
