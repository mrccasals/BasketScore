#include "ui_MyForm.h"
#include <QKeyEvent>

class MyForm: public QWidget
{
	Q_OBJECT

	protected:
		virtual void keyPressEvent(QKeyEvent *event);

	public:
		MyForm(QWidget *parent = 0);

	private:
		Ui::MyForm ui;
		int setTeam;
};
