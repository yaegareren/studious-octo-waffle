/*

a
b c        
d e f          ----->incremental character pattern 3
g h i j
k l m n o

loop1 is used for the levels(number of ows) and loop2 is used to print the elements. loop1 starts 
from i=1 and 1 <= 5 so we move inside loop1 where in loop2 j=1 and 1 <= 1 so alphabet(a) is printed
and incremented (to b). j++ happens and j=2 and 2 <= 1, condition is not met so control comes out of
the loop and cursor moves to a newline. Control goes back to loop1 where i++ happens and i=2, 2 <= 5
so we go inside loop1 where j=1 and 1 <= 2, so alphabet(b) gets printed and j++ happens after which
alphabet(c) gets printed, then j++ makes j=3 after which condition is not satisfied and
control comes out of the loop and cursor moves to a newline. Now, i++ happens in loop1 and the entire
process is repeated.

This goes on for 5 rows.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char alphabet= 'a';
    int n;
    cout<<"Enter the number of levels: ";
    cin>>n;
    for(int i=1; i<=n; i++){  // loop1

        for(int j=1; j<=i; j++){  // loop2

            cout<<alphabet++<<" ";
        }
        cout<<endl;
    }
    return 0;
}