#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

bitset <2000010> bs;
vi primes;

void sieve(int n){
    bs.set(); bs[0] = bs[1] = 0;
    for(ll i=2; i<n + 1; i++) if(bs[i]){
        primes.push_back(i);
        for(ll j=i*i; j<n+1; j+=i) bs[j] = 0; 
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(1000005);
    int tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        ll max1 = 0;
        for(int i=0; (ll)primes[i]*primes[i] <= n; i++){
            if(n % primes[i] == 0){
                max1 = primes[i];
                while(n % primes[i] == 0) n /= primes[i];
            }
        }
        if(n != 1) max1 = n;
        cout << max1 << "\n";
    }
}