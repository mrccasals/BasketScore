#include "MyForm.h"

MyForm::MyForm(QWidget *parent): QWidget(parent)
{
	ui.setupUi(this);

	//altres inicialitzacions i connexions
}

void MyForm::keyPressEvent (QKeyEvent *event){
	switch (event->key()){
            case Qt::Key_1:{
                    
                break;
            }	
            case Qt::Key_2: {
                        
		break;	
		}
            case Qt::Key_3: {
                
                break;
            }
	    case Qt::Key_Left:{
                setTeam = 0;
                break;
            }
	    case Qt::Key_Right:{
                setTeam = 1;
                break;
            }
	    case Qt::Key_F:{
                
                break;
            }
	    case Qt::Key_Q:{
                break;
            }
            default: event->ignore(); break;
	}
}
