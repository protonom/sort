#include <iostream>
#include <ctime>

void fill_arr(int* arr, int size)
{
	srand(time(NULL));
	int i = 0;
	for (i; i < size; i++)
	{
		arr[i] = rand() % 100 ;
	}
}

void sort(int* arr, int size) 
{
	int reg;
	bool flag = true;
	while (flag == true) {
		flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				reg = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = reg;
				flag = true;
			}
		}
	}
}

void show_arr(int* arr, int size)
{
	int i = 0;
	for (i; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << "\n\n";
}

int comparison(int ab, int bc, int ab1, int bc1) 
{
	if (ab < ab1 and bc < bc1) { 
		return(true);
	}
	else { 
		return(false);
	}
}


int main()
{
	int ab = 5, bc = 10, ab1 = 4, bc1 = 8;
	const int size = 20;
	int arr[size];
	fill_arr(arr, size);
	sort(arr, size);
	show_arr(arr, size);
	std::cout << comparison(ab, bc, ab1, bc1);
}


