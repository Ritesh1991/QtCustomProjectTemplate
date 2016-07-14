%{Cpp:LicenseTemplate}\

#include <QApplication>
#include <QTextStream>
#include <QString>

QTextStream cout(stdout);
QTextStream cin(stdin);

int main(int argc, char** argv)
{
    QApplication app(arc, argv);
	QString answer;
	cout << "Enter your name: ";
	cin >> answer;
	cout << "Your name is : " << cout << answer << endl;
	return EXIT_SUCCESS;
}
