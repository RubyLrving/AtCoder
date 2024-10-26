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
    string s;
    cin >> s;

    vector<string> str;
    str.push_back(s.substr(0, 1));
    repx(i, 1, s.size()){
        if(str[str.size()-1] == s.substr(i, 1)){
            if(i == s.size() - 1){
                if(str[str.size()-2] == s.substr(i-1, 2)){
                    str[str.size()-2] += s.substr(i-1, 1);
                    str[str.size()-1] = s.substr(i, 1);
                }else{
                    str[str.size()-1] += s.substr(i, 1);
                }
            }else{
                str.push_back(s.substr(i, 2));
                i++;
            }
        }else{
            str.push_back(s.substr(i, 1));
        }
    }
    cout << str.size() << endl;

    return 0;
}