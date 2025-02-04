/*
  0
  0 1
  0 1 0
  0 1 0 1
  0 1 0 1 0
  0 1 0 1 0 1

*/

#include<iostream>
using namespace std;
int main () {
    for (int i=1;i<=6;i++) {
        for (int j=0;j<=i-1;j++){
            cout<< j%2<<" ";
        } cout<<endl;
    }
    return 0;
}