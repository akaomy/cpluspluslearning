#pragma once
class TempConvert
{
public:
	static double c2f(double c)
	{
		double f = c * 9 / 5 + 32;
		return f;
	}

	static double f2c(double f)
	{
		double c = (f - 32) * 5 / 9;
		return c;
	}
};
