#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    vector<string> vt;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        vt.push_back(temp);
    }
    long long int face=0;
    for(long long int i=0;i<n;i++){
        if(vt[i]=="Tetrahedron"){
            face+=4;
        }
        else if(vt[i]=="Cube"){
            face+=6;
        }
        else if(vt[i]=="Octahedron"){
            face+=8;
        }
        else if(vt[i]=="Dodecahedron"){
            face+=12;
        }
        else if(vt[i]=="Icosahedron"){
            face+=20;
        }
    }
    cout<<face<<endl;
}