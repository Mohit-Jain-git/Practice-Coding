#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll inf=1e18;
const ll M=1e9+7;
string to_string(ll x){stringstream ss; ss<<x; return ss.str();}
ll to_integer(string s){stringstream ss(s); ll x; ss>>x; return x;}
 
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
	{
	    ll n,a,b,k;
	    cin>>n>>a>>b>>k;
	    ll x=n/a;
	    ll y=n/b;
	    ll lcm=(a*b)/__gcd(a,b);
	    ll z = (n/lcm) * 2;
	    if((x+y-z)>=k)
	        cout<<"Win\n";
	    else
	        cout<<"Lose\n";
	        cout << endl;
	}
	     return 0;
}
 