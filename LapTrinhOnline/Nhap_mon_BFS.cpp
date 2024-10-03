#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll MOD = 1e9+7;
const ll MAX = 1e6;

// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

void insertArr(long long  A[], long long  n)
{
	for (long long  i = 0; i < n; i++) std::cin >> A[i];
}

void printArr(long long  *A, long long  n)
{
	for (long long  i = 0; i < n; i++) std::cout << A[i] << " ";
}

map <long long, long long> Marked;

void Add(long long x, map <long long, long long> Marked, long long &num)
{
    Marked[x]++;
    if (Marked[x]==1) num++;
}

void Remove(long long x, map <long long, long long> Marked, long long &num)
{
    Marked[x]--;
    if (Marked[x]==0) num--;
}

void End()
{
	std::cout << -1;
}

int main()
{
 	//freopen("Input.txt", "r", stdin);
	std::ios::sync_with_stdio(NULL); std::cin.tie(0); std::cout.tie(0);
	//freopen("Output.txt", "w", stdout);
	long long n, m; std::cin >> n >> m;
    long long x1, x2, y1, y2; std::cin >> x1 >> y1 >> x2 >> y2;
    long long OX[] = {1, 1, -1, -1, 2, 2, -2, -2};
    long long OY[] = {-2, 2, 2, -2, 1, -1, 1, -1};
    
    std::queue <std::pair<long long, long long>> q;
    q.push({x1, y1});
    std::map <std::pair<long long, long long>, long long> Marked;
    Marked[{x1, x2}] = 0;
    int ans = 0;
    while(!q.empty())
    {
      	long long X = q.front().first;
        long long Y = q.front().second;
        q.pop();
        if ((X == x2) && (Y == y2)) 
        {
            cout << Marked[{X, Y}];
            return 0;
        }
        else 
        {
            for (int i = 0; i < 8; i++)
            {
                if (0 < (X + OX[i])
                && (X + OX[i]) <= n
                && 0 < (Y + OY[i])
                && (Y + OY[i]) <= m
                && Marked.find({X + OX[i], Y + OY[i]}) == Marked.end())
                {
                    q.push({X + OX[i], Y + OY[i]});
                    Marked[{X + OX[i], Y + OY[i]}] = Marked[{X, Y}] + 1;
                }
            }
        }
    }

    cout << -1;
}
