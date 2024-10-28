#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a; cin >> a;
    
    string c; cin >> c;
    int ans = 0;
    
    if (c.size() > 1)
    {	
    	cout << "Invalid input";
    	goto end;
	}
	
	char b; 
	b = c[0];
    


	
    for (int i = 0; i < a.size(); i++)
    {
    	if (a[i] == b)
    		ans++;
	}
	
	cout << ans;
	
	end:;

}
