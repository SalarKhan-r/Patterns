/*  
   A B C D E
   A B C D E
   A B C D E
   A B C D E
   A B C D E
 */

 #include <iostream>
using namespace std;
int main () {
    for (char i='A';i<='E';i++){
        for (char j='A';j<='E';j++){
            cout<<char(j)<<" ";
        }cout<<endl;
    }return 0;
}