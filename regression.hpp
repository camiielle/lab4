#ifndef REGRESSION_HPP
#define REGRESSION_HPP

#include <stdexcept>

struct Result
{
    double A{};
    double B{};

};


class Regression
{
    int N_{};
    double sum_x_{};
    double sum_y_{};
    double sum_x2_{};
    double sum_xy_{};
    double d_{};

public:

void add(double x, double y);
Result fit () const;
};

Result fit (Regression const &reg);




#endif