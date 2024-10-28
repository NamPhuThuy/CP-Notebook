#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
		
	map<int, int> dem;
	for (int i = 0; i < n; i++)
	{
		dem[a[i]]++;
	}
	
	n = dem.size();
	
//	for (auto i : dem)
//	{
//		cout << i.first << " " << i.second << endl;
//	}
	
	
	
//	pair<int, int> b[n];
	int X[n], Y[n];
	int id = 0;

	for (auto i : dem)
	{
		X[id] = i.second;
		Y[id] = i.first;
		id++;
	}
	
	for (int i = 0; i < n-1; i ++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (X[i] < X[j])
			{
				int tmp = X[i];
				X[i] = X[j];
				X[j] = tmp;
				
				tmp = Y[i];
				Y[i] = Y[j];
				Y[j] = tmp;
			}
			else if (X[i] == X[j]) 
			{
				if (Y[i] < Y[j])
				{
					int tmp = Y[i];
					Y[i] = Y[j];
					Y[j] = tmp;
				}
			}
		}
	}
	
	
//	for (int i = 0; i < n; i ++)
//	{
//		cout << X[i] << " " << Y[i] << endl;
//	}
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < X[i]; j++)
		{
			cout << Y[i] << " ";
		}
	}
	
	
	
}
