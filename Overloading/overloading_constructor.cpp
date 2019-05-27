/*Overloading a classes constructors*/
#include "overloading_constructor.hpp"
int main(){
        Square s1;
        Square s2(4,3);
        cout<<"s1 dimension are: "<<s1.getWidth()<<","<<s1.getLength()<<"\n";
        cout<<"s2 dimensions are: "<<s2.getWidth()<<","<<s2.getLength()<<"\n";
        return 0;
}
