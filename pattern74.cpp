/*
  5 4 3 2 1
  5 4 3 2
  5 4 3
  5 4
  5

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=n;i>=1;i--){
        for (int j=5;j>=n+1-i;j--){
            cout <<j<< " ";
        } cout<< endl;
    }
 return 0;
}