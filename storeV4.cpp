#include<iostream>
using namespace std ;


float discount(string day ,string month, float amount) ;

int main()
{
string day ;
string month ;
 float amount ;

cout<<" Enter Purchasing Day: ";
cin>> day ;
cout<<" Enter Purchasing Month: ";
cin>> month ;
cout<<" Enter the Purchase Amount: ";
cin>> amount ;
float result ;
result = discount(day,month,amount) ;
cout << "Payable Amount after discount: " <<result ;

}
                float res ;
               float payableamt ;
float discount(string day , string month , float amount) 
{   
        if((day=="sunday") && (month== "october" || month== "march" || month== "august"))
        {
             payableamt = amount - amount*(0.1) ;
             res = payableamt ;
    
        }

        
       

    return res ;



    }




