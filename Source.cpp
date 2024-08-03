#include <iostream>

int main()
{
	int age{};// age is a variable of an integer type (int)
	std::cout << "How old are you?\n" << std::endl; // our output
	std::cin >> age; // the input is you type your age as a integer

	std::cout << "Wow, we're the same age! I am also\n " << age << " years old! How about that!\n" <<std::endl;// some output then input then output
}
