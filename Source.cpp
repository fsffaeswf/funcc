#include <iostream>
#include <ctime>;
using namespace std;
int rootsCount(int, int, int);//17
double calc(double, double, int);//22
int isSquare(int);
int main() {
	setlocale(LC_ALL, "Russian");
	/*17
	int a, b, c;
	cin >> a >> b >> c;
	cout << "корней - " << rootsCount(a, b, c);*/

	/*22
	int a, b, op;
	cin >> a >> b >> op;
	cout << calc(a, b, op);*/

	const int N = 10;
	int arr[N],k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < 10; i++) {
		if (isSquare(arr[i]) == 1) {
			k++;
		}
	}
	cout << endl<<k;


}
int rootsCount(int a, int b, int c) {
	if (b * b - 4 * a * c > 0) {
		return 2;
	}
	if (b * b - 4 * a * c == 0) {
		return 1;
	}
	if (b * b - 4 * a * c < 0) {
		return 0;
	}
}
double calc(double a, double b, int op) {
	if (op == 1) {
		return a - b;
	}
	else if (op == 2) {
		return a * b;
	}
	else if (op = 3) {
		return a / b;
	}
	else {
		return a + b;
	}
}
int isSquare(int k) {
	int i = 1;
	int c = 0;
	while(k/2<i )
	{
		if (k / i == i) {
			c++;
		}
		i++;
	}
	bool m = c == 1;
	return m;

}
