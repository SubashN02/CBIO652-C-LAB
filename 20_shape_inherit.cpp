#include <iostream>

using namespace std;

class shape{
public:
    int length,breadth,depth;
};
class square:public shape{
    public:
    int area(int length)
    {
    int a=length*length;
    return a;
    }
    public:
    void display(int a)
    {
        cout<<"Area of square :"<<a<<endl;
    }
};
class cube:public shape{
     public:
    int area(int length)
    {
    int a=(6*length*length);
    return a;
    }
    public:
    void display(int a)
    {
        cout<<"Area of cube :"<<a<<endl;
    }
};
class rectangle:public shape{
      public:
    int area(int length,int breadth)
    {
    int a=length*breadth;
    return a;
    }
    public:
    void display(int a)
    {
        cout<<"Area of rectangle :"<<a<<endl;
    }
};
class triangle:public shape{
      public:
    int area(int length,int depth)
    {
    float a=(0.5*length*depth);
    return a;
    }
    public:
    void display(int a)
    {
        cout<<"Area of triangle :"<<a<<endl;
    }
};
int main()
{
   square s;
    cube c;
    rectangle r;
    triangle t;
   s.display(s.area(10));
    c.display(c.area(10));
     t.display(t.area(10,5));
      r.display(r.area(10,5));
    return 0;
}
