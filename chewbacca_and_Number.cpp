#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin>>st;
    
    for(long long int i=0;i<st.length();i++){
        if(i==0&&st[i]=='9')
            continue;
        else if(st[i]>52) 
            st[i]= (48+57-st[i]);
        // cout<<(48+57-int(st[i]))<<endl;
    }
    cout<<st<<endl;
}