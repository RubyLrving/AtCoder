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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string str[4] = {"ABC" , "ARC" , "AGC" , "AHC"};


    if(s1 != "ABC" && s2 != "ABC" && s3 != "ABC"){
        cout << "ABC" << endl;
    }
    if(s1 != "ARC" && s2 != "ARC" && s3 != "ARC"){
        cout << "ARC" << endl;
    }
    if(s1 != "AGC" && s2 != "AGC" && s3 != "AGC"){
        cout << "AGC" << endl;
    }
    if(s1 != "AHC" && s2 != "AHC" && s3 != "AHC"){
        cout << "AHC" << endl;
    }



    return 0;
}