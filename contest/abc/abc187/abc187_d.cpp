#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fixed_setprecision(n) fixed << setprecision((n))
#define execution_time(ti) printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
#define pai 3.1415926535897932384
#define NUM_MAX 2e18
#define NUM_MIN -1e9
 
using namespace std;
using ll =long long;
using P = pair<int,int>;
template<class T> inline bool chmax(T& a, T b){ if(a<b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b){ if(a>b){ a=b; return 1; } return 0; }
const long long INF = 1LL << 60;
 
ll aoki_sum=0;
ll takahashi_sum=0;
 
void solve(int n, vector<P> AB){
 
    sort(AB.begin(), AB.end(), []( const auto &x, const auto &y )
    {
        return get<0>( x ) * 2 + get<1>( x ) == get<0>( y ) * 2 + get<1>( y ) ?
        get<0>( x ) * 2 + get<1>( x ) > get<0>( y ) * 2 + get<1>( y ):
        get<0>( x ) * 2 + get<1>( x ) < get<0>( y ) * 2 + get<1>( y ) ;
    });
 
    int res=0;
    for(int i = AB.size()-1; i>=0; i--){
        aoki_sum = aoki_sum - AB[i].first;
        takahashi_sum += AB[i].first + AB[i].second;
        if(takahashi_sum>aoki_sum){
            res = AB.size() - i;
            break;
        }
    }
    cout << res << endl;
}
 
int main() {
    int n;
    cin >> n;
    //n = 200000;
 
    vector<P> AB(n);
    rep(i, n){
        cin >> AB[i].first >> AB[i].second;
        aoki_sum += AB[i].first;
    }
    /*rep(i, n){
        AB[i].first = 1000000000; 
        AB[i].second = 1000000000;
        aoki_sum += AB[i].first;
    }*/
 
    solve(n, AB);
 
    return 0;
}