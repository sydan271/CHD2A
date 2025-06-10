#include<bits/stdc++.h>

using namespace std;
main(){
long long m, n;
string s;
while (cin >> m >> n >> s){
    bool bl=0;
    if (s=="On") bl=(n<=m);
    if (s=="Onlogn") bl=(n*log2(n)<=m);
    if (s=="On^(3/2)") bl=(pow(n,1.5)<=m);
    if (s=="On^2") bl=((n*n)<=m);
    if (s=="On^2logn") bl=(n*n*log2(n)<=m);
    if (s=="On^3" && n<=1000) bl=(n*n*n<=m);
    if (s=="On^4" && n<=178) bl=(n*n*n*n<=m);
    if (s=="O2^n" && n<=30) bl=(pow(2,n)<=m);
    if (s=="On!" && n<=13)
    {
        int x=1;
        while (n--) x*=n;
        bl=(x<=m);
    }
    if (bl) cout << "AC";
    else cout <<"TLE";
    cout << endl;
}
}
