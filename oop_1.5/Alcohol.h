//////////////////////////////////////////////////////////////////////////////
// Alcohol.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include <string>
#include "Liquid.h"
using namespace std;
class Alcohol
{
private:
	double volume;
	Liquid liquid;
public:
	double getSpec() const { return volume; }
	Liquid getLiquid() const { return liquid; }
	void setSpec(double volume) { this->volume = volume; }
	void setLiquid(Liquid liquid) { this->liquid = liquid; }
	void Init(double volume, Liquid liquid);
	void Display() const;
	void Read();
};

