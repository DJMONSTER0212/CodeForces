#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max_i;
    int min_i;
    auto max_ = max_element(a,a+n);
    auto min_ = min_element(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==*min_)min_i=i;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==*max_)max_i=i;
    }
    if(max_i>min_i){
         cout<<max_i+(n-1-min_i)-1<<endl;
    }
    else{
        cout<<max_i+(n-1-min_i)<<endl;
    }
}