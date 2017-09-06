#include <iostream>

void f(int &  a); //Declaracion, Mrs Anderson me da la direccion de meoria, para referenciar la funcion

int main(void)
{
  int a=9;
  std::cout<< "&a inside main = " <<&a<< std::endl;

  std::cout<< "a before f(a)= " << a << std::endl;
  f(a);
  std::cout<< "a after f(a) ="<<a<<std::endl;
  
   return 0;
}

// Implementacion
void f(int & b)
  
{
  std::cout <<"b inside f = "<< b << std::endl;
  std::cout <<"&b inside f = "<< &b << std::endl;
  b = -9;
}
