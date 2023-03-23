#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int n2 = n*2;
    int a[n2];
    for(int i=0;i<n2;i++)cin>>a[i];
    sort(a,a+n2);
    // for(int i=0;i<n2;i++)cout<<a[i]<<" ";
    int med1,med2;
    med1  = a[n2/2-1];
    med2 = a[n2/2];
    cout<<med2-med1<<endl;
    }
}