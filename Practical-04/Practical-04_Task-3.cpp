#include <iostream>
namespace first{
  int add(int a,int b){
    return(a+b);
  }
}
namespace second{
  float add(float a,float b){
    return(a+b);
  }
}

int main(){
  cout << add(1,2) << endl;
  cout << second::add(1.f,1.2f) << endl;
  return 0;
}
