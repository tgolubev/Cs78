//-------------------------------------------------------------------
// Programmer: Timofey Golubev        Student ID: 
// Lab: #7, "Guess the Number"        Filename: lab7.cpp
// Due Date: 11/20/12                 Class: CSc78, Section C 
//-------------------------------------------------------------------
//  Program Description:
//  The program generates a random number.  The the user is asked to 
//  try to guess what the number is, what the maximum value the number
//  can be and how many guesses they are allowed. The user is told 
//  whether the number is higher or lower than their guess.  
//  The user is allowed to repeat this. 
//-------------------------------------------------------------------

#include  <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  //Declare Variables 
  int iMaxValue, iNumGuess, iguess, iRandNum, iclose, iclosest;
  int iClosestNum;         
  char cAgain;
 
  //seed the random number generator
  srand(time(0));
  
  //Loop for entire calculation
  do
  {  
    cout<<"Try to guess the correct number. Enter maximum value, >0"<<endl;
    cin>>iMaxValue;
    cout<<"Enter number of guesses allowed"<<endl;
    cin>>iNumGuess;
    
    iclosest = iMaxValue;
    
    iRandNum = ( rand() % iMaxValue ) +1;

    cout<<"Please enter guess"<<endl;
    
    //Loop for guesses
    for(int i=1; i <= iNumGuess;i++)
    {
      cin>>iguess;
      iclose = abs(iRandNum-iguess);
      
      
      if(iclose<iclosest)     
      {
         iclosest = iclose;
         iClosestNum = iguess;
      }
  
      if(iguess==iRandNum || i==iNumGuess)       
        break;                 //to make program exit loop
      
      if(iguess>iRandNum)
        cout<<"Guess a lesser number"<<endl;
       
      if(iguess<iRandNum)
        cout<<"Guess a greater number"<<endl;      
    }
   
   cout<<endl;

   //Output Results
   if(iguess == iRandNum)
   {  
     cout<<"***************************************"<<endl
         <<"The Random Number was "<<iRandNum<<endl
         <<"Congratulations! You guessed correctly"<<endl
         <<"***************************************"<<endl;
   }
   
   else
   {
    cout<<"****************************************"<<endl
        <<"The Random Number was "<<iRandNum<<endl
        <<"Sorry! You couldn't guess the number"<<endl
        <<"Closest guessed number "<<iClosestNum<<" was off by "
        <<iclosest<<endl
        <<"****************************************"<<endl;
         
   }
         
    //Ask user if wants to repeat 
    cout << "Like to try again? (Y/y/N/n) ";
    cin >> cAgain; 
  } while(cAgain == 'Y' || cAgain == 'y');

    cout << "End of program. Bye!" << endl;
    
    return 0;
}


