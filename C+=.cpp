#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       long long int a,b,n;
        cin>>a>>b>>n;
        long long int large = max(a,b);
        long long int min_ = min(a,b);
        long long int times=0;
        while(large<=n&&min_<=n){
            if(times%2!=0){
                large+=min_;
            }
            else if(times%2==0){
                min_+=large;
            }
            times++;
        }
        cout<<times<<endl;
    }
}