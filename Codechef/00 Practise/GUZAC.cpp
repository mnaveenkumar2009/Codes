#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define ld long double
#define gc getchar
#define pc putchar
inline ll uscan()
{
    ll n=0,c=gc();
    bool check=0;
    if(c=='-')check=1;
    while(c<'0'||c>'9')
    {
        c=gc();
        if(c=='-')check=1;
    }
    while(c<='9'&&c>='0'){
        n=n*10+c-'0';
        c=gc();
    }
    return n+(-2*check*n);
}
int main() {
    int t=uscan();
    while(t--){
        ll n=uscan(),k=uscan(),X=uscan(),i;
        vector <ll> a(k);
        ll mini=INT_MAX;
        map <ll,bool> x;
        f(i,k){
            a[i]=uscan();
            x[a[i]]=1;
            mini=min(mini,a[i]);
        }
        ll maxi=X+mini;
        ll upp=maxi-(n-k)+1;
        ll xxx=0,s;
        s=(maxi*(maxi+1))/2;
        s-=(upp*(upp-1))/2;
        ll uppt =upp;
        f(i,k){
            if(a[i]>=uppt){
                while(x[--upp]);
                x[upp]=1;
                s+=upp;
            }
            else{
                s+=a[i];
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}
