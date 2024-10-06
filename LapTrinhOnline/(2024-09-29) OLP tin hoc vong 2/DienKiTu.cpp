#include<bits/stdc++.h>
using namespace std;
int main()
{
	
string a; cin >> a;
		char b = a[0];
		
		bool check = false;
		
		int ans = 1;	
		for (int i = 1; i < a.size(); i++)
		{
			if (a[i] != '*')
			{
				check = true;
				if (a[i] != b)
				{
					ans++;
					b = a[i];
				}
			}
		}
		
		if (a[0] == '*') ans--;
		
		if (check) cout << ans;
		else cout << 1;
	

}
