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
    ll N, X, Y;
    cin >> N >> X >> Y;
    vector<ll> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    ll ASum = 0, BSum = 0;
    rep(i, N){
        ASum += A[i];
        BSum += B[i];

        if(ASum > X || BSum > Y){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << N << endl;

    return 0;
} 