#include "calc.h"

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
