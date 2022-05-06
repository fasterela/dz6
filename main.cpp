#include "dz6.h"



int main() {
    setlocale(0, "");
    int size = 0;
    int arr1[5] = { 1, 5, 3, 12, 10 };
    printArr(arr1, 5);
    BubbleSort(arr1, 5);
    printArr(arr1, 5);
    double arr2[5] = { 1.2,2.3,3.333,4.0,2.1 };
    printArr(arr2, 5);
    InsertionSort(arr2, 5);
    printArr(arr2, 5);
	Complex c1(5, 6), c2(-1, 4), rez;
	cout << "1 + 5 = " << sum(1, 5) << endl;
	cout << "11.4 + 2.7 = " << sum(11.4, 2.7) << endl;
	cout << "7 + 3 = " << sum("7", "3") << endl;
	cout << "(5+6i) + (-1+4i) = ";
	rez = c1.sum(c2);
	rez.printComplex();
	cout << "6 - 2 = " << subtraction(6, 2) << endl;
	cout << "1.2 - 3.4 = " << subtraction(1.2, 3.4) << endl;
	cout << "1 - 2 = " << subtraction("1", "2") << endl;
	cout << "(5+6i) - (-1+4i) = ";
	rez = c1.subtraction(c2);
	rez.printComplex();
	cout << "1 * 2 = " << multiply(1, 2) << endl;
	cout << "1.2 * 3.4 = " << multiply(1.2, 3.4) << endl;
	cout << "1 * 5 = " << multiply("1", "5") << endl;
	cout << "(5+6i) * (-1+4i) = ";
	rez = c1.multiply(c2);
	rez.printComplex();
	cout << "1 / 6 = " << division(1, 6) << endl;
	cout << "1.2 / 3.4 = " << division(1.2, 3.4) << endl;
	cout << "1 / 4 = " << division("1", "4") << endl;
	cout << "(5+6i) / (-1+4i) = ";
	rez = c1.division(c2);
	rez.printComplex();
	return 0;
}


