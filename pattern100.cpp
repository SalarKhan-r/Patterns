/*
        1
       21
      321
     4321
    54321

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=1;i<=n;i++){
        for (int j=n;j>=1;j--){
              if (i>=j) { 
                cout <<j;
              } else cout <<" ";
            }cout<<endl;
    }
    return 0;
}