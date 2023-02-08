#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            a[i][j]= '.';   
        }
    }
    // cout<<a[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2!=0){
                a[i][j]='#';
            }
            else {
                if(i%4!=0)a[i][m]='#';
                else if(i%4==0)a[i][1] = '#';
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

}