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
    ll N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    ll add=0;
    rep(i, Q){
        ll t, x;
        cin >> t >> x;

        if(t==1){
            add -= x;
        }else if(t==2){
            ll d = (add) % N;
            ll index = d + x;
            if(index<1) index += N;
            cout << S[index-1] << endl;
        }
    }

    return 0;
} 