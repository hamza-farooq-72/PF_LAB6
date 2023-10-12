#include<iostream>
using namespace std ;

string checkSpeed(float speed);

int main()
{
float speed ;


cout<<"Enter the speed: ";
cin>> speed ;


    string result;
     result =  checkSpeed(speed);

cout <<result ;

}

     string checkSpeed(float speed)

{       
     string res ;
    

        if(speed <= 10 )
        {
            
             res = "slow";
             
        }
    
        if((speed > 10) && (speed <= 50))
        {
    
            res = "average";

            
        }
    
            
        if((speed > 50) && (speed <= 150))
        {
            
             res = "fast";

             
        }
    
        if((speed > 150) && (speed <= 1000 ))
        {
    
          res = "ultra-fast" ;
          
        }
          
        if(speed > 1000)
        {
            
             res = "extremely-fast";
             
        }

    return res ;
    }
















