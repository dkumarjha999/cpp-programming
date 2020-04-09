#include<bits/stdc++.h>
#define ll long long int
#define MAX 1000000000      // this was not my code but it is working fine
using namespace std;

bool isPossible(ll candies, ll arr[], ll total, ll n) {
  for(ll i = 0; i < n; i++) {
    total -= (arr[i] / candies);  // total is used for checking possible to check total how many candy we can give
  }
  if(total <= 0) 
    return true;
  return false;
}

int main() {
  ll tc;
  cin >> tc;
  
  while(tc--) {
    ll n, k;
    cin >> n >> k;
    
    ll arr[n];
    for(ll i = 0; i < n; i++) {
      cin >> arr[i];
    }
    
    ll start = 1, end = MAX, maxm = LLONG_MIN;
    while(start <= end) {
      ll mid = (start + end) / 2;
      if(isPossible(mid, arr, k, n)) {
        maxm = mid;
        start = mid + 1;
      }
      else {
        end = mid - 1;
      }
    }

    cout << maxm << endl;
  }
  return 0;
}
