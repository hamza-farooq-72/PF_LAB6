#include<iostream>
using namespace std ;


float lowestPrice(int dis, string time);



int main()
{
int Dis ;
string Time ;

cout<<"Enter the number of kilometers: ";
cin>> Dis ;
cout<<"Enter the period of the day (day/night): ";
cin>> Time ;

float result ;
result = lowestPrice( Dis, Time);

cout << "Lowest price for " << Dis <<" kilometers: " <<result << " EUR" ;

}
                
   
    float lowestPrice(int dis, string time)


{   
     float res ;


        if((dis < 20 ) && (time == "day"))
        {
             res = (dis*0.79) + 0.70;
        }

         if((dis < 20 ) && (time == "night"))
        {
             res = (dis*0.90) + 0.70 ;
        }


        if((dis >= 20 ) && (dis < 100 )  && ((time == "day") || (time == "night")))
        {
             res = dis*0.09;
        }

        
        if(((dis >= 100 ) && (dis < 5000 ))  && ((time == "day") || (time == "night")))
        {
             res = dis*0.06;
        }



            return res ;

    }
