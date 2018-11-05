#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for(i=0;i<n;i++)
#define pb push_back
#define ll long long

ll has(ll a, ll b){
    ll sum=a+b;
    sum=(sum*(sum+1))/2;
    return sum+a;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        unordered_map<ll,bool> a;
        ll A,B;
        while(n--){
            cin>>A>>B;
            a[has(A+1,B+2)]=1;
            a[has(A-1,B+2)]=1;
            a[has(A-1,B-2)]=1;
            a[has(A+1,B-2)]=1;
            a[has(A+2,B+1)]=1;
            a[has(A+2,B-1)]=1;
            a[has(A-2,B+1)]=1;
            a[has(A-2,B-1)]=1;
        }
        cin>>A>>B;
        A--;
        B--;
        ll i,j;
        bool we=1;
        f(i,3){
            f(j,3){
                if(!a[has(A+i,B+j)]){
                    we=0;
                    break;
                }
            }
        }
        if(we){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}#include <bits/stdc++.h>
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

int main()
{
    string s;
    cin>>s;
    vl a(26,0);
    ll i,j,k;
    f(i,s.length()){
        a[s[i]-'a']++;
    }
    ll ans=0;
    f(i,26){
        ans+=a[i]%2;
    }
    
    ans/=2;
    cout<<ans;
    return 0;
}