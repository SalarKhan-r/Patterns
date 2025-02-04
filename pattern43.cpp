/*  
    1
    3 5 
    5 7 9
    7 9 11 13
    9 11 13 15 17

     */

 #include <iostream>
using namespace std;
int n=5;
int k;
int main () {
    for (int i=1;i<=n;i++){
        k= i-1;
        for (int j=1;j<=i;j++){
            cout<<k+i<<" ";
            k+=2;
            }
            cout << endl;
        }
    return 0;
}