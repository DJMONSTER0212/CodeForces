#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int a,b;
    a=n/2;
    b=n-2*a;
    int flag=0;
    while(a>0){
        if((a+b)%m==0){
            flag = 1;
            break;
        }
        else{
            a--;
            b+=2;
        }
    }
    if(flag||(a+b)%m==0) cout<<a+b<<endl;
    else cout<<-1<<endl;
}