//-------------------------------------------------------------------
// Programmer: Timofey Golubev        Student ID: 
// Lab: #4, "Triangles"               Filename: lab4.cpp
// Due Date: 9/25/12                  Class: CSc78, Section C 
//-------------------------------------------------------------------
// Program Description:
//  The program takes three values, which represent the lengths of the
//  three sides of a triangle, and calculates the perimeter and outputs
//  the answer to the screen.  The program checks for invalid user input
//  as well as allows the user to repeat the calculation with different
//  values.
//-------------------------------------------------------------------

#include  <iostream>
using namespace std;

int main()
{
  //Declare Variables 
  float fside1, fside2, fside3, fperimeter;
 
  char cAgain;

  do
  {  
    //Ask for user input and check validity of data
    do
    {
       cout << endl;
       cout << "Please enter 3 values of the 3 sides of a " << endl; 
       cout << "triangle smallest to largest,  all > 0" << endl;   
       cin >> fside1;
       cin >> fside2;
       cin >> fside3;
       cout << endl << endl;
       
       if(fside1 <=0 || fside2 <=0 || fside3 <=0 || (fside1 + fside2)<=fside3)
       cout << "Invalid Input. 1 or more values are wrong. Try Again..."<<endl;  
    } while(fside1 <=0||fside2 <=0||fside3 <=0||(fside1 + fside2) <= fside3);
     
    //Calculate perimeter and output result
    fperimeter = fside1 + fside2 + fside3;
 
    cout << "Perimeter is " << fperimeter << endl << endl; 
     
    cout << "Like to try again? (Y/y/N/n)" <<  endl << endl;
    cin >> cAgain; 
  } while(cAgain == 'Y' || cAgain == 'y');

    cout << "End of program. Bye!" << endl;
    
    return 0;
}


