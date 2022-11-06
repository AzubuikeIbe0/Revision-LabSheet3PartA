#include "safearray.h"

SafeArray::SafeArray()
{
	int arr[10];
	int index = 0;

	for (int i = 0; i < 10; i++)
	{
		if (index > size)
		{
			std::cout << "Array index out of bounds." << endl;
		}
	}
}

SafeArray::SafeArray(int S)
{
	int arrSize;
	int arr[arrSize];

	std::cout << "Enter the size of the array" << endl;
	std::cin >> arrSize;


	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << endl;
	}
}

int SafeArray::at(int index)
{
	if (index > size)
	{
		std::cout << "Array out of boundds" << endl;

		return -1;
	}
	else
	{
		std::cout << "Array element is at position " << index << endl;
	}
	return index;
}



SafeArray::~SafeArray()
{
	delete[] arrayPointer;

	*arrayPointer = NULL;

}