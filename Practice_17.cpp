#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int* fillArray(int size,int a,int b) 
{
	int* array = new int[size];
	for (int i = 0; i < size; i++) array[i] = a + rand() % (b - a + 1);
	return array;
}

double* fillArray(int size, double a, double b)
{
	double* array = new double[size];
	for (int i = 0; i < size; i++) {
		double random = (double)rand() / RAND_MAX;
		array[i] = a + random * (b - a + 1);
	}
	return array;
}

char* fillArray(int size, char a, char b)
{
	char* array = new char[size];
	for (int i = 0; i < size; i++) array[i] = a + rand() % (b - a + 1);
	return array;
}

template<class T>
void printArray(T* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(8) << array[i];
	}
	cout << endl;
}

template<class T>
void shiftTo(T*& array, int size, int pos) {
	T* newArray = new T[size];
	for (int i = 0; i < size; i++) {
		int index = (i + pos) % size;
		newArray[index] = array[i];
	}
// 	delete[] array;
	array = newArray;
}

int main()
{
	srand(time(0));

	int n,pos;
	cin >> n >> pos;
	int ia, ib;
	cin >> ia >> ib;
	int* intArray = fillArray(n, ia, ib);
	printArray(intArray, n);
	shiftTo(intArray, n,pos);
	printArray(intArray, n);
    
	double da, db;
	cin >> da >> db;
	double* doubleArray = fillArray(n, da, db);
	printArray(doubleArray, n);
	shiftTo(doubleArray, n, pos);
	printArray(doubleArray, n);

	char ca, cb;
	cin >> ca >> cb;
	char* charArray = fillArray(n, ca, cb);

	printArray(charArray, n);
	shiftTo(charArray, n, pos);
	printArray(charArray, n);
}

