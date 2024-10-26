#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0; i<(n); ++i)
#define repx(i,x,n) for(int i=x; i<(n); ++i)
#define fixed_setprecision(n) fixed << setprecision((n))
#define execution_time(ti) printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
#define pai 3.1415926535897932384
#define NUM_MAX 2e18
#define NUM_MIN -1e9
 
using namespace std;
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmax(T& a, T b){ if(a<b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b){ if(a>b){ a=b; return 1; } return 0; }

map<ll, ll> mp;

ll dfs(ll K){
    if(mp.find(K) != mp.end()) return mp[K];
    if(K==0) return 1;
    ll res = dfs(K/2) + dfs(K/3);
    mp[K] = res;
    return res;
}

int main() {
    ll N;
    cin >> N;
    cout << dfs(N) << endl;
    return 0;
} 