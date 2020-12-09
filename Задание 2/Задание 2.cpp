#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	while (in.peek() != EOF) {
		string n;
		char sym1 = 'c'; 
		string sym2 = "с++";
		getline(in, n);
		int i = n.find(sym1);
		while (i < n.length()) {
			if (n[i] == sym1)
				n.replace(i, 1, sym2);
			i++;
		}
		out << n << endl;
	}
	in.close();
	out.close();
	return 0;
}
