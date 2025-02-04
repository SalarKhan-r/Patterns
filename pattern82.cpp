/*
  0 0 0 0 0
  1 1 1 1
  0 0 0
  1 1
  0

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=n;i>=1;i--){
        for (int j=5;j>=n+1-i;j--){
            cout <<(i+1)%2<< " ";
        } cout<< endl;
    }
 return 0;
}