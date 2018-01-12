#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

ll max(ll a, ll b){
    return (a >= b ? a : b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int tc; cin >> tc;
    ll a[400000]; memset(a, -1, sizeof a);
    for(int i=1; i <= 1500; i++){
        for(int j=i; j <= 1500; j++){
            auto val = (int)sqrt(i*i + j*j);
            if(val * val == i*i + j*j){
                a[val + i + j] = max(a[val+i+j], val * i * j);
            }
        }
    }
    while(tc--){
        int n; cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}