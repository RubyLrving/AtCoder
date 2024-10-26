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
    string s;
    cin >> s;

    int res=0;
    int v = s.length();
    for(int i=0; i<v; i++){
        string temp = s;
        reverse(temp.begin(), temp.end());

        if(temp == s){
            res=1;
            break;
        }else{
            s = "0" + s;
        }
    }
    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}