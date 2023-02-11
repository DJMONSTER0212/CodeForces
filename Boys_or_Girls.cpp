#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin>>st;
    map<char,int> mp;
    for(int i=0;i<st.length();i++){
        mp[st[i]]= mp[st[i]] + 1;
    }
    if(mp.size()%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}