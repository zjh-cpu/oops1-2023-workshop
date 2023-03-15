#include <iostream>

using namespace std;
int size_of_variable_star_t(){

  int a=13, *p;
  p = &a;
  int *t = new int;


   cout << "the size of " << sizeof(t) << endl;

  return sizeof(t);
}
int main(){
  size_of_variable_star_t();
}