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
    int N, W;
    cin >> N >> W;

    vector<P> V(N);
    rep(i, N){
        int a, b;
        cin >> a >> b;
        V[i].first = a;
        V[i].second = b;
    }
    sort(V.begin(), V.end());
    reverse(V.begin(), V.end());

    ll res=0;
    ll cnt=0;
    rep(i, N){
        int m = V[i].second;
        rep(j, m){
            res += V[i].first;
            cnt++;
            if(cnt>=W) break;
        }
        if(cnt>=W) break;
    }
    cout << res << endl;

    return 0;
}