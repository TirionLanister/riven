#include <ostream>
#pragma once
class riven
{
public:
	double	
	X,
	Y,
	Z,
	V;
riven();
riven(double,double,double);
void solve();
    double getResult();
    void setData(double, double, double);
    friend std::ostream& operator<<(std::ostream& out, const riven& com);
};

