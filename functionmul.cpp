#include<iostream>
using namespace std;
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}


int main() {
  myFunction("divya", 20);
  myFunction("jabeer", 22);
  myFunction("alfino", 23);
  return 0;
}
