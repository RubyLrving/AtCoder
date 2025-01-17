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
    ll N, K;
    cin >> N >> K;
    vector<ll> P(N);
    ll sum = 0;
    rep(i, N){
        cin >> P[i];
        if(P[i] == i+1) sum++;
    }

    if(N - sum == 0){
        rep(i, N){
            cout << P[i];
            if(i < N-1) cout << " ";
        }
        cout << endl;
        return 0;
    }

    K = K % N;
    rep(i, K){
        vector<ll> P2(N);
        copy(P.begin(), P.end(), P2.begin());
        rep(j, N) P[j] = P2[P2[j] - 1];
    }

    rep(i, N){
        cout << P[i];
        if(i < N-1) cout << " ";
    }
    cout << endl;

    return 0;
} 