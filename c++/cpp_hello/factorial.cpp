#include "factorial.h"

long double factorial(int k) {
    long double f = 1;
    for (int i = 1; i <= k; ++i) f *= i;
    return f;
}
