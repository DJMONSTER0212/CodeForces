#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int max_int,min_int;
    max_int = max(x1,x2);
    max_int= max(max_int,x3);
    min_int = min(x1,x2);
    min_int = min(min_int,x3);
    int mid;
    if(x1!=max_int&&x1!=min_int) mid=x1;
    else if(x2!=max_int&&x2!=min_int) mid=x2;
    else if(x3!=max_int&&x3!=min_int) mid=x3;
    cout<<(max_int-mid)+(mid-min_int)<<endl;
}