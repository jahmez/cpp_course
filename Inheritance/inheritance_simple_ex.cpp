



#include <iostream>
#include <string>
using namespace std;

class Flower{
  private:
    string bloomtime;
  public:
    void setBloomTime(string);
    string getBloomTime(void);
};

void Flower::setBloomTime(string input){
        bloomtime=input;
}
string Flower::getBloomTime(void){
        return bloomtime;
}

class Rose : public Flower{
  private:
    string fragrance;
  public:
    void setFragrance(string);
    string getFragrance(void);
};

void Rose::setFragrance(string input){
        fragrance = input;
}
string Rose::getFragrance(void){
        return fragrance;
}

int main(){
        Rose r1;
        r1.setBloomTime("spring");
        r1.setFragrance("strong");

        cout<<"r1 blooms in "<<r1.getBloomTime()<<", "<< r1.getFragrance()<<"\n";
        return 0;
}
