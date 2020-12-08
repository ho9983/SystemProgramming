#include <qmainwindow.h>
#include <qcombobox.h>

class ComboBox : public QMainWindow
{
	Q_OBJECT

	public:
	ComboBox(QWidget *parent = 0, Qt::WindowFlags flags = 0);

	private slots:
	void Changed(const QString& s);
};

