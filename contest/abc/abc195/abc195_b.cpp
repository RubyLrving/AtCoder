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
    ll A, B, W;
    cin >> A >> B >> W;

    W = W * 1000;
    int ok = 0;
    int min_v = 1e9+7;
    int max_v = 0;

    for(int i=1; i<10000000 ;i++){
        if(!(A*i<=W && W<=B*i)) continue;
        min_v = min(min_v, i);
        max_v = max(max_v, i);
        ok = 1;
    }

    if(ok) cout << min_v << " " << max_v << endl;
    else cout << "UNSATISFIABLE" << endl;

    return 0;
}