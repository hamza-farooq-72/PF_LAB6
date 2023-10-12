#include<iostream>
using namespace std ;


int comparision( int num1, int num2) ;

int main()
{
int number1 ,  number2 ;

cout<<"Enter the first number: ";
cin>> number1 ;
cout<<"Enter the second number: ";
cin>> number2 ;
int result ;
result = comparision(number1,number2) ;
cout << result ;

}

int comparision( int num1 , int num2) 
{	int res ;
    if(num1 > num2){

         res = 1  ;
       

       }

    else 
        res = 0 ;

        return  res ;
    



}
