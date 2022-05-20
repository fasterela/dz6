#ifndef DZ6_H
#define DZ6_H
#include <iostream>
#include <string>
using namespace std;

void BubbleSort(int* arr, int size);
void BubbleSort(double* arr, int size);


void SelectionSort(int* arr, int size);
void SelectionSort(double* arr, int size);


void InsertionSort(int* arr, int size);
void InsertionSort(double* arr, int size);


void printArr(int* arr, int size);
void printArr(double* arr, int size);


class Complex {
private:
	double im;
	double re;
public:
	Complex();
	Complex(double re, double im);
	void printComplex();
	Complex sum(Complex c1);
	Complex multiply(Complex c1);
	Complex subtraction(Complex c1);
	Complex division(Complex c1);
};
int sum(int a, int b);
double sum(double a, double b);
double sum(string a, string b);
int subtraction(int a, int b);
double subtraction(double a, double b);
double subtraction(string a, string b);
int multiply(int a, int b);
double multiply(double a, double b);
double multiply(string a, string b);
int division(int a, int b);
double division(double a, double b);
double division(string a, string b);




#endif 
