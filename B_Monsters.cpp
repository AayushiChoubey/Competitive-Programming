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
    int t;
    cin >> t; 

    while (t--) { 
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            a[i] %= k; 
            if (a[i] == 0) a[i] = k; 
        }

       
        vector<int> ord(n);
        for (int i = 0; i < n; i++) {
            ord[i] = i;
        }

       
        stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
            return a[i] > a[j];
        });

      
        for (int i = 0; i < n; i++) {
            cout << ord[i] + 1 << ' ';
        }
        cout << endl; 
    }

    return 0;
}