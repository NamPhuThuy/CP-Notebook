#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[16] = {0};
	int i = 15;
	int n; cin >> n;
	
	while (n > 0)
	{
		int temp = n % 2;
		n = n/2;
		a[i] = temp;
		i--;
	}
	
	for (int i = 0; i < 8; i++)
	{
		cout << a[i];
	}
	
	cout << endl;
	
	for (int i = 8; i < 16; i++)
	{
		cout << a[i];
	}
	
}
