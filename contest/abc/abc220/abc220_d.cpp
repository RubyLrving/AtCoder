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

int dp[100010][10];

int main() {
    ll N;
    cin >> N;
   
    vector<ll> A(N+1);
    for(int i=1; i<=N; i++) cin >> A[i];

    dp[1][A[1]%10]=1;

    for(int i=1; i<N; i++){
        for(int j=0; j<10; j++){
            dp[i+1][(j+A[i+1])%10] = (dp[i+1][(j+A[i+1])%10] + dp[i][j]) % 998244353;
            dp[i+1][(j*A[i+1])%10] = (dp[i+1][(j*A[i+1])%10] + dp[i][j]) % 998244353;
        }
    }

    rep(i, 10) cout << dp[N][i] << endl;

    return 0; 
}