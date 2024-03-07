//////////////////////////////////////////////////////////////////////////////
// Alcohol.cpp
// файл реалізації – реалізація методів класу
#include "Alcohol.h"
#include <iostream>
using namespace std;
void Alcohol::Init(double volume, Liquid liquid)
{
	setSpec(volume);
	setLiquid(liquid);
}
void Alcohol::Display() const
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Display(); // використовуємо делегування
	cout << "volume = " << volume << endl;
}
void Alcohol::Read()
{
	double volume;
	Liquid m;
	cout << endl;
	cout << "Liquid = ? " << endl;
	m.Read(); // використовуємо делегування
	cout << "volume = ? "; cin >> volume;
	Init(volume, m);
}
