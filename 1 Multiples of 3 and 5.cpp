#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        long long counter = 0;
        int n;
        cin >> n;
        n--;
        long long a = n/3;
        long long b = n/5;
        long long c = n/15;
        counter += a*(a+1)/2*3 + b*(b+1)/2*5 - c*(c+1)/2*15;
        cout << (counter) << endl;
    }
    return 0;
}
