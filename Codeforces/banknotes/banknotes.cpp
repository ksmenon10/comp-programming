/*
ID: kartmenon
LANG: C++11
TASK: 
*/
#pragma region 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
#include <istream>
#include <fstream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <tuple>
#include <vector>
#include <unordered_map>

using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define REPd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define foreach(it, ar) for (auto it = ar.begin(); it != ar.end(); it++)
#define fill(ar, val) memset(ar, val, sizeof(ar))

#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>

#define BIT(n) (1 << (n))
#define AND(a, b) ((a) & (b))
#define OR(a, b) ((a) | (b))
#define XOR(a, b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef tuple<int, int, int> ti;
typedef vector<ti> vt;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef queue<ii> qii;
typedef queue<ti> qt;
typedef long long ll;

#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 22
#pragma endregion

const int  MX = 100005;
void setIO(string name) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((name+".in").c_str(),"r",stdin);
	freopen((name+".out").c_str(),"w",stdout);
}

int main()
{
	setIO("banknotes");
	int T;
	cin >> T;
	int n, k;
	
	while (T--) {
		cin >> n >> k;
	}	
	return 0;
}

