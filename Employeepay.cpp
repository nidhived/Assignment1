#include <iostream>
using namespace std;
//inflation problem that guages the expected cost of an item in # of years
int main(int argc, char **argv){
  float grosspay;
  float social;
  float fedtax;
  float statetax;
  float medical = 10.0;
  float rate = 16.0;
  int hours;
  int overtimehours = 0;
  float netpay;

  cout << "Enter the amount of hours worked" << endl;
  cin >> hours;

  if(hours > 40){
    overtimehours = hours - 40;
  //  cout << overtimehours <<endl;
  }
//  cout << "Enter the amount of hours worked overtime" << endl;
//  cin >> overtimehours;

//gross pay including overtime hours
  grosspay = (16 * (hours- overtimehours)) + ((overtimehours * 1.5) * 16);
  cout << "Gross pay: " << grosspay << endl;
//taxes times gross pay 
  statetax = grosspay * .05;
  cout << "Amount deducted by state tax: " << statetax << endl;
  social = grosspay * .06;
  cout << "Amount deducted by social security tax: " << social << endl;
  fedtax = grosspay * .14;
  cout << "Amount deducted by fed tax: " << fedtax << endl;

  cout << "Amount deducted by medical: " << medical << endl;

  netpay = (grosspay * .75) - medical;
  cout << "Net pay for the week : " << netpay << endl;





}
