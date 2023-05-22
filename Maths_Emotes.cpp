#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k;
    cin>>n>>m>>k;
    long long int a[n];
    for(long long int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    long long int mx=a[n-1];
    long long int mx2 = a[n-2];
    long long int add = mx*k + mx2;
    long long int ans=0;
    if(m/(k+1)>0){
        ans = ans + (m/(k+1))*add;
        if(m%(k+1)!=0){
            ans = ans + (m%(k+1))*mx;
        }
    }
    else {
        ans = ans + (m)*mx;
    }
    cout<<ans<<endl;
//    long long int ans=0;int c=0;
//     for(int i=0;i<m;i++){
//         if(c!=k){
//             c++;
//             ans+=mx;
//         }
//         else {
//             c=0;
//             ans+=mx2;
//         }
//     }
    // cout<<ans<<endl;
}