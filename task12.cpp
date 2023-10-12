#include<iostream>
using namespace std ;

float totalIncome(string type, int rows, int columns);


int main()
{
string Type ;
int Rows ;
int Columns ;

cout<<"Enter the screening type (Premiere/Normal/Discount): ";
cin>> Type ;
cout<<"Enter the number of rows: ";
cin>> Rows ;
cout<<"Enter the number of columns: ";
cin>> Columns ;


    float result;
result = totalIncome( Type,  Rows,  Columns);

cout <<result ;

}
                
    float totalIncome(string type, int rows, int columns)

{   
     float res ;



        if(type == "Premiere"){

            res = rows*columns*12.00 ;


        }
      if(type == "Normal"){

            res = rows*columns*7.50 ;


        }
          if(type == "Discount"){

            res = rows*columns*5.00 ;


        }

            return res ;

    }
















