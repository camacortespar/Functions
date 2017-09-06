//Sobrecarga de funciones
#include <iostream>
#include <cmath>

int f(int a); //Declaracion
double f( double a);
int main(void)
{
  int a=9;
  std::cout<<"f(a) = "<< f(a) << std::endl;  //Si mi dato es un entero, manda f(a)
  double b=-7.51;
  std::cout << "f(b)= " <<f(b) << std::endl; //Si mi dato es un double, manda f(b)
  
  return 0;
}

// Implementacion
int f(int a)
{
  return 2*a;
}
 double f(double a)
{
  return 2*a;
}
