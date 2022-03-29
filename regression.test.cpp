#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "regression.hpp"


TEST_CASE ("Testing Regression") {
    Regression reg;
    CHECK_THROWS(fit(reg));
    reg.add(0.,1.);
    reg.add(1.,2.);
    auto result = fit(reg);
    CHECK(result.A == doctest::Approx(1.));
    CHECK(result.B == doctest::Approx(1.));
}

