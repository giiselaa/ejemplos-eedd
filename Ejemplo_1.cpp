#include <iostream>>
using namespace std;

void Ejemplo_1(int a, int& b);

int main(int argc, char** argv)
{
    int x = 2, y = 4;
    cout << "1. x = " << x << "y = " << y << endl;
    Ejemplo_1(x, y);
    cout << "2. x = " << x << "y = " << y << endl;
    return 0;
}

void Ejemplo_1(int a, int& b)
{
    a = 5;
    b = 8;
}