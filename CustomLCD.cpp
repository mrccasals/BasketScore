#include "CustomLCD.h"

CustomLCD::CustomLCD(QWidget *parent=0): QLCDNumber(parent){
	score=0;
}

void CustomLCD::addOne(){
	++score;
	display(score); 
}
void CustomLCD::addTwo(){
	score+=2;
	display(score);
}

void CustomLCD::addThree(){
	score+=3;
	display(score);
}
