#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //ifstream cin("in.txt");
    int t;
    cin >> t;
    vector <long long int> a;
    a.push_back(1); a.push_back(2);
    long long current;
    for(int i=2; a[i-1]<4e16; i++){
        current = a[i-1] + a[i-2];
        //cout << current << endl;
        a.push_back(current);
    }
    vector <long long > b(a);
    b[0] = 0;
    for(int i=1; i<b.size(); i++){
    	if(b[i]%2 == 0) b[i]+=b[i-1];
    	else b[i] = b[i-1];
    	//cout << b[i] << endl;
	}
    while(t--){
        long long n;
        cin >> n;
        int index = lower_bound(a.begin(), a.end(), n) - a.begin();
        index--;
        cout << b[index] << endl;
        
    }
    return 0;
}
