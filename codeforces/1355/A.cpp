#include <bits/stdc++.h>
typedef long long ll;
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define FOR(i,a,b) for( ll i = (ll)(a); i <= (ll)(b); i++ )
#define ROF(i,a,b) for( ll i = (ll)(a); i >= (ll)(b); i-- )
#define debug(x) cerr << "[DEBUG] " << #x << " = " << x << endl;
#define matrix vector< vector<ll> >
#define F first
#define S second
#define mp make_pair
#define INPFILE freopen("input.in","r",stdin)
#define OUTFILE freopen("output.out","w",stdout)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;


ll next(ll a) {
  ll minVal = 9, maxVal = 0;
  ll val = a;
  while (val > 0) {
    minVal = min(minVal, val % 10);
    maxVal = max(maxVal, val % 10);
    val /= 10;
  }
  return a + minVal * maxVal;
}

int main() {
  ll t; cin >> t;
  while (t--) {
    ll a, k;
    cin >> a >> k;

    while (k - 1 > 0) {
      ll na = next(a);
      if (na == a) break;
      a = na;
      k--;
    }
    cout << a << '\n';
  }

}
