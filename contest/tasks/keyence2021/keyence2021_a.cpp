#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<(n); ++i)
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
const long long INF = 1LL << 60;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n, 0), b(n, 0);
    rep(i, n){
        cin >> a[i];
        if(i>0) a[i] = max(a[i], a[i-1]);
    }
    rep(i, n) cin >> b[i];
    rep(i, n){
        ll res=0;
        for(int j=0; j<=i; j++){
            res = max(res, a[i] * b[j]);
        }
        cout << res << endl;
    }

    return 0;
}