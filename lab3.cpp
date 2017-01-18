
//
//
//-------------------------------------------------------------------
// Programmer: Timofey Golubev        Student ID: 
// Lab: #3, "Compile Errors"          Filename: lab3.cpp
// Due Date: 9/18/12                  Class: CSc78, Section C 
//-------------------------------------------------------------------
// Program Description:
//  The program requests weights from users in ounces, and converts those
//  to grams and outputs the results. The user can enter input values as
//  many times as they like.
//
//-------------------------------------------------------------------

#include  <iostream>
using namespace std;

int main()
{
   const float kfGRAMSPEROUNCE = 28.35;
 
   char cAgain;

   float fOunces, fGrams;

   do
   {
      cout << endl;
      cout << "Please enter the number of ounces you have and I will " << endl;
      cout << "convert it to grams for you. " <<  endl << endl;
      
      cin >> fOunces;

      fGrams = fOunces * kfGRAMSPEROUNCE;

      cout << endl << endl;
      cout << "You entered " << fOunces << " ounces." << endl;
      cout << "This equals " << fGrams << " grams." << endl << endl;

      cout << "Like to try again? (Y/y/N/n)" <<  endl << endl;

      cin >> cAgain; 
   } while(cAgain == 'Y' || cAgain == 'y');

   return 0;
}



