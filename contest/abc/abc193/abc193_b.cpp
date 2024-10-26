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

int main() {
    int n;
    cin >> n;

    vector<int> A(n), P(n), X(n);
    rep(i, n) cin >> A[i] >> P[i] >> X[i];

    int res = 1e9+7;
    rep(i, n){
        if(X[i] - A[i] > 0) res = min(res, P[i]);
    }
    
    if(res == 1e9+7) cout<< "-1" << endl;
    else  cout<< res << endl;

    return 0;
}