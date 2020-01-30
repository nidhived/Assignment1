#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int max;
  int numofpeople;

  cout << "Enter the max amount" << endl;
  cin >> max;

  cout << "Enter the number of people attending" << endl;
  cin >> numofpeople;
//using an if statement to see if there is too many people based on the max
  if (numofpeople >= max){
    cout << "There are too many people. The meeting cannot be held here due to fire regulations. Must exclude: " << numofpeople - max << " people to host the meeting." << endl;
  }

  else{
    cout << "it is legal to host this meeting!" << endl;
  }

}
