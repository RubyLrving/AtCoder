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
    int n, s, d;
    cin >> n >> s >> d;

    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    int res = 0;
    rep(i, n){
        if(x[i] < s && y[i] > d) res = 1;
    }
    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}