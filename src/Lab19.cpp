#include <iostream>
#include <math.h>
using namespace std;

const float PI = 3.1415926;

float calc_tryk(float a, float b, float alfa) {
	float res;

	res = sqrt(a * a + b * b + 2 * a * b * cos(alfa));

	return res;
}



int main() {
	setlocale(LC_ALL, "Ukrainian");
	cout << "1. Третя сторона трикутника (a=3, b=4, alfa= PI/2) c= " << calc_tryk(3, 4, PI/2) << endl;
	cout << "2. Третя сторона трикутника (a=2, b=3, alfa= PI/4) c= " << calc_tryk(2, 3, PI/4) << endl;
	return 0;
}
