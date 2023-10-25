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
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        ll n;
        cin >> n;
        vv64 v(n);
        ll d, s;
        for (int i = 0; i < n; i++)
        {
            cin >> d >> s;
           v[i].push_back(d);
              v[i].push_back(s);
        }

         ll ans = LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            if(v[i][1]%2==0)
            {
                ans = min(ans , v[i][0]-1 + v[i][1]/2);
            }
            else
            {
                ans = min(ans , v[i][0] + v[i][1]/2);
            }
           
           
        }
        cout << ans << endl;


    }
    return 0;
}