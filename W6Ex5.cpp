#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int t,x;
    set<int> s;
    for (int i=0; i<n; i++) {
        cin >> t >> x;
        if (t==1) {
            s.insert(x);
        }  
        else {
            auto it=s.find(x);
            if (it!=s.end() && t==2) s.erase(it);
            else if (t==3) {
                if (it==s.end()) cout << "No\n";
                else cout <<"Yes\n";
            }
        }
    }
    return 0;
}



