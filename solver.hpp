#ifndef SOLVER_HPP_
#define SOLVER_HPP_
#include <string>
#include <iostream>
#include <complex>

namespace solver{
    
    class RealVariable{
        double x;
        public:
        RealVariable(double y=0):x(y){};
         //RealVariable(){}
    };
    
    class ComplexVariable {
        std::complex<double> compVar;
        public:
        ComplexVariable(std::complex<double> compV=NULL):compVar(compV){};
         //ComplexVariable(){}
    };
    
        double solve(RealVariable var){return 1337;}
        std::complex<double> solve(ComplexVariable var){return std::complex<double>(1337);}
 
        RealVariable operator*(const RealVariable& x, const double& num){return RealVariable();}
        RealVariable operator-(const RealVariable& x, const double& num){return RealVariable();}
        RealVariable operator==(const RealVariable& x, const double& num){return RealVariable();}
        RealVariable operator^(const RealVariable& x, const double& num){return RealVariable();}
        RealVariable operator+(const RealVariable& x,const RealVariable& y){return RealVariable();}
        RealVariable operator-(const RealVariable& x,const RealVariable& y){return RealVariable();}
        RealVariable operator==(const RealVariable& x,const RealVariable& y){return RealVariable();}
        RealVariable operator+(const RealVariable& x, const double& num){return RealVariable();}
        RealVariable operator/(const RealVariable& x, const double& num){return RealVariable();}
        RealVariable operator*(const double& num,const RealVariable& x){return RealVariable();}
        ComplexVariable operator*(const double& num,const ComplexVariable& x){return ComplexVariable();}
        ComplexVariable operator+(const RealVariable& x,const ComplexVariable& y){return ComplexVariable();}
        ComplexVariable operator+(const ComplexVariable& x,const ComplexVariable& y){return ComplexVariable();}
        ComplexVariable operator-(const ComplexVariable& x,const ComplexVariable& y){return ComplexVariable();}
        ComplexVariable operator==(const ComplexVariable& x,const ComplexVariable& y){return ComplexVariable();}
        ComplexVariable operator-(const ComplexVariable& x, const double& num){return ComplexVariable();}
        ComplexVariable operator/(const ComplexVariable& x, const double& num){return ComplexVariable();}
        ComplexVariable operator^(const ComplexVariable& x, const double& num){return ComplexVariable();}
        ComplexVariable operator==(const ComplexVariable& x, const double& num){return ComplexVariable();}
        ComplexVariable operator+(const double& num,const ComplexVariable& x){return ComplexVariable();}
        ComplexVariable operator+(const ComplexVariable& x, const double& num){return ComplexVariable();}
}











 #endif