#include<iostream>
#include<time.h>
using namespace std;

class Point3D
{
private:
    int x, y, z;

public:
    Point3D()
    {
        cout << "Default constructor\n";
        x = y = z = 0;
    }

    Point3D(int x1, int y1, int z1)
    {
        cout << "Constructor with 3 parameters\n";
        x = x1;
        y = y1;
        z = z1;
    }

    void Init()
    {
        x = rand() % 10;
        y = rand() % 10;
        z = rand() % 10;
    }

    void Init(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }

    void Output()
    {
        cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
    }
};

int main()
{
    srand(unsigned(time(0)));

    Point3D obj1;
    obj1.Output();

    Point3D obj2(10, 20, 30);
    obj2.Output();

    Point3D obj3;
    obj3.Init();
    obj3.Output();

    system("pause");
    return 0;
}
