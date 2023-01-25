#include<iostream>
using namespace std;

int main(){
  int pointer,*bil;
  bil=&pointer;
  *bil=81;


  if(*bil % 2 == 0){
     *bil = 200;
    cout << *bil;
  }else{
    *bil = 201;
    cout << *bil;
  }

}
