#include<iostream>
#include<cstring>
#include<fstream>
#include<sstream>
#include<math.h>
#include<string.h>
using namespace std;
 int decimalToBinary(long long binaryNumber )
{
    /*
    long b;
    if(decimal_number ==0)
        return 0;
    else
        b=decimal_number%2;
    return decimalToBinary(decimal_number/2)*10+b;
    */
/*
    long int binaryNumber = 0;
    int p = 0;
    while (decimal_number > 0)
    {
        binaryNumber += (decimal_number % 2) * pow(10, p);
        ++p;
        decimal_number /= 2;
    }
    return binaryNumber;
    */
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}

int main()
{
    cout<<decimalToBinary(1111111);
}
