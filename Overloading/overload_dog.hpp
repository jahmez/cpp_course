#include<iostream>
#include<string>
using namespace std;
class Dog{
  private:
    string name;
    int license;
  public:
    Dog();
    Dog(int);
    Dog(string);
    Dog(string,int);
    int getLicense();
    string getName();
};
Dog::Dog(){
        name="NA";
        license=0;
}
Dog::Dog(int i){
        license=i;
        name="NA";
}
Dog::Dog(string s){
        name=s;
        license=0;
}
Dog::Dog(string s, int i){
        license = i;
        name = s;
}
int Dog::getLicense(){
        return license;
}

string Dog::getName(){
        return name;
}
