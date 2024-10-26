#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<list>
#include<set>
#include<bitset>

#define rep(i,n) for(int i=0; i<(n); i++)
#define fixed_setprecision(n) fixed << setprecision((n))
#define pai 3.1415926535897932384
#define NUM_MAX 2e18
#define NUM_MIN -1e9

using namespace std;
using ll =long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    int p[20]={0};
    rep(i, n){
        cin >> p[i];
    }
    int res=0;
    for(int i=1; i<n-1; i++){
        if(p[i-1]<p[i] && p[i]<p[i+1]) res++;
        if(p[i-1]>p[i] && p[i]>p[i+1]) res++;
    }
    cout << res << endl;
    return 0;
}
