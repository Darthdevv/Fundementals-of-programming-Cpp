#include <iostream>
using namespace std;

int main(){
  int age;
  cin >> age;
  int age_In_Years = age * 365;
  int age_In_Hours = age_In_Years * 24;
  cout << "the age in years is " << age_In_Years << "years\n";
  cout << "the age in hours is " << age_In_Hours << "hours\n";
  return 0;
}
