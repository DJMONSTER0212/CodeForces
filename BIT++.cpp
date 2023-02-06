#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        v.push_back(temp);
    }    
    int x=0;
    for(int i=0;i<n;i++){
        if(v[i][1]=='+'&&v[i][0]=='X') x++;
        else if(v[i][1]=='+'&&v[i][0]=='+') ++x;
        else if(v[i][1]=='-'&&v[i][0]=='X') x--;
        else if(v[i][1]=='-'&&v[i][0]=='-') --x;
    }
    cout<<x<<endl;
}