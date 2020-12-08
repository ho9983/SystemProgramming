#include "ComboBox.h"
#include <QtWidgets>
#include <qlayout.h>
#include <iostream>

ComboBox::ComboBox(QWidget *parent,Qt::WindowFlags flags) : QMainWindow(parent,flags)
{
	QWidget *widget = new QWidget(this);
	setCentralWidget(widget);

	QVBoxLayout *vbox = new QVBoxLayout(widget);
	vbox->setMargin(5);
	vbox->setSpacing(10);

	QComboBox *editablecombo = new QComboBox(widget);
	editablecombo->setEditable(true);
	vbox->addWidget(editablecombo);

	QComboBox *readonlycombo = new QComboBox(widget);
	readonlycombo->setEditable(false);
	vbox->addWidget(readonlycombo);

	QStringList items;
	items << "Macbeth" << "Twelfth Night" << "Othello";

	editablecombo->insertItems(editablecombo->count(),items);
	readonlycombo->insertItems(readonlycombo->count(),items);

	connect (editablecombo, SIGNAL(editTextChanged(const QString&)),this, SLOT(Changed(const QString&))); 
	resize( 350, 200 );
}

void ComboBox::Changed(const QString& s)
{
	std::cout << s.toLatin1().constData() << "\n";
}

int main(int argc, char **argv)
{
	QApplication app(argc,argv);
	ComboBox *window = new ComboBox();
	window->show();
	return app.exec();
}
