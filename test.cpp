#include <iostream>
#include "calc.h"

int main()
{
   int S = 1234321;
	std::string Result;
	Result=isPalindrome(S);
	if(Result== "Yes")
  {
  std::cout<<"test cases is pass"<<std::endl;
  }
  else
  {
   std::cout<<"test cases is fail"<<std::endl;
  }
    return 0;
}
