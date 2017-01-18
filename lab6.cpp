//-------------------------------------------------------------------
// Programmer: Timofey Golubev        Student ID: 
// Lab: #6, "Estimating Pi"          Filename: lab6.cpp
// Due Date: 10/23/12                 Class: CSc78, Section C 
//-------------------------------------------------------------------
//  Program Description:
//  The program estimates the value of pi by generating random x and y 
//  values in the range of a 2*2 square centered at the origin.  Then
//  the program calculates the ratio of the number of points that are 
//  inside a circle of radius 1 (also centered at the origin) to the total
//  number of points generated.  This gives an estimate for pi/4.
//  The program then multiplies this result by 4 to get an estimate
//  for pi.
//-------------------------------------------------------------------

#include  <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  //Declare Variables 
  int icircle;         //number of points inside unit circle 
  float fxloc, fyloc;   //x and y coordinates of points
  float fdist;         //distance each point is from the origin
  float fratio;        //ratio of points in circle to total points generated 
  float fpi;           //estimated value of pi 
  char cAgain;
 
  //Loop for entire calculation
  do
  {  
    cout<<endl;
    icircle=0;  //reset point count to 0
       
    //Generate 1 million random points within range of [-1.0, 1.0]
    //and count how many are inside the unit circle
    for(int i=1; i<=1000000; i++)
    {
       fxloc = -1.0 + (2.0*(rand()*1.0/RAND_MAX));
       fyloc = -1.0 + (2.0*(rand()*1.0/RAND_MAX));
       
       fdist = sqrt(fxloc*fxloc + fyloc*fyloc);       
       
       if(fdist <= 1.0)
       {
        icircle++;  
       }  
    } 
    
    //Calculate Pi  
    fratio=icircle/1000000.0;
    fpi=4*fratio;
    
    //Output Results
    cout<<"Ratio of in circle to in square is: "<<fratio<<endl;
    cout<<"Approx to pi is: "<<fpi<<endl;
    
    //Ask user if wants to repeat calculation
    cout << "Like to try again? (Y/y/N/n) ";
    cin >> cAgain; 
  } while(cAgain == 'Y' || cAgain == 'y');

    cout << "End of program. Bye!" << endl;
    
    return 0;
}


