#include<iostream>
using namespace std ;

int areSameNumber(int num1, int num2, int num3);


int main()
{
int num1 ;
int num2 ;
int num3 ;

cout<<"Enter the first number: ";
cin>> num1 ;
cout<<"Enter the second number: ";
cin>> num2 ;
cout<<"Enter the third number: ";
cin>> num3 ;

int result;
result =  areSameNumber(num1,num2,num3);

cout <<result ;

}
                
     int areSameNumber(int num1, int num2, int num3)

{   
     int res ;

        if((num1 == num2) && (num1== num2)  && (num1== num3))
        {
             res = 1 ;
        }
    

       if((num1 != num2) || (num1 != num2)  && (num1 != num3))

          { res =  0 ;
         
          }


            return res ;

    }
















