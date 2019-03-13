#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	ArrList<float> arr;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.insertLast(a);
	}
	Polynomial p(n, arr);
	cout << "최고차항은 " << p.getDegree() << endl;
	for (int i = 0; i < n; i++)
	{
		if (n - i - 1 == 0)
		{
			cout << p.getCoef(i) << endl;
			break;
		}
		else
			cout << p.getCoef(i) << "x^" << n - i - 1;
		if (p.getCoef(i + 1) < 0)
			continue;
		else
			cout << "+";
	}
	return 0;
}