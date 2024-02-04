#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    cout<<"\nEntered Year: "<<y;
    if(y%4==0){
            if(y%100==0){
                    if(y%400==0){
        cout<<"\nleap year";}}
    }
    else{
        cout<<"\nNot a leap year";
    }
    return 0;
}
