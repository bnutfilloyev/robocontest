#include <iostream>
#include <math.h>
using namespace std;

bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s * s == x);
}

bool isFibonacci(int n)
{
	return isPerfectSquare(5 * n * n + 4) ||
		   isPerfectSquare(5 * n * n - 4);
}

int main()
{
	int arr[] = {10, 7, 8, 9, 1, 5}; 	

	for (int i = 1; i <= 10; i++)
		isFibonacci(i) ? cout << i << " is a Fibonacci Number \n" : cout << i << " is a not Fibonacci Number \n";
	return 0;
}
