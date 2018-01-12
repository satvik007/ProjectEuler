#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;

int dr[] = {0, 1, -1, 1};
int dc[] = {1, 0,  1, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    vector <vi> a(20, vi(20));
    int n = 20;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> a[i][j];
    int max1 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int tx, ty;
            for(int k=0; k<4; k++){
                int res = 1, cnt = 0;
                for(int m=0; m<4; m++){
                    tx = i + m * dr[k];
                    ty = j + m * dc[k];
                    if(tx >= 0 && ty >= 0 && tx < 20 && ty < 20){
                        res *= a[tx][ty]; cnt++;
                    }else break;
                }
                if(cnt == 4){
                    max1 = max(max1, res);
                }
            }
        }
    }
    cout << max1 << "\n";
    return 0;
}