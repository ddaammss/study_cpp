#include <iostream>

int main(){

  int *a; //c style
  int* b; //c++ style
  int* c, d;

  int x = 10;
  int* y = &x;
  std::cout << "The value of x is: " << x << std::endl;
  std::cout << "The value of &x is: " << &x << std::endl;
  std::cout << "The value of &y is: " << y << std::endl; //dereference y to get the value of x
  std::cout << "The value of y is: " << *y << std::endl; //dereference y to get the value of x

  std::cout << "The value of x is: " << x << std::endl;
  std::cout << "The value of &x is: " << &x << std::endl;
  std::cout << "The value of &y is: " << y << std::endl; //dereference y to get the value of x
  std::cout << "The value of y is: " << *y << std::endl; //dereference y to get the value of x
  //std::cout << "The address of y is: " << &y << std::endl;
  return 0;
}