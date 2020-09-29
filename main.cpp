#include <iostream>
#include <iomanip>
# include <string>
using namespace std;

int main() {
  // make a table of inputs for y = 3x + 1
  int number_of_times = 5;

  for (int row = 0; row < number_of_times; ++row) {
    cout << "Row: " << row << endl;

    for (int col = 0; col < number_of_times; ++col) {
      cout << "     Column: " << col << endl;
    }
  }

  for (int row = 0; row < number_of_times; ++ row){
    cout << "Row: " << row << endl;

    for (int col = 0; col < number_of_times; ++col) {
      cout << "     Column: " << col << endl;
      for (int i = 0; i < number_of_times; ++i){
        cout << "          3D: " << i << endl;
      }
    }
  }
  return 0;
}
