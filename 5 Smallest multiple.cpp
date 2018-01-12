#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

bitset <64> bs;
vi primes;
void sieve(){
    bs.set(); bs[0]=bs[1]=false;
    for(int i=2; i<50; i++) if(bs[i]){
            primes.push_back(i);
            for(int j=i*i; j<50; j+=i) bs[j] = false;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    sieve();
    int tc; cin >> tc;
    ll a[50], val = 1, temp;
    for(int i=1; i<=40; i++){
        temp = val;
        int j = i;
        for(auto el:primes){
            while((temp % el == 0) && (j % el == 0)){
                j /= el;
                temp /= el;
            }
            if(el > j) break;
        }
        val *= j;
        a[i] = val;
    }
    while(tc--){
        int n; cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}