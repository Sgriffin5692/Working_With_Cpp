// Pow_Sin_Avg_Functions_IntroC++_Mod4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double Sine(double _opposite, double _hypotenuse);
int Pow(int _base, int _exponent);
double ArrayAvg(int _nums[], int size);

int main()
{

	// Testing Sine function
	double opposite{};
	double hypotenuse{};

	cout << "Please enter a value for the opposite length of the angle: ";
	cin >> opposite;
	cout << "Please enter a value for the hypotenuse length of the angle: ";
	cin >> hypotenuse;

	double sin{ Sine(opposite, hypotenuse) };
	cout << sin;
	cin.ignore();
	cin.ignore();

	// Testing Pow function
	int base;
	int exponent;

	cout << "Please enter a value for the base integer: ";
	cin >> base;
	cout << "Please enter a positive value for the exponent: ";
	cin >> exponent;

	if (exponent < 0)
	{
		cout << "Exponent cannot be a negative number." << endl;
		cout << "Please enter a positive value for the exponent: ";
		cin >> exponent;
	}

	int result{ Pow(base, exponent) };
	cout << result;
	cin.ignore();
	cin.ignore();


	// Testing ArrayAvg function
	int nums[]{ 1, 2, 3, 4, 5 };
	double average{ ArrayAvg(nums, 5) };
	cout << average;
	cin.ignore();

	return 0;
}

double Sine(double _opposite, double _hypotenuse)
{
	double _sin = _opposite / _hypotenuse;
	return _sin;
}

int Pow(int _base, int _exponent)
{
	if (_exponent == 0)
	{
		return 1;
	}

	else
	{
		int _result = _base;

		for (int i = 0; i < _exponent - 1; i++)
		{
			_result *= _base;
		}
		return _result;
	}
}

double ArrayAvg(int _nums[], int size)
{
	double sum{};
	for (int i = 0; i < size; i++)
	{
		sum += _nums[i];
	}

	double _average{ sum / size };
	return _average;
}
