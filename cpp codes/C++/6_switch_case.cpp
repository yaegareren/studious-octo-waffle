#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    switch(n){
          case 1:
          cout<<"Monday";
          break;
          case 2:
          cout<<"Tuesday";
           break;
          case 3:
          cout<<"Wednesday";
           break;
          case 4:
          cout<<"Thursday";
           break;
          case 5:
          cout<<"Friday";
           break;
          case 6:
          cout<<"Saturday";
           break;
          case 7:
          cout<<"Sunday";
           break;

           //optional
          default:
            cout<<"Invalid input";
            }
    }
    return 0;
}
