#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    int t;
    for (int i=0; i<n; i++) {
        cin >> t;
        v.push_back(t);
    }
    int m;
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> t;
        auto it=lower_bound(v.begin(),v.end(),t);
        if (*it==t) cout << "Yes " << it-v.begin()+1 << endl;
        else cout << "No " << it-v.begin()+1 << endl;
    }
    return 0;
}
