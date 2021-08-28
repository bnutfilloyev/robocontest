#include <iostream>

using namespace std;

int main() {
	
	long long n, m = 0;
	int k = 0;
	
	cin >> n;
	m = n;
	while (m > 0)
	{
		k++;
		m = (m - m % 10) / 10;
	}
	if (n > 0 && n <= 9999)
	{
		if (k == 1)	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) cout << "12/09/000" << n; else cout << "13/09/000" << n;
		if (k == 2) if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) cout << "12/09/00" << n; else cout << "13/09/00" << n;
		if (k == 3) if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) cout << "12/09/0" << n; else cout << "13/09/0" << n;
		if (k == 4) if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) cout << "12/09/" << n; else cout << "13/09/" << n;
	}
	
	return 0;
}