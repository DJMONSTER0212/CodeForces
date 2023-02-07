#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast_drink=(k*l)/nl;
    int toast_lime=(c*d);
    int toast_salt=p/np;
    int ans = min(toast_drink,toast_lime);
    ans = min(ans,toast_salt);
    cout<<ans/n<<endl;
}