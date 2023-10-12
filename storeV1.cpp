#include<iostream>
using namespace std ;


float discount(string day ,string month, float amount) ;

int main()
{
string day ;
string month ;
 float amount ;

cout<<"Enter Purchase Day: ";
cin>> day ;
cout<<"Enter Purchase Month: ";
cin>> month ;
cout<<"Enter Purchase Amount: ";
cin>> amount ;
float result ;
result = discount(day,month,amount) ;
cout << "Payable Amount after discount: " <<result ;

}
                float res ;
               float payableamt ;

float discount(string day , string month , float amount) 
{   
        if(day=="Sunday" && month== "October")
        {
             payableamt = amount - amount*(0.1) ;
             res = payableamt ;
    
        }

	if(day=="Sunday" && month != "October")
	{
             payableamt = amount - amount*(0.05) ; 
             res = payableamt ;
    
        }
       
       if(day !="Sunday")
       {
               res = amount ;

       }

    		return res ;



    }




