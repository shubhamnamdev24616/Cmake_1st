#include <iostream>
#include "calc.h"
std::string isPalindrome(int n);
int main()
{
   int n= 1234321,n1=24616;
	std::string Result;
	Result=isPalindrome(n);
	if(Result== "Yes")
  {
  std::cout<<"test cases is pass"<<std::endl;
  }
  else
  {
   std::cout<<"test cases is fail"<<std::endl;
  }
	std::string Result1;
	Result1=isPalindrome(n1);
	if(Result1== "Yes")
  {
  std::cout<<"test cases is pass"<<std::endl;
  }
  else
  {
   std::cout<<"test cases is fail"<<std::endl;
  }
    return 0;
}
std::string isPalindrome(int n)
{
	int n1=n,remainder,reversed_number=0;
	  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
	if (n1 == reversed_number) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}
