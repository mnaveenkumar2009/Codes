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
void prin(ll a[],ll n){
    ll i;
    f(i,n){
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
void prin(vector < pair<ll,ll> > a){
    ll i,j;
    f(i,a.size()){
        cout<<a[i].ff<<' '<<a[i].ss<<'\n';
    }
    pc('\n');
}
#define vl vector <ll> 
#define vvl vector <vector <ll> >
#define vpl vector <pair <ll,ll> >

ll f2(ll n){
    ll ans=0;
    while(n!=0){
        ll xx=0;
        ll nnn=n;
        while(nnn!=0){
            xx++;
            nnn/=10;

        }
        // xx--;
        // cout<<xx<<'\n';
        // cout<<n<<'\n';
        nnn=1;
        while(--xx){
            nnn*=10;
        }
        ll dig=n/nnn;
        ll temp=n%(nnn);
        ans+=temp/dig;
        n=temp%dig;
        n+=dig*nnn;
        n-=dig;
        ans++;
    }
    return ans+1;
}
int main()
{
    // cout<<f2(1e18);
    ll tt=sc,kkk;

    f(kkk,tt){
        vector <ll> adj[10005];
        ll n=sc,m=sc,i;
        f(i,m){
            ll x=sc,y=sc;
            adj[x-1].pb(y-1);
            adj[y-1].pb(x-1);
        }
        ll ans=0;
        f(i,10005){
            sort1(adj[i]);
            ans=max(ans,(ll)adj[i].size());
        }
        if(ans<3){
            f(i,10005){
                if(adj[i].size()==2){
                    if(binary_search(adj[adj[i][0]].begin(),adj[adj[i][0]].end(),adj[i][1])){
                        ans=3;
                        break;
                    }
                }
            }
        }
        cout<<ans<<'\n';

    }

    return 0;
}