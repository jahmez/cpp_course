#include <iostream>

class Compare{
        /*public methods*/
        public:
        int findSmaller(int,int);
        float findSmaller(float,float);
        char findSmaller(char,char);
};

int Compare::findSmaller(int i1, int i2){
        if(i1<i2){return i1;}
        return i2;
}
float Compare::findSmaller(float f1,float f2){
        if(f1<f2){return f1;}
        return f2;
}
char Compare::findSmaller(char c1, char c2){
        if(c1<c2){return c1;}
        return c2;
}
