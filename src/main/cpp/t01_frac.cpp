//Дано положительное действительное число X. Выведите его дробную часть.
//
//Формат входных данных
//
//        Вводятся положительное действительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//17.9
//Sample Output:
//
//0.9

#include "t01_frac.h"
#include <iostream>
#include <cmath>

using namespace std;

int t01_frac() {
     float X;
     cin >> X;
     cout << X - floor(X);
     return 0;
 }