/*  
     2
     2 4
     2 4 6
     2 4 6 8
     2 4 6 8 10
     */

 #include <iostream>
using namespace std;
int n=5;
int main () {
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j*2<<" ";
            }
            cout << endl;
        }
    return 0;
}