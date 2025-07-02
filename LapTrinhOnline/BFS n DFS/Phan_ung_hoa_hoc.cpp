//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
using namespace std;

vector<int> A[55]; // do thi vo huong
bool B[55] = {};

int n, m, x, y;
long long maxVal = 1;


void input()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b; cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
}

void dfs(int u)
{
	B[u] = 1;
	int ans = 1;
	
//	cout << "start with: " << u << endl;
	
	for (auto v: A[u])
	{
		if (!B[v])
		{
			dfs(v);
			maxVal *= 2;
		}
	}
}

int main()
{
	input();
	
	fill(B + 1, B + n + 1, false);
	for (int i = 1; i <= n ; i++)
	{
//		cout << "i = " << i << ", maxVal = " << maxVal << endl << endl;
		if (!B[i]) dfs(i);
	}
	
	cout << maxVal;
}
