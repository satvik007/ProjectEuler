#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

bitset <4000010> bs;
vi primes;

void sieve(int size){
    size++;
    bs.set(); bs[0]=bs[1] = false;
    for(ll i=2; i<=size; i++) if(bs[i]){
            primes.push_back(i);
            for(ll j = i*i; j <=size; j+=i) bs[j] = false;
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int tc; cin >> tc;
    sieve(2000050);
    ll sum[1000010]; memset(sum, -1, sizeof sum);
    ll res = 0;
    for(int i=0; primes[i] < 1000005; i++){
        res += primes[i];
        sum[primes[i]] = res;
    }
    ll last = 0;
    for(int i=0; i<1000005; i++){
        if(sum[i] == -1) {
            sum[i] = last;
        }else{
            last = sum[i];
        }
    }
    while(tc--){
        int n; cin >> n;
        cout << sum[n] << "\n";
    }
    return 0;
}