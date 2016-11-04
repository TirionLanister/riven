#ifndef riven_H
#define riven_H
#pragma once
#include <cmath>
#include <ostream>

class riven
{
private:
	double X;
    double Y;
    double Z;
    double V;

public:
riven();
riven(double,double,double);
void solve();
    double getResult();
    void setData(double, double, double);
	friend void informationAlerts(riven);
    friend std::ostream& operator<<(std::ostream& out, const riven& com);
};
#endif
