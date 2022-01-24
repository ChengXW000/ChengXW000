#include <iostream>

using namespace std;

float subtotal(float* array, int size);

int main()
{
	int size, i;
	cout << "Please input the size of the array: " << endl;
	cin >> size;
	float array[size], num1, *p;
	for(i = 0; i < size; i++){
		cout << "Please input the "<< i + 1 << " value: " << endl;
		cin >> num1;
		array[i] = num1;
	}
	cout << "The array list is "<<endl;
	
	subtotal(array, size);
	
	for(i = 0; i < size; i++){
		cout << array[i] << ", ";
	}
	
	
	return 0;
}

float subtotal(float* array, int size)
{
	int i;
	for(i = 0; i < size; i++){
		array[i] += array[i- 1];
	}
	return *array;
}