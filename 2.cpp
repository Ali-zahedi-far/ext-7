#include <iostream>

using namespace std;

int fib(int x)
{
	if (x == 1 || x == 2) return 1;
	else return (fib(x - 1) + fib(x - 2));
}

int main () 
{
	cout << "enter 0 when u want to quit" << endl;
	getchar();

	int N, Value;

	while(true) 
	{
		cout << "pls enter the Number of fibonachi serie" << endl;
		cin >> N;
		if (N == 0) break;
		cout << "The value of this element is equal to : " << fib(N) << endl;
	}
	getchar();
	return 0;
}