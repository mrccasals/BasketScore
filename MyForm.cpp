#include "MyForm.h"

MyForm::MyForm(QWidget *parent): QWidget(parent)
{
	ui.setupUi(this);

	//altres inicialitzacions i connexions
	setTeam = 0;
}

void MyForm::keyPressEvent (QKeyEvent *event){
	switch (event->key()){
            case Qt::Key_1: {
                if(setTeam == 0) emit addPointsHome(1);
		else emit addPointsGuest(1);
                break;
            }	
            case Qt::Key_2: {
                if(setTeam == 0) emit addPointsHome(2);
		else emit addPointsGuest(2);	
		break;	
		}
            case Qt::Key_3: {
                if(setTeam == 0) emit addPointsHome(3);
		else emit addPointsGuest(3);
                break;
            }
	    case Qt::Key_A:{
                setTeam = 0;
		emit paintHome(1);
		emit paintGuest(0);
                break;
            }
	    case Qt::Key_D:{
                setTeam = 1;
		emit paintGuest(1);
		emit paintHome(0);
                break;
            }
	    case Qt::Key_F:{
		if(setTeam == 0){
			emit addFoulHome();
		}
		else{
			emit addFoulGuest();
		}
                break;
            }
	    case Qt::Key_Q:{
		emit nextQuarter();
                break;
            }
            default: event->ignore(); break;
	}
}
