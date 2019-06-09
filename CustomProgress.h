#include <QProgressBar>

class CustomProgress: public QProgressBar{
	Q_OBJECT
	public:
		CustomProgress(QWidget *parent);
	public slots:
		void addFoul();
		void resetFoul();
	private:
		int currentFoul;
};
