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
 
vector<int> pos(26);

int main() {
    string x;
    int N;
    cin >> x >> N;

    rep(i, 26){
        int index = x[i] - 'a';
        pos[index] = i;
    }
 
    vector<string> S(N);
    rep(i, N) cin >> S[i];
 
    sort(S.begin(), S.end(), [](const string& x, const string& y){
        int len = min(x.size(), y.size());
        for(int i=0; i<len; i++){
            if(x[i] != y[i]){
                int index_x = x[i] - 'a';
                int index_y = y[i] - 'a';
                return pos[index_x] < pos[index_y];
            }
        }
        return x.size() < y.size();
    });
 
    rep(i, N) cout << S[i] << endl;
    
    return 0;
}