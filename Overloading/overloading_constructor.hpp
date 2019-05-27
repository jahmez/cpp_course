#include <iostream>
using namespace std;
class Square{
        public:
        Square(int,int);
        Square();
        int getWidth();
        int getLength();
        private:
        int width;
        int length;
};

Square::Square(){
        width=0;
        length=0;
}
Square::Square(int w, int l){
        width=w;
        length=l;
}
int Square::getWidth(){
        return width;
}
int Square::getLength(){
        return length;
}
