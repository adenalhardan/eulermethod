#include <iostream>

using namespace std;

float derivative(float, float);
void EulerMethod(float, float, float, int);

int main() {
	float x;
	float y;
	float h;
	int iterations;
	
	cout << "x: ";
	cin >> x;
	
	cout << "y: ";
	cin >> y;
	
	cout << "h: ";
	cin >> h;
	
	cout << "# of iterations: ";
	cin >> iterations;
	
	cout << "\n";
	
	EulerMethod(x, y, h, iterations);
	
	return 0;
}

float derivative(float x, float y) {
	return (x * y);
}

void EulerMethod(float x1, float y1, float h, int iterations) {	
	float x = x1;
	float y = y1;
	
	for(int i = 0; i < (iterations * 2); i += 2) {
		y += h * derivative(x, y);
		x += h;
		
		cout << "(" << x << ", " << y << ")\n";
	}
}


