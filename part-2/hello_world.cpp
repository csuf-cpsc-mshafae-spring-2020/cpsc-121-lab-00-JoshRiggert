// Joshua Riggert
// CPSC 121-03
// joshua.riggert@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if (argc != 3) {
    cout << "Too few arguments.\n";
    return 1;
  }
  string name = argv[1];
  int repeat = stoi(argv[2]);
  for(int i = 0; i < repeat; i++){
    cout << "Hello " << name << "!" << endl;
  }
  return 0;
}
