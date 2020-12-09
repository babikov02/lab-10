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
	while (in.peek() != EOF) {
		string n;
		getline(in, n);
		if (n[0] == sym)
			count++;
	}
	cout << count << " строк начинаются с буквы " << sym << "." << endl;
	in.close();
	system("pause");
	return 0;
}