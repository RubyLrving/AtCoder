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

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll cnt = 0;
    ll ans = 0;
    ll j = 0;
    for(int i=0; i<N; i++){
        if(A[i]>=B[j]){
            ans += A[i];
            cnt++;
            j++;
            if(j>=M) break;
        }        
    }

    if(cnt < M) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
} 