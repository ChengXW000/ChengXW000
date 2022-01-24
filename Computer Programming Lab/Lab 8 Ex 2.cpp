#include <iostream>

using namespace std;
void merge(int list1[] , int list2[], int mergelist[], int, int, int);

int main()
{
	int size1, size2, num1, i, j, sum;
	int array1[size1] = {0}, array2[size2] = {0};
	cout << "Please input size of first array: " << endl;
	cin >> size1;
	
	for (i = 0; i < size1 ; i++){
		cout << "Please input numbers for first array: " << endl;
		cin >> num1;
		array1[i] = num1;
	}
	
	cout << "Please input size of second array: " << endl;
	cin >> size2;
	
	for (j = 0; j < size2 ; j++){
		cout << "Please input numbers for second array: " << endl;
		cin >> num1;
		array2[j] = num1;
	}
	
	cout << "The original arrays are:" << endl;
	for(i=0; i< size1; i++)
		cout << array1[i] << " ";
	cout << endl;
	for(j=0; j< size2; j++)
		cout << array2[j] << " ";
		
	sum = size1 + size2;
	int mergearray[sum] = {0};
	cout << endl; 
	merge(array1, array2, mergearray, size1, size2, sum);
	cout << "The rearanged array is: " <<endl;
	for(i=0; i<sum; i++)
		cout << mergearray[i] << " ";
}

void merge(int array1[] , int array2[], int mergearray[], int size1, int size2, int sum)
{
	int i1, j1, sum1;
	if (size1 > size2){
		for (i1 = 0, j1 = 0, sum1 = 0; sum1 < sum ; i1++, j1++ ){
			if (j1 == size2){
				mergearray[sum1++] = array1[i1];
			}
			else{
				mergearray[sum1++] = array2[i1];
				mergearray[sum1++] = array1[i1];
			}
		}
	}
	if (size2 > size1){
		for (i1 = 0, j1 = 0, sum1 = 0; sum1 < sum ; i1++, j1++ ){
			if (j1 == size1){
				mergearray[sum1++] = array2[j1];
			}
			else{
				mergearray[sum1++] = array1[j1];
				mergearray[sum1++] = array2[j1];
			}
		}
	}
}