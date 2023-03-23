#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++)cin>>a[i];
    // for(int i=0;i<7;i++)cout<<a[i];
    if(count(a,a+7,0)==7) cout<<1<<endl;
    else{
        int i=0;
        while(n>0){
            n-=a[i];
            i++;
            if(i==7&&n>0){
                i=0;
            }
        }
        cout<<i<<endl;
    }
}