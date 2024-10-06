#include <bits/stdc++.h>
using namespace std;

void setup() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() 
{
    setup();
    int t;
    cin >> t;
    while (t--) 
	{
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        float ans = 0;
        for (int i = 0; i < n; i++) 
		{
            cin >> a[i] >> b[i];
        }
        
        for (int i = 0; i < n; i++) 
		{
            ans += (float)a[i] / b[i];
        }
        
        const float epsilon = 1e-6;
        if (fabs(ans - 1.0) < epsilon) 
		{
            cout << "YES" << endl;
        } 
		else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
