#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int st;
        cin>>st;
        deque<int> dq;
        for(int i=0;st>0;i++){
            dq.push_front(st%10);
            st/=10;
        }
        if(dq.size()==1){
            cout<<1<<endl;
            cout<<dq[0]<<endl;
        }
        else{
            int adi=0;
            for(int i=0;i<dq.size();i++){
                if(dq[i]!=0)adi++;
            }
            cout<<adi<<endl;
            for(int i=0;i<dq.size();i++){
                if(dq[i]!=0){
                    cout<<dq[i]*pow(10,dq.size()-i-1)<<" ";
                }
            }
            cout<<endl;
        }
    }
}