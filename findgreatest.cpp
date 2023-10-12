#include<iostream>
using namespace std ;


float findGreatest(float num1 ,float num2, float num3) ;

int main()
{
float number1 ,  number2, number3 ;

cout<<"Enter the first number: ";
cin>> number1 ;
cout<<"Enter the second number: ";
cin>> number2 ;
cout<<"Enter the third number: ";
cin>> number3 ;
float result ;
result = findGreatest(number1,number2, number3);
cout << "The greatest number among " <<number1 <<", "<<number2<<", and " << number3 <<" is: " <<result ;

}
                float res ;
float findGreatest(float num1 ,float num2, float num3) 
{   
        if((num1>num2) && (num1>num3))
        {
             res = num1 ;
    
        }
         if((num2>num1) && (num2>num3))
        {
             res = num2 ;
    
        }
         else
         {
		res = num3 ;
         }

    return res ;



    }




