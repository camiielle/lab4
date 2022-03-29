#include "regression.hpp"

void Regression::add(double x, double y) {
    ++N_;
    sum_x_ += x;
    sum_y_ += y;
    sum_xy_ += x*y;
    sum_x2_ += x*x;
    
    d_= N_*sum_x2_-sum_x_*sum_x_;
}

inline Result Regression::fit() const
{
    

    if (d_==0.)
    throw std::runtime_error {"Denominator is zero"};


    
    double const a = sum_y_*sum_x2_- sum_x_*sum_xy_/(N_*sum_x2_-sum_x_*sum_x_);
    double const b = N_*sum_xy_ - sum_x_*sum_y_/(N_*sum_x2_-sum_x_*sum_x_);


    return {a,b};
};

