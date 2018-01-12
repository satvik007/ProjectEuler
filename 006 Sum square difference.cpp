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
    ll a[100000];
    ll sum = 0, squares = 0;
    for(int i=1; i<=10005; i++){
        sum += i; squares += i * i;
        a[i] = sum * sum - squares;
    }
    while(tc--){
        int n; cin >> n;
        cout << abs(a[n]) << "\n";
    }
    return 0;
}