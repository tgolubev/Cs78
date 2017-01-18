//-------------------------------------------------------------------
// Programmer: Timofey Golubev        Student ID: 
// Lab: #5, "Giving Change"           Filename: lab5.cpp
// Due Date: 10/9/12                  Class: CSc78, Section C 
//-------------------------------------------------------------------
// Program Description:
//  The program directs a cashier how to give change.  The program takes
//  4 inputs: amount of dollars due, amount of cents due, amount of dollars
//  received, amount of cents received.  The program computes the change
//  that is due to the customer, breaks this down to how many quarters,
//  dimes, nickels, and pennies, should be returened and outputs the 
//  answer to the screen.  The program checks for invalid user input
//  as well as allows the user to repeat the calculation with different
//  values.
//-------------------------------------------------------------------

#include  <iostream>
using namespace std;

int main()
{
  //Declare Variables 
  int idollars_due, icents_due, idollars_got, icents_got, ibalance_due,
      idollars, iquarters, idimes, inickels, ipennies;
  float ftotal_due, ftotal_got; 
  char cAgain;

  do
  {  
    //Ask for user input and check validity of data
    do
    {
       cout << endl;
       cout << "How many dollars are due? " << endl; 
       cin >> idollars_due;
       cout << "How many cents are due?" << endl;
       cin >> icents_due;
       cout << "How many dollars are you giving me?" << endl;
       cin >> idollars_got;
       cout << "How many cents are you giving me?" << endl;
       cin >> icents_got;
       cout << endl << endl; 
       
       ftotal_due = idollars_due + icents_due/100.0;
       ftotal_got = idollars_got + icents_got/100.0;
       if(ftotal_got < ftotal_due)
       {cout << "Invalid Input. Total received must be >= total due."<<endl;
        cout << "Please try Again..."<<endl;  
       }  
    } while(ftotal_got < ftotal_due);
     
    //Calculate change due
    ibalance_due = 100*(ftotal_got - ftotal_due);
       
    //Calculate dollars, quarters, dimes, nickels, and pennies due  
    cout << "You will receive in return:" << endl << endl;   
       
    if(ibalance_due==0)
      cout<<"No Change"<<endl;
      
    idollars = ibalance_due/100;
    if(idollars >0)
      cout << idollars << " dollar"
           << (idollars==1 ? " " : "s")
           << endl;
         
    ibalance_due = ibalance_due % 100;       
    
    iquarters = ibalance_due/25;
    if(iquarters>0)
      cout << iquarters << " quarter"
           << (iquarters == 1 ? " " : "s")
           << endl;
             
    ibalance_due = ibalance_due % 25; 
    
    idimes = ibalance_due/10;
    if(idimes>0)
      cout << idimes << " dime"
           << (idimes == 1 ? " " : "s")
           << endl;
           
    ibalance_due = ibalance_due % 10;
    
    inickels = ibalance_due/5;
    if(inickels>0)
      cout << inickels << " nickel"
           << (inickels == 1 ? " " : "s")
           << endl;
           
    ipennies = ibalance_due % 5;
    if(ipennies > 0)
      cout <<ipennies << " penn"
           << (ipennies == 1 ? "y" : "ies")
           << endl;         
      
    cout << "Like to try again? (Y/y/N/n)" <<  endl << endl;
    cin >> cAgain; 
  } while(cAgain == 'Y' || cAgain == 'y');

    cout << "End of program. Bye!" << endl;
    
    return 0;
}


