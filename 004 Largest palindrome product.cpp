#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    vector <int> a;
    string b, c;
    int val;
    for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
            val = i*j;
            b = to_string(val);
            c = b; reverse(c.begin(), c.end());
            if(b == c){
                a.push_back(val);
            }
        }
    }
    sort(a.begin(), a.end());
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int index = lower_bound(a.begin(), a.end(), n) - a.begin();
        cout << a[index-1] << "\n";
    }
    return 0;
}