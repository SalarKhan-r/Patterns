/*  
     5 6 15 16 25
     4 7 14 17 24
     3 8 13 18 23
     2 9 12 19 22
     1 10 11 20 21
     */

 #include <iostream>
using namespace std;
int n=5;
int main () {
    for (int i=1;i<=n;i++){
        int x=i;
        int y=n-i+1;
        for (int j=1;j<=n;j++){
          if (j%2==0) {cout<<x<<" ";
          } else {
          cout<<y<<" ";
          } x+=n;
          y+=n;
        }
            cout << endl;
        }
    return 0;
}