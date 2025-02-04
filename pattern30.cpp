/*  
    A B C D E 
    F G H I J
    K L M N O
    P Q R S T
    U V W X Y
 */

 #include <iostream>
using namespace std;
int main () {
    char k='A';
    for (char i=1;i<=5;i++){
        for (char j=1;j<=5;j++){
            cout<<char(k)<<" ";
            k++;
        }cout<<endl;
    }return 0;
}