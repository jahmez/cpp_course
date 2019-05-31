#include <iostream>

using namespace std;

template <typename T>
T sum(T, T);

int main(){
  int a=90;
  int b=1;
  cout<<"Sum is: "<<sum(a,b)<<"\n";
  return 0;
}

template <typename T>
T sum(T input1, T input2){
        return input1+input2;
}
