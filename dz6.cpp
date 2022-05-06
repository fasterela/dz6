#include "dz6.h"

void BubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

}
void BubbleSort(double* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void SelectionSort(int* arr, int size)
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (arr[j] > arr[k]) {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}
void SelectionSort(double* arr, int size)
{
    int j = 0;
    double tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (arr[j] > arr[k]) {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void InsertionSort(int* arr, int size)
{
    int key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }
}

void InsertionSort(double* arr, int size)
{
    double key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }
}



void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void printArr(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}


int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}

double sum(string a, string b)
{
    try {
        return stod(a) + stod(b);
    }
    catch (std::invalid_argument e) {
        cout << "Error!\n";
    }
}
int subtraction(int a, int b)
{
    return a - b;
}
double subtraction(double a, double b)
{
    return a - b;
}

double subtraction(string a, string b)
{
    try {
        return stod(a) - stod(b);
    }
    catch (std::invalid_argument e) {
        cout << "Error!\n";
    }
}
int multiply(int a, int b)
{
    return a * b;
}
double multiply(double a, double b)
{
    return a * b;
}

double multiply(string a, string b)
{
    try {
        return stod(a) * stod(b);
    }
    catch (std::invalid_argument e) {
        cout << "Error!\n";
    }
}
int division(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else cout << "Error!\n";
}
double division(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else cout << "Error!\n";
}

double division(string a, string b)
{
    if (b != "0") {
        try {
            return stod(a) / stod(b);
        }
        catch (std::invalid_argument e) {
            cout << "Error!\n";
        }
    }
    else cout << "Error!\n";
}

Complex::Complex()
{
    im = 0;
    re = 0;
}

Complex::Complex(double im, double re)
{
    this->im = im;
    this->re = re;
}

void Complex::printComplex()
{
    if (im >= 0) {
        cout << this->re << '+' << this->im << 'i' << endl;
    }
    else {
        cout << this->re << this->im << 'i' << endl;
    }
}

Complex Complex::sum(Complex c1)
{
    return Complex(this->re + c1.re, this->im + c1.im);
}
Complex Complex::multiply(Complex c1)
{
    double a = c1.re;
    double b = c1.im;
    double c = this->re;
    double d = this->im;
    return Complex(b * c + a * d, a * c - b * d);
}

Complex Complex::subtraction(Complex c1)
{
    return Complex(this->re - c1.re, this->im - c1.im);
}

Complex Complex::division(Complex c1)
{
    Complex c(0, 0); double r;
    r = this->re * this->re + c1.im * c1.im;
    c.re = (c1.re * this->re + c1.im * this->im) / r;
    c.im = (c1.im * this->re - c1.re * this->im) / r;
    return c;
}

