    #include <bits/stdc++.h>
    
    using namespace std;
    
    
    map<long long, int> A;
    
    bool checkPrime(long long n)
    {
    	int tempNum = n;
    	int cnt = 0;
    	
    	
    	if (A[tempNum] == 1)
    	{
    		return true;	
		}
		else if (A[tempNum] == 2)
		{
			return false;
		}
    	
    	
    //	cout << "sum: " << n << endl;
    	
    	
    	
    	for (int i = 2; i <= tempNum; i ++)
    	{
    		if (cnt > 1)
    			break	;
    		while (n % i == 0)
    		{
    			cnt++;
    			n = n/i;
    		}
    	}
    	
    	if (cnt == 1)
    	{
    //		cout << "prime: " << tempNum << endl;
    	A[tempNum] = 1;
    		return true;
    		}	
    	
		A[tempNum] = 2;	
    	return false;
    }
    
    
    int main()
    {
    	int n; cin >> n;
    	int a[n];
    	int ans = 0;
    	
    	for (int i = 0; i < n; i++)
    	{
    		cin >> a[i];
    	}
    	
    	for (int i = 0; i < n-1; i++)
    	{
    		for (int j = i+1; j < n; j++)
    		{
    			long long sum = 0;
    //			cout << "\nsize: " << i << ", " << j << endl << endl;
    			for (int t = i; t <= j; t++)
    			{
    				sum += a[t];
    			}
    			
    			if (checkPrime(sum))
    				ans++;
    		}
    	}
    	
    	cout << ans;
    }
