#include <iostream>

void print(int* array, int size);
void reverse(int* array, int size);

int main()
{
	const int size{ 9 };
	int array[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::cout << "До функции reverse: ";
	print(array, size);

	reverse(array, size);

	std::cout << "После функции reverse: ";
	print(array, size);

	return EXIT_SUCCESS;
}

void print(int* array, int size)
{
	for (int element{}; element < size; ++element)
	{
		std::cout << array[element];
		if (element < size - 1)
		{
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}

void reverse(int* array, int size)
{
	for (int element{}; element < size / 2; ++element)
	{
		int temp = array[element];
		array[element] = array[size - 1 - element];
		array[size - 1 - element] = temp;
	}
}