#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	while (in.peek() != EOF) {
		int n;
		in >> n;
		if (n % 3 == 0 && n > 0) {
			out << n << endl;
		}
	}
	in.close();
	out.close();
	return 0;
}