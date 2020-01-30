#include <iostream>
using namespace std;
//inflation problem that guages the expected cost of an item in # of years
int main(int argc, char **argv){
  float cost;
  int years;
  float rate;

  cout << "Enter the cost of the item: " << endl;
  cin>> cost;

  cout << "Enter the years: " << endl;
  cin>> years;

  cout << "Enter the inflation rate: " << endl;
  cin>> rate;
  rate = rate * .01;

  for(int i = 1; i <= years; ++i){
    cost = cost * (rate + 1);
  }

  cout << "Cost after " << years << " years: " << cost << endl;

  return 0;
}
