#include <iostream>
using namespace std;

bool parity(int num);

int main()
{

    int number;

    cout << "Enter a 3-digit number: ";
    cin >> number;
    bool result;
    result = parity(number);
    cout << result;
}

bool parity(int num)
{
    int dig1, dig2, dig3, sum;
    bool res;

    int checkoddeven = num % 2;
    dig1 = num % 10;
    num = num / 10;
    dig2 = num % 10;
    num = num / 10;
    dig3 = num;
    sum = dig1 + dig2 + dig3;
    int sumevenorodd = sum % 2;

    if (checkoddeven == sumevenorodd)
    {

        res = true;
    }

    else
        res = 0;

    return res;
}
