#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define endl "\n"
#define int long long
#define NamPhuThuy main
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int MOD = 1e9+7;
const int MAX = 1e6;

// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

template <class T>
T LowerToGreater(const void* a, const void* b)
{
    const T* x = (T*) a;
    const T* y = (T*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

template <class T>
void insertArr(T A[], T n)
{
	for (T i = 0; i < n; i++) cin >> A[i];
}

template <class T>
void printArr(T *A, T n)
{
	for (T i = 0; i < n; i++) cout << A[i] << " ";
}

//My code

map <int, int> M; //for mark
queue <int> Q;

void solve()
{
	int n, k; cin >> n >> k;
	int A[k]; insertArr(A, k);
	
	int st, en; cin >> st >> en;
	
	Q.push(st);
	M[st] = 0;
	
	while(!Q.empty())
	{
		int temp = Q.front();
		Q.pop();
		
		if (temp == en)
		{
			cout << M[temp];
			return;
		}
		
		for (auto i : A)
		{
			if (temp + i <= n
			&& temp + i > 0
			&& M.find(temp + i) == M.end())
			{
				M[temp + i] = M[temp] + 1;
				Q.push(temp + i);
			}
		}
	}
	
	
	cout << -1;
}

NamPhuThuy() 
{
	//qsort(arr, num, sizeof(int), LowerToGreater);
	
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
//    cin >> t;
    
    while(t--)
    {
    	solve();
	}
}
