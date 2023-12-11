#include <iostream>
#include "calc.h"

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

