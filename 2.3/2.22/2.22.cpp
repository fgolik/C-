#include <iostream>//Даны натуральные числа n, m. Получить все общие кратные, меньшие mn.
using namespace std;

int main()
{
	int m, n;
	cout << "n="<< endl;
	cin >> n;
	cout << "m=";
	cin >> m;
	for (int i = 1; i < m * n; i++)
	{
		if (n % i == 0 && m % i == 0)
		{
			cout << i << endl;

		}
	}
}
