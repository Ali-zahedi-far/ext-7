#include <iostream>

using namespace std;

int binarysearch(int arr[], int S, int L, int Number)
{
	if(L >= S) 
	{
		int mid = S + (L - S) / 2;

		if (arr[mid] == Number)
			return mid;

		if (Number > arr[mid])
			return binarysearch(arr, mid + 1, L, Number);
		return binarysearch(arr, S, mid - 1, Number);
	}
	return -1;
}

int main () 
{
	int Numb;
	int Arraye[] = { 1,3,7,12,15,16,19 };

	for(int i = 0 ; i < 7 ; i++) 
	{
		cout << "the elment index " << i << " is equal to : " << Arraye[i] << endl;
	}

	cout << "enter the Number that u are looking for" << endl;
	cin >> Numb;
 
	int Tse = binarysearch(Arraye, 0, 6, Numb);

	if (Tse == -1)
	{
		cout << "Not found!" << endl;
	}

	else cout << "found it and its index is equal to : " << Tse << endl;

	getchar();
	return 0;
}

