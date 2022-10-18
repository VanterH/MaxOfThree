#include <iostream>
using namespace std;

int main()
{
	int a = -10000000, b = -10000000, c = -10000000, in = 1;
	do
	{
		cin >> in;
		if (in > a && in !=0)
		{
			c = b;
			b = a;
			a = in;
		}
		if (in < a && in > b && in != 0)
		{
			c = b;
			b = in;
		}
		if (in < b && in > c && in != 0)
		{
			c = in;
		}
	} while (in != 0);

	cout << a << " " << b << " " << c;
}

