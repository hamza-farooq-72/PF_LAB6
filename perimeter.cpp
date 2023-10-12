#include <iostream>
using namespace std;

float perimeter(char shape, float side);

int main()
{

    
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    char shape ;
    cin >> shape ;
    cout << "Enter the value: ";
    float side ;
    cin >> side;
    float result ;
    result = perimeter(shape,side);
    cout << "The perimeter is: " << result ;
}

    float perimeter(char shape, float side)
{
    float res ;
    float perofs =  side*4 ;
    float perofc  = side*6.28 ;
    float peroft = side*3 ;
    float perofh = side*6 ;

    if (shape== 's')
    {
        res = perofs ;

    }

     if (shape== 'c')
    {
        res = perofc ;

    }
     if (shape== 't')
    {
        res = peroft ;

    }
     if (shape== 'h')
    {
        res = perofh ;

    }

        return res;
}
