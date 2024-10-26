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
    int N;
    cin >> N;
    vector<vector<int>> A(N);

    for(int i=0; i<N; i++){
        for(int j=0; j<i+1; j++){
            int a;
            cin >> a;
            a--;
            A[i].push_back(a);
        }
    }

    int ans = 0;
    for(int i=0; i<N; i++){
        if(i < ans) ans = A[ans][i];
        else ans = A[i][ans];
    }
    cout << ans + 1 << endl;

    return 0;
} 