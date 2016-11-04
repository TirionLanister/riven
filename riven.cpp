#include "riven.h"
#include<iostream>


 riven::riven()
{

 
}
riven::riven(double x, double y, double z) :
            X(x), Y(y), Z(z) {

}
void riven::solve() {
    double x = X;
    double y = Y;
    double z = Z;
    double v = V;


 v=(1+pow(sin(x+y),2))/(abs(x-2*y/(1+pow(x,2)*pow(y,2))))*pow(x,abs(y))+pow(cos(atan(1/z)),2);
}

double riven::getResult() {
    return V;
}

void riven::setData(double x, double y, double z) {
    X = x;
    Y = y;
    Z = z;
}

void informationAlerts(riven val) {
    std::cout << val << std::endl;
}
std::ostream&  operator<<(std::ostream& out, const riven obj) 
{
    std::cout << "X=\t" << obj.X << "\nY =\t" << obj.Y << "\nZ =\t" << obj.Z << "\nW =\t" << obj.V << std::endl;
    return out;
}




//int main(void)
//{ 
//
//	riven * geo = new riven();
//		
//		
//double r =	geo->_riven();
//		
//
// system("pause"); 
//}




