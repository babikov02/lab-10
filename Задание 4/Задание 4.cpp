#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	ifstream in("f.txt");
	string smax;
	while (in.peek() != EOF) {
		string n;
		getline(in, n);
		if (n.length() > smax.length())
			smax = n;
	}
	cout << "Самая длинная строка:" << endl << "\t" << smax << endl << "Ее длина равна: " << smax.length() << endl;
	in.close();
	system("pause");
	return 0;
}
