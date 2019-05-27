/*Overloading using a Compare Class*/

#include "overloading_classes_ex.hpp"

int main(){
        using namespace std;
        Compare c;
        int a=5;
        int b=4;
        float f1=5.43;
        float f2=6.32;
        char c1='c';
        char c2='z';
        cout<<c.findSmaller(a,b)<<" is the smallest int\n";
        cout<<c.findSmaller(f1,f2)<<" is the smallest float\n";
        cout<<c.findSmaller(c1,c2)<<" is the smallest char\n";
        return 0;
}
