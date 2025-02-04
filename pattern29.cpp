/*  
    E D C B A
    E D C B A
    E D C B A 
    E D C B A 
    E D C B A
 */

 #include <iostream>
using namespace std;
int main () {
    for (char i='E';i>='A';i--){
        for (char j='E';j>='A';j--){
            cout<<char(j)<<" ";
        }cout<<endl;
    }return 0;
}