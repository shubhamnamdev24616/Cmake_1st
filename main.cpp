#include<iostream>
#include "calc.h"

//#include "calc.h"

int main()
{
   std::int S = 1234321,S1=24616;
	std::string result = isPalindrome(S);
        std::cout << result;
	std::string result2 = isPalindrome(S1);
        std::cout << result2;
	
    return 0;
}
