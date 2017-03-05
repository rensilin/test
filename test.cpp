#include <iostream>

using namespace std;

long long x1, x2, x3;

int main()
{
	cin >> x1 >> x2 >> x3;
	cout << (max(x1,max(x2,x3)) - min(x1, min(x2, x3))) << endl;
	return 0;
}

