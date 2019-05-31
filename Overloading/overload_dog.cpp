/*Example of overloading a class' constructor method several different ways*/
#include"overload_dog.hpp"
int main(){
        using namespace std;
        Dog d1;
        Dog d2("Kali");
        Dog d3(1234);
        Dog d4("Sammy", 5678);

        cout<<d1.getName()<<", "<<d1.getLicense()<<"\n";
        cout<<d2.getName()<<", "<<d2.getLicense()<<"\n";
        cout<<d3.getName()<<", "<<d3.getLicense()<<"\n";
        cout<<d4.getName()<<", "<<d4.getLicense()<<"\n";
        return 0;
}
