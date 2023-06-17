
#include <iostream>
using namespace std;

void square(int n)
{

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n; j++)
		{

			cout << "* ";
		}

		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	square(n);
	return 0;
}
