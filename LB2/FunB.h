//
// Created by oruel on 21.05.2020.
//

#ifndef OOS_LB_FUNB_H
#define OOS_LB_FUNB_H
#include <cmath>

double funB(double x, double y, double z) {
    double numerator = abs(x - y) * (1 + pow(sin(z), 2) / (x + y));
    double denominator = pow(M_E, x - y) + 0.5 * x;
    return numerator/denominator;
}
#endif //OOS_LB_FUNB_H
