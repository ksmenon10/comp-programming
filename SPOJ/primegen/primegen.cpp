/*
ID: kartmenon
LANG: C++11
TASK: primegen
*/
//#include <algorithm>
#pragma region
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
void print(vector<int> a){
    REP(i, a.size()){
        cout << a[i] << endl;
    }
}
void setIO(string name) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((name+".in").c_str(),"r",stdin);
	freopen((name+".out").c_str(),"w",stdout);
}
int N, M;
void simpleSieve(int lim, vector<int>& prime){
    bool mark[MX];
    memset(mark, false, sizeof(mark)); 
    for(int i = 2; i < lim; i++){
        if(!mark[i]){
            prime.push_back(i);
            for(int j = i * i; j <= lim; j += i){
                mark[i] = true;
            }
        }
    }
}

void segSieve(){
    int lim = (sqrt(M)) + 1;
    vector<int> prime;
    simpleSieve(lim, prime);
    const int size = N - M + 1;
    bool mark[MX];
    memset(mark, false, sizeof(mark));
//    print(prime);
    for(int i = 0; i < prime.size(); i++){
        if(prime[i] <= M && prime[i] >=N){
            cout << prime[i] << endl;
        }
        int lowLim = (N/prime[i]) * prime[i];
        if(lowLim < N){
            lowLim += prime[i];
        }
 //       cout << "lowLim: " << lowLim << endl;
        for(int j = lowLim; j <= M; j+= prime[i]){
            mark[j-N] = true;// cout << "J: " << j << endl;
        }
    }

    for(int i = N; i <= M; i++){
        if(!mark[i-N]){
            cout << i << endl;
        }
    }
}

int main()
{
//    setIO("primegen");
    int x; cin >> x;
    for(int p  = 0; p < x; p++){
        if(p > 0){
            cout << endl;
        }
	    cin >> N >> M;
        if(N==0 || N == 1){
            N = 2;
        }
        segSieve();
    }

	return 0;
}

