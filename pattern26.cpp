/*  
    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E
 */

 #include <iostream>
using namespace std;
int main () {
    for (char i='A';i<='E';i++){
        for (char j='A';j<='E';j++){
            cout<<char(i)<<" ";
        }cout<<endl;
    }return 0;
}