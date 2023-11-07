#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int a, b;
		cin >> a >> b;

		if (a == b)
		{
			// cout << "aya";
			if (a % 2 == 1)
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "Yes" << endl;
			}
		}
		else
		{
			cout << "Yes" << endl;
		}
		t--;
	}
	return 0;
}
