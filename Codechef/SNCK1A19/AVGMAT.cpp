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
#define sort1(a) sort(a.begin(),a.end())
#define sort2(a,n) sort(a,a+n)
#define vl vector <ll> 
#define vvl vector <vector <ll> >
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
#define sc uscan()
void prin(vector <ll> a){
    ll i;
    f(i,a.size()){
        cout<<a[i]<<' ';
    }pc('\n');
}
void prin(vector <vector <ll> > a){
    ll i,j;
    f(i,a.size()){
        f(j,a[i].size())
            cout<<a[i][j]<<' ';
        pc('\n');
    }
    pc('\n');
}
void prin(vector <vector <pair <ll,ll> > > a){
    ll i,j;
    f(i,a.size()){
        f(j,a[i].size())
            cout<<a[i][j].ss<<' ';
        pc('\n');
    }
    pc('\n');
}

int main()
{
    ll t=sc;
    while(t--){
        ll n=sc,m=sc;
        vvl a(n,vl(m,0));
        ll i,j,k;
        vl ans(n+m-2);
        f(i,n){
            string s;
            cin>>s;
            f(j,m){
                if(s[j]=='1'){
                    a[i][j]=1;
                }
            }
        }
        prin(a);
        vvl suml(n+m-1),sumr(n+m-1);
        
        f(i,n){
            f(j,m){
                if(a[i][j]){
                    f(kkk,n+m-2){
                        
                    }
                }
            }
        }
        
        f(i,m+n-2)cout<<ans[i]<<' ';pc('\n');
    }
    return 0;
}