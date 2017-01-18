//--------------------------------------------------------------------
// Programmer: Timofey Golubev      
// Lab: #2, Precedence of Operators          Filename: lab2.cpp
// Due Date: 09/11/12                        Class: CSc 78, Section C
//--------------------------------------------------------------------
// Program Description:
// The program codes a number of arithmetic equations and takes input 
// values for some variables.  This program shows that depending on 
// how the variable values are entered, C++ will give a different result.
//----------------------------------------------------------------------


#include <iostream>
using namespace std;

int main()
{
  //Declare variables
  int ia, ib, ic, iResult;
  float fa, fb, fc, fResult;
  
  //Get input values from user
  cout << "Enter ia, ib, ic " << endl;
  cin >> ia >> ib >> ic;
  cout << "Enter fa, fb, fc " << endl;
  cin >> fa >> fb >> fc;
  
  //Assignment statements
  iResult = ia + ib / ic;
  cout << "ia + ib / ic = iResult = " << iResult << endl;
  
  iResult = (ia + ib) / ic;
  cout << "(ia + ib) / ic = iResult = " << iResult << endl;
  
  fResult = ia + ib / ic;
  cout << "ia + ib / ic = fResult = " << fResult << endl;

  fResult = (ia + ib) / ic;
  cout << "(ia + ib) / ic = fResult = " << fResult << endl;

  iResult = fa + fb / fc;
  cout << "fa + fb / fc = iResult = " << iResult << endl;
 
  iResult = (fa + fb) / fc;
  cout << "(fa + fb) / fc = iResult = " << iResult << endl;

  fResult = fa + fb / fc;
  cout << "fa + fb / fc = fResult = " << fResult << endl;

  fResult = (fa + fb) / fc;
  cout << "(fa + fb) / fc = fResult = " << fResult << endl;
  
  return 0;
}

