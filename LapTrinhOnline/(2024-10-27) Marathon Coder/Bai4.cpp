#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a; cin >> a;
	
	if (a >= 'a' && a <= 'z')
	{
		//transform
		cout << char(a - 32);
	}
	else
	{
		//keep the same
		cout << a;
	}
}
