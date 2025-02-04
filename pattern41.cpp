/*  
     1
     2 3 
     4 5 6
     7 8 9 10
     */

 #include <iostream>
using namespace std;
int n=4;
int k=1;
int main () {
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<k<<" ";
            k+=1;
            }
            cout << endl;
        }
    return 0;
}