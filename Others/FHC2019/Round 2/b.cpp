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
#define sort(a) sort(a.begin(),a.end())
#define sortn(a,n) sort(a,a+n)
#define vvl vector <vector <ll> >
#define vl vector <ll>
inline ll uscan(){
    ll n=0,c=gc();bool check=0;
    while(c<'0'||c>'9'){if(c=='-')check=1;c=gc();}
    while(c<='9'&&c>='0'){n=n*10+c-'0';c=gc();}
    return check?-n:n;
}
#define sc uscan()
void prin(vector <ll> a){
    for(auto it:a)cout<<it<<' ';pc('\n');
}
void prin(vector <vector <ll> > a){
    for(auto vec:a){for(auto it:vec)cout<<it<<' ';pc('\n');}pc('\n');
}
void prin(vector <pair <ll,ll> > a){
    for(auto it:a)cout<<it.ff<<' '<<it.ss<<'\n';pc('\n');
}

int main(){
    int t=sc,kkk=1;
    while(t--){
        cout<<"Case #"<<kkk++<<": ";
        ll n=sc,m=sc,k=sc;
        ll a=sc,b=sc;
        ll a1=sc,b1=sc;
        ll a2=a1+1,b2=b1;
        if(k==2)
            a2=sc,b2=sc;
        bool we=1;
        if(((b2-b1)+(a2-a1))&1)we=0;
        if(((b-b1)+(a-a1))%2)we=0;
        if(((b2-b)+(a2-a))%2)we=0;
        if(!we){
            cout<<"N\n";
        }
        else{
            cout<<"Y\n";
        }
    }

}