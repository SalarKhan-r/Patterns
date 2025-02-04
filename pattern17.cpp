/*  
    1 3 5 7 9
    3 5 7 9 11
    5 7 9 11 13
    7 9 11 13 15
    9 11 13 15 17
 */

 #include <iostream>
using namespace std;
int main () {
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++){
            cout<<(2*(i+j)-3)<<" ";
        }
        cout<<endl;
    }return 0;
}