#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	ifstream in("f.txt");
	int count = 0;
	cout << "Введите букву: " << endl;
	char sym;
	cin >> sym;
	cout << "Cтроки начинающиеся с буквы " << sym << ":" << endl;
	while (in.peek() != EOF) {
		string n;
		getline(in, n);
		if (n[0] == sym)
			cout << "\t" << n << endl;
	}
	in.close();
	system("pause");
	return 0;
}