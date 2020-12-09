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
		getline(in, n);
		out << n << "\t: " << n.length() << " символа(ов)" << endl;
	}
	in.close();
	out.close();
	return 0;
}
