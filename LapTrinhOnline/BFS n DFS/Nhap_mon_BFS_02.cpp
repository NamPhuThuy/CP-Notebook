#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m; cin >> n >> m;
	int x1, y1; cin >> x1 >> y1;
	int x2, y2; cin >> x2 >> y2;
	
	int OX[] = {1, 1, -1, -1, 2, 2, -2, -2};
	int OY[] = {2, -2, 2, -2, 1, -1, 1, -1};
	
	queue <pair<int, int>> Q;
	Q.push({x1, y1});
	
	map <pair<int, int>, int> M;
	M[{x1, y1}] = 0;
	
	int ans = 0;
	
	while(!Q.empty())
	{
		int X = Q.front().first;
		int Y = Q.front().second;
		
		Q.pop();
		
		if ((X == x2) && (Y == y2))
		{
			cout << M[{X, Y}];
			return;
		}
		
		for (int i = 0; i < 8; i++)
		{
			if (0 < (X + OX[i]) && (X + OX[i]) <= n
			&&  0 < (Y + OY[i]) && (Y + OY[i]) <= m
			&&  M.find({X + OX[i], Y + OY[i]}) == M.end())
			{
				Q.push({X + OX[i], Y + OY[i]});
				M[{X + OX[i], Y + OY[i]}] = M[{X, Y}] + 1;
			}
		}
		
	}
	cout << -1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	solve();
}
