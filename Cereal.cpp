#include <iostream>
using namespace std;
// cereal problem, main function
int main(int argc, char **argv){
  float mton = 35273.92;
  float cerealounces;
  float metrictoncereal;
  float numboxes;
  //defining variables

  cout << "Enter the weight of the package of cereal in ounces" << endl;
  cin >> cerealounces;
  metrictoncereal = cerealounces / mton;
  numboxes = mton / cerealounces;
  // outputing the weight in metric tons as well of number of boxes
  cout << "Weight in MT: " << metrictoncereal << " Num of boxes needed for MT: " << numboxes << endl;


  return 0;

}
