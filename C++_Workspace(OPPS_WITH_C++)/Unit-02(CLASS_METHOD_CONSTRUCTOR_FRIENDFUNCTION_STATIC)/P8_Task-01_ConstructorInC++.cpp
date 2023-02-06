// P8_Task-01_ConstructorInC++.cpp

#include <iostream>
#include <string>
using namespace std;

class Area
{

private:
    int squareSide;

    int recSide1;
    int recSide2;

    int squareArea;
    int recArea;

public:
    Area(int squareSide)
    {

        this->squareArea = squareSide * squareSide;
    }

    Area(int recSide1, int recSide2)
    {

        this->recArea = recSide1 * recSide2;
    }

    int getSquareArea()
    {
        return this->squareArea;
    }

    int getRecArea()
    {
        return this->recArea;
    }
};

int main()
{

    Area obj1(12);

    cout << obj1.getSquareArea() << endl;

    Area obj2(12, 6);
    cout << obj2.getRecArea() << endl;

    return 0;
}