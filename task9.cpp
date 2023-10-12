#include<iostream>
using namespace std ;


string checkTitle(float age, char gen);


int main()
{
float Age ;
char gend ;

cout<<"Enter your age: ";
cin>> Age ;
cout<<"Enter your gender (m/f): ";
cin>> gend ;

string result ;
result = checkTitle(Age,gend);

cout << "Your personal title is: " <<result ;

}
                
    string checkTitle(float age, char gen)

{   
     string res ;

        if(age >= 16 && gen == 'm')
        {
             res = "Mr.";
        }

        if(age < 16 && gen == 'm'){

             res = "Master";
        }

         if(age >= 16 && gen == 'f')
        {
             res = "Ms.";
    
        }

         if(age < 16 && gen == 'f' )
        {
             res = "Miss";
    
        }



            return res ;

    }
















