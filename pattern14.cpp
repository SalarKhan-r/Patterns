/*  
     5 10 15 20 25
     4 9 14 19 24
     3 8 13 18 23
     2 7 12 17 22
     1 6 11 16 21
     */

 #include <iostream>
using namespace std;
int n=5;
int main () {
    for (int i=1;i<=n;i++){
        int x=n-i+1;
        for (int j=1;j<=n;j++){
          cout<<x<<" ";
          x+=n;
          } 
          cout<<endl;
        }
    return 0;
}