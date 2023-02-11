#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin>>st;
    vector<char> vt;
    for(int i=0;i<st.length();i++){
        if(st[i]>=48&&st[i]<=57)vt.push_back(st[i]);
    }
    sort(vt.begin(),vt.end());
    for(int i=0;i<vt.size();i++){
        cout<<vt[i];
        if(i==vt.size()-1){
            cout<<endl;
        }
        else {
            cout<<"+";
        }
    }
}