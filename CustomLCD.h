#include <QLCDNumber>
class CustomLCD: public QLCDNumber{
	Q_OBJECT
	public:
		CustomLCD(QWidget *parent);
	public slots:
		void addOne();
		void addTwo();
		void addThree();
		void subOne();

		void addCustom(int n);
	private:
		int score;
};
