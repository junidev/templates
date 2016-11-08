#include <iostream>
#include <algorithm>
#include <vector>
#include<set>
using namespace std;
template <typename Type >
class Point{
    private:
        Type x,y;
    public:
        Point(){}
        Point(const Type _x,const Type _y): x(_x), y(_y){}
        ~Point(){}
        Type getX(){
            return x;
        }
        Type getY(){
            return y;
        }
        void setX(Type _x ){
            x=_x;

        }

        void setY(Type _y ){
            y=_y;

        }

         Point operator+(const Point<Type>);
         Point operator-(const Point<Type>);


};


template <typename Type>
Point<Type> Point<Type>::operator+(const Point p)
{
  Point tmp;
  tmp.x = x + p.x;
  tmp.y = y + p.y;
  return tmp;
}

template <typename Type>
Point<Type> Point<Type>::operator-(const Point p)
{
  Point tmp;
  tmp.x = x - p.x;
  tmp.y = y - p.y;
  return tmp;
}
int main(){
    Point <int> p1(3,4);
    Point <float> p2(5.4,8.4);

    cout <<  p2.getY() << endl;


}
