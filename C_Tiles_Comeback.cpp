#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define SZ(x) ((int)(x).size())
#define allr(a) (a).rbegin(),(a).rend()
#define google(it, ans) cout<<"Case #"<<it<<": "<<(ans)<<endl
 

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k==1){
            cout<<"YES"<<endl;
            continue;
        }
        if(a[0]==a[n-1]){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(a[0]==a[i]) cnt++;
            }
            if(cnt>=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        int cnt1=0,cnt2=0;int flag1=-1,flag2=-1;
        for(int i=0;i<n;i++){
            if(a[0]==a[i]) cnt1++;
            if(cnt1==k&&a[0]==a[i]){
                flag1=i;
            }
        }
        for(int i=0;i<n;i++){
            if(a[n-1]==a[n-1-i]) cnt2++;
            if(cnt2==k&&a[n-1]==a[n-1-i]){
                flag2=n-1-i;
            }
        }
        if(flag1<flag2&&cnt1>=k&&cnt2>=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}