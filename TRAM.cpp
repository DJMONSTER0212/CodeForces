#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int passenger[n][2];
    int max=0;
    int current=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++)cin>>passenger[i][j];
    }
    for(int i=0;i<n;i++){
        current = current+passenger[i][1] - passenger[i][0];
        if(current >max)max=current;
    }
    cout<<max<<endl;
}