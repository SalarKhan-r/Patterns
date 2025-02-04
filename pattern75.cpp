/*
  5 4 3 2 1
  6 5 4 3 
  7 6 5
  8 7 
  9

*/

#include<iostream>
using namespace std;
int n=5;
int main () {
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){
            cout <<n+i-j<< " ";
        } cout<< endl;
    }
 return 0;
}