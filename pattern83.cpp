/*
  1 0 1 0 1
  1 0 1 1
  1 0 1
  1 0
  1

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=1;i<=n;i++){
        for (int j=5;j>=i;j--){
            cout <<j%2<< " ";
        } cout<< endl;
    }
 return 0;
}