#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int pressed=0;
    int galat,sahi;
    sahi=0;
    galat =n-1;
    while(galat !=0){
        // // pressed += galat + (galat-1)*sahi;
        // // galat--;
        // // sahi ++;
        // // pressed+=sahi;
        // if(sahi==0){pressed+=galat;
        // galat--;}
        // else{
        //     pressed += sahi;
        //     pressed++;
        //     galat--;
        // }
        // sahi++;
        pressed += galat + galat*sahi;
        galat--;
        sahi++;
    }
        if(galat==0){
            sahi=n;
            pressed+=sahi;
        }
        cout<<pressed<<endl;
}