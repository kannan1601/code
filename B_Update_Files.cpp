#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}
vector<ll> sieve(int n) 
{int arr[n];for(int i = 0; i < n; i++)arr[i] = 0; vector<ll> vect; for (int i = 2; i * i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = i * i; j <= n; j += i)arr[j] = 1;} return vect;}

void solve()
{	
	ll n, k;
  cin >> n >> k;
  ll computers = 1;
  ll remaining = n - 1;
  ll ans = 0;
  while(computers <= k && remaining > 0)
  {
    remaining-=computers;
    computers+=computers;
    ans++;
  }
  if(remaining > 0)
  {
    ans += (remaining + k - 1LL) / k;
  }
  cout << ans <<"\n";


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}

	
