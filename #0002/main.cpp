#include <iostream>
#include <fstream>

using namespace std;


ifstream in("input.txt");
ofstream out("output.txt");

int main() {
	long long int A, B;

	while (in >> A >> B)
	{
		if (A > B)
			out << ">";
		else if (A == B)
			out << "=";
		else if (A < B)
			out << "<";
	}

	system("pause");
	return 0;
}
