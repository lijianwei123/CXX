#include <cstdlib>
#include <iostream>

using namespace std;

class Radius
{

    friend class Circle;
    friend void Show_r(Radius &n);

public:
    Radius(int x)
    {
        this->r = x;
    }

    ~Radius()
    {

    }

private:
    int r;
};

void Show_r(Radius &n)
{
    cout << "圆的半径为:" << n.r << endl;
}


class Circle
{
public:
    Circle()
    {

    }
    ~Circle()
    {

    }
    double area(Radius a)
    {
        return s = a.r * a.r * 3.1415926;
    }

private:
    double s;
};


int main(int argc, char **argv)
{
    Radius objRadius(9);
    Circle objCircle;

    Show_r(objRadius);
    cout << "面积为：" << objCircle.area(objRadius) << endl;

    system("PAUSE");

    return EXIT_SUCCESS;
    
}
