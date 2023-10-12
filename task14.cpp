#include<iostream>
using namespace std ;


string calculateCost(float budget, string category, int numPeople);



int main()
{
    float budget;
    string category;
    int numPeople ;


cout<<"Enter the budget: ";
cin>> budget ;
cout<<"Enter the category (VIP/Normal): ";
cin>> category ;
cout<<"Enter the number of people in the group: ";
cin>> numPeople ;


string result ;
result = calculateCost(budget,category,numPeople);

cout << result;

}
                
   string calculateCost(float budget, string category, int numPeople)


{   
     string res ;
     float totalexpence  ;
     float ticketCost ;
     float transportPrice;
    float remaining ;
    string result ;


        if(numPeople <= 4 )
        {
           transportPrice = budget*0.75 ;
    
             
        }

        
        if((numPeople >= 5 && numPeople <= 9 ))
        {
          transportPrice = budget*0.60 ;  
        }

        

        if(numPeople >= 10 && numPeople <= 24)
        {
            transportPrice = budget*0.50 ; 
        }
        

        if(numPeople >= 25 && numPeople <= 49 )
        {
                transportPrice = budget*0.40 ; 
        }
        
       
        
        if(numPeople >= 50 )
        {
          
           transportPrice = budget*0.25 ; 
        }

     
        if(category == "VIP")
        {
            ticketCost = numPeople*499.99 ;

        }

        if(category == "Normal")
        {
            ticketCost = numPeople*249.99 ;

        }
        
        totalexpence = ticketCost + transportPrice ;


        if(budget > totalexpence )
            {

                remaining  = budget - totalexpence ;

              result =   "Yes! You have " + to_string(remaining) + " leva left." ;


            }

        if(totalexpence > budget )
            {

                remaining  =  totalexpence - budget ;

               result =  "Not enough money! You need " + to_string(remaining) + " leva." ;

            }




            return result ;
    }
