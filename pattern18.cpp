/*  
    0 1 0 1 0
    1 0 1 0 1
    0 1 0 1 0
    1 0 1 0 1
    0 1 0 1 0
 */

 #include <iostream>
using namespace std;
int main () {
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++){
            int k=i+j;
            if (k%2==0){
                cout<<"0"<<" ";
            } else cout<<"1"<<" ";
        }cout<<endl;
    }return 0;
}