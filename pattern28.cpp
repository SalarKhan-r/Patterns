/*  
    E E E E E
    D D D D D
    C C C C C
    B B B B B
    A A A A A
 */

 #include <iostream>
using namespace std;
int main () {
    for (char i='E';i>='A';i--){
        for (char j='E';j>='A';j--){
            cout<<char(i)<<" ";
        }cout<<endl;
    }return 0;
}