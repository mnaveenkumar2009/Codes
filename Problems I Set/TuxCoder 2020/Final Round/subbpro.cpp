#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007

int pr(int x, int y) {
    int res = 1;
    x = x % mod;
    while (y > 0){
        if (y & 1)
            res = (res*x) % mod;
        y >>= 1;
        x = (x*x) % mod;  
    }
    return res;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], b[n];
    memset(b, 0, sizeof(b));
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 1;
            for(int l = i; l <= j; l++){
                sum *= a[l];
                sum %= mod;
            }
            b[j - i] += (sum * ((pr(i + 1, mod - 2) * pr(j + 1, mod - 2)) % mod)) % mod;
            b[j - i] %= mod;
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i] << ' ';
    }
}