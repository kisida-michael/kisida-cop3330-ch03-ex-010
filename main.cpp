#include "header.h"


int main()
{
  double num1;
  double num2;
  double result;
  string operation;

  cin >> operation >> num1 >> num2;

  if (operation == "+") {
     result = add(num1, num2);
  }

  else if (operation == "-") {
     result = sub(num1, num2);
  }

  else if (operation == "*") {
     result = mul(num1, num2);
  }
  else if (operation == "/") {
     result = div(num1, num2);
  }
cout << "Result is: " << result << endl;
  return 0;
}

double add(double x, double y){
  return x + y;
}
double sub(double x, double y){
  return x-y;
}
double mul(double x, double y){
  return x*y;
}
double div(double x, double y){
  return x/y;
}