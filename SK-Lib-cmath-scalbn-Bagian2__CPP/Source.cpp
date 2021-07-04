#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	int n = 893;
	int x = 453;
	int ans;

	ans = scalbn(x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << ans << endl;

	_getch();
	return 0;
}
