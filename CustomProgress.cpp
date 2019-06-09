#include "CustomProgress.h"

CustomProgress::CustomProgress(QWidget *parent=0): QProgressBar(parent){
	currentFoul = 0;
	setRange(0,5);
}

void CustomProgress::addFoul(){
	if(currentFoul<5){
		++currentFoul;
		setValue(currentFoul);
		setFormat(QString::number(currentFoul)+"/5");
	}
}

void CustomProgress::resetFoul(){
	currentFoul = 0;
	setValue(currentFoul);
	setFormat(QString::number(currentFoul)+"/5");
}

