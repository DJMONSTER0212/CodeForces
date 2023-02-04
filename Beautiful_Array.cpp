#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int done=0;
        int sum=0;
        int t=a[0];
        int same=0;
        for(int i=0;i<n;i++){
            if(a[i]!=sum){
                sum+=a[i];
                done++;
            }
            if(t==a[i]) same++;
        }
        if(done==n){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)cout<<a[i]<<" ";
            cout<<endl;
        }
        else if(same==n){
            cout<<"NO"<<endl;
        }
        else{
            deque<int>dq;
            for(int i=0;i<n;i++)dq.push_back(a[i]);
            sort(dq.begin(),dq.end());
            for(int i=0;i<n;i++){
                if(i%2==0){
                    a[i]= dq.front();
                    dq.pop_front();
                }
                else{
                    a[i]=dq.back();
                    dq.pop_back();
                }

            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}