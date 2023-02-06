#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6][6];
    int x,y;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(i==0||j==0) a[i][j]=0;
            else {
                cin>>a[i][j];
                if(a[i][j]==1){
                    x=i;
                    y=j;
                }
            }
        }
    }
    int ans;
    ans = abs(3-x) + abs(3-y);
    cout<<ans<<endl;
}