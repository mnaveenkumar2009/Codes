#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if((y - x) % (a + b))
            cout << "-1\n";
        else{
            cout << (y-x)/(a+b) << '\n';
        }
    }
}