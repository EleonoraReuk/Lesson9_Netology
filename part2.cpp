#include <iostream>

void swap(int* a, int* b);

int main()
{
	int a = 5;
	int b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(&a, &b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return EXIT_SUCCESS;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
