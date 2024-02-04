/*

  * * * * *
   * * * *
    * * *     -----> inverted pyramid pattern
     * *
      *

With every row, number of symbols decrease by 1 and there is a space between every symbol. Additional spaces ae printed at start of every row which keep on increasing (from 0 to 4)
  
i starts from 5. 5 >= 1 condition is met and we move to loop2 where k= 0 and 0 > 0 condition is not met so we come out of loop2 and move to loop 3 where j=5 and 5>0 so a star and a space is printed 5 times until j becomes 0 due to j-- condition. We move to a new line due to last statement of loop1 and from there control goes back to loop1 where i-- happens and i =4. 4 >= 1 so we move to loop2 where k = 1 and 1>0 so one space is printed and we move to loop3 where j=4 and 4>0 so 4 stars with spaces are printed.

This goes on until 5 levels are reached.





*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;

    for(int i=n; i>=1; i--){      //loop1

            for(int k=n-i; k>0; k--)
               cout<<" ";

        for(int j=i; j>0; j--){  //loop2

            cout<<"* ";
        }
     cout<<endl;
    }

    return 0;
}

