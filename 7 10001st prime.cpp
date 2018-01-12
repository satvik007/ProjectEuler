#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

bitset <2000010> bs;
vi primes;
void sieve(){
    bs.set(); bs[0]=bs[1]=false;
    for(ll i=2; i<1000000+5; i++) if(bs[i]){
            primes.push_back(i);
            for(ll j=i*i; j<1000000+5; j+=i) bs[j] = false;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    sieve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << primes[n-1] << "\n";
    }
    return 0;
}