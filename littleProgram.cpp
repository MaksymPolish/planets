#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	cout << "Number: "; cin >> n;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		cout << "Hello ";
		if (i % 2 == 0)
			cout << "swetee! You`re number: "<< i << endl;
		else
			cout << "World! You`re number: "<< i << endl;
	}
}


