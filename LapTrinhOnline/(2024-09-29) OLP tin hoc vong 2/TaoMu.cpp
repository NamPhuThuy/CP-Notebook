#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int, int> a;
	long long n;
	cin >> n;
	for(int i = 2 ; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				a[i]++;
				n/=i;
			}
		}
	}
	
	if(n!=1) a[n] ++;
	int count = 0;
	int max = 0;
	for(auto p = a.begin(); p!= a.end(); p++)
	{
		count ++;
		if(p->second > max) max = p->second;
	}
	
	int res =0;
	int max_count = 0;
	
	for(int i = 2; i <= max; i++)
	{
		int sol = 0;
		for(auto p = a.begin(); p != a.end(); p++)
		{
			if(p->second % i == 0) 
				sol++;
		}
		
		max_count = max_count > sol ? max_count : sol;
	}
	cout << count -max_count << endl;
}
