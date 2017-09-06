//Sobrecarga de funciones, centrado en un TEMPLATE
#include <iostream>
#include <cmath>

//El template se declara e inicializa de inmediato
template <class T> //Tipo de dato generico T
T f(T a)
{
  return 2*a;
}
int main(void)
{
  int a=9;
  std::cout<<"f(a) = "<< f(a) << std::endl;  //Si mi dato es un entero, manda f(a)
  double b=-7.51;
  std::cout << "f(b)= " <<f(b) << std::endl; //Si mi dato es un double, manda f(b)
  float c=24.51;
  std::cout << "f(c)= " <<f(c) << std::endl; //Si mi dato es un float, manda f(b)
  
  return 0;
}


