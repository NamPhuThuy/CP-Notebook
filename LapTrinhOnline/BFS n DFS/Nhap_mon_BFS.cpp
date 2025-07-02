#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define endl "\n"
#define int long long
#define NamPhuThuy main
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int mod = 1e9+7;

void solve()
{
	int n, m; cin >> n >> m;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	//For check 8 ways to move of the Knight-piece
	int OX[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int OY[] = {-2, 2, 2, -2, 1, -1, 1, -1};
    
    //The current need-to-check-cell list
    queue<pair<int, int> > q;
    q.push({x1, y1});
    
    //Mark the visited cell
    map<pair<int, int>, int> M;
    M[{x1, y1}] = 0;
    
    int ans = 0;
    
    while(!q.empty())
    {
    	int X = q.front().first;
    	int Y = q.front().second;
    	q.pop();
    	
    	if ((X == x2) && (Y == y2))
    	{
    		cout << M[{X, Y}];
    		return;
		}
		
		//Check for 8-adjacent
		for (int i = 0; i < 8; i++)
		{
			if (0 < (X + OX[i]) && (X + OX[i]) <= n
			&& 0 < (Y + OY[i]) && (Y + OY[i]) <= m
			&& M.find({X + OX[i], Y + OY[i]}) == M.end())
			{
				q.push({X + OX[i], Y + OY[i]});
				M[{X + OX[i], Y + OY[i]}] = M[{X, Y}] + 1;
			 
			}
		}
	}
	
	cout << -1;
}

NamPhuThuy() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
//    cin >> t;
    
    while(t--)
    {
    	solve();
	}
}
