#include <iostream>

/*Overloaded function declarations where variable types of parameters are different*/
int findSmaller(int, int);
float findSmaller(float, float);
char findSmaller(char,char);

int main(){
        using namespace std;
        int a = 5;
        int b = 4;
        float f1=5.43;
        float f2=6.32;
        char c1 = 'c';
        char c2 = 'z';
        cout<<findSmaller(a,b)<<" is the smallest int\n";
        cout<<findSmaller(f1,f2)<<" is the smallest float\n";
        cout<<findSmaller(c1,c2)<<" is the smallest char\n";
        return 0;
}

int findSmaller(int i1, int i2){
        if(i1<i2){return i1;}
        return i2;
}

float findSmaller(float f1, float f2){
        if(f1<f2){return f1;}
        return f2;
}

char findSmaller(char c1, char c2){
        if(c1<c2){return c1;}
        return c2;
}
