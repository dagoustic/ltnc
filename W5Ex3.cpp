#include <bits/stdc++.h>
using namespace std;

int palindromeIndex(string s) {
    int l,r;
    bool flag=false;
    bool c1=true,c2=true;
    int S=s.size();
    for (int i=0; i<S/2; i++) {
        if (s[i]!=s[S-1-i] && flag==false){
            flag=true;
            l=i;
            r=S-1-i;
        }
        if (flag==true) {
            if (s[i+1]!=s[S-1-i]) c1=false;
            if (s[i]!=s[S-2-i]) c2=false;
        }
    }
    if (flag==false) return -1;
    if (c1==true) return l;
    else if (c2==true) return r;
    else return -1;
}
int main()
{
	string x;
	cin >> x;
	cout << palindromeIndex(x);
	return 0;
}
