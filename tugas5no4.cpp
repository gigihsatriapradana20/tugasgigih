#include <iostream>
using namespace std;
int main(){
    int a = 3; int b = 2, c = 1, bil;
   
    cout << "Bil-A   | Bil - B| Bil - C\n";
    cout <<"===========================";
    for(bil = 1;bil <= 10; ++bil){
        a+=b; b+=c; c+=2;
        cout <<"\n" << a <<"\t|"<< b <<"\t |"<< c;                                           
        if (c == 13)
        break;
    }
    return 0;
}