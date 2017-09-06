#include <iostream>
#include <cmath>

double f(double x); //Declaracion

int main(void)
{
  double x= M_PI/4.0; //ESto es pi cuartos, SOLO en cmath

  double b= f(x);
  std::cout << "b= " << b << std::endl;
  
  return 0;
}

// Implementacion
double f(double x)
{
  return 2*(std::sin(x))*(std::cos(x));
}
