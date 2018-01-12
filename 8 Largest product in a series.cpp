#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int tc; cin >> tc;
    while(tc--){
        int n,k; cin >> n >> k;
        string a; cin >> a;
        int cnt = 0, res = 1;
        int max1 = 0;
        for(int i=0; i<a.size(); i++){
            if(cnt < k && a[i] == '0'){
                res = 1; cnt = 0; continue;
            }
            if(cnt < k){
                res *= (a[i]-'0'); cnt++;
            }
            if(cnt == k){
                max1 = max(max1, res);
                res /= (a[i - k + 1]-'0');
                cnt--;
            }
        }
        cout << max1 << "\n";
    }
    return 0;
}