/*  
     5
     4 4
     3 3 3
     2 2 2 2
     1 1 1 1 1
     */

 #include <iostream>
using namespace std;
int n=5;
int main () {
    for (int i=n;i>=1;i--){
        for (int j=1;j<=n-i+1;j++){
            cout<<i<<" ";
            }
            cout << endl;
        }
    return 0;
}