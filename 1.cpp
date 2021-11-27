#include <iostream>

using namespace std;

int fib(int x) 
{
	if (x == 1 || x == 2) return 1;
	else return (fib(x - 1) + fib(x - 2));
}

int main () 
{
	int Number=1, Value;

	while(true) 
	{
		Value = fib(Number);
		if (Value > 1000) break;
		cout << "Number " << Number << " of the fibonachi serie is equal to : " << Value << endl;
		Number++;
	}

	getchar();
	return 0;
}