#include <iostream>
using namespace std;

float sum (float a, float b);
float subs (float a, float b);
float mult (float a, float b);
float divi (float a, float b);
int mod (int, int b);

int main() {
	int type;
	cout << "Soy una calculadora para suma, resta, multiplicacion, division y modulo\n" <<
	     "suma= 1\nresta= 2\nmultiplicacion= 3\ndivision= 4\nmodulo= 5 \n";
	cout << "que tipo de operacion deseas?";
	cin >> type;
	if (type > 5 || type <=0)
	{
		cout << "nojoda";
	}
	else {
		if (type == 5) {
			int x, y;
			cout << "Escribe los valores a operar, recuerda que para modulo solo pueden ser enteros";
			cin >> x >> y;
			int result = mod(x, y);
			cout << "El resultado es:\n" << result;
		}
		else {
			float x, y;
			if (type==1)
			{
				cout << "Escribe los valores a operar";
				cin >> x >> y;
				float result = sum(x, y);
				cout << "El resultado es:\n" << result;
			}
			else if (type== 2) {
				cout << "Escribe los valores a operar";
				cin >> x >> y;
				float result = subs(x, y);
				cout << "El resultado es:\n" << result;
			}
			else if (type == 3) {
				cout << "Escribe los valores a operar";
				cin >> x >> y;
				float result = mult(x, y);
				cout << "El resultado es:\n" << result;

			}
			else {
				cout << "Escribe los valores a operar";
				cin >> x >> y;
				if (y == 0)
				{
					cout <<"error, no puedes dividir en 0";
				}
				else {
					float result = divi(x, y);
					cout << "El resultado es:\n" << result;
				}
			}
		};
	}
}
float sum (float a, float b) {
	return (a+b);
};

float subs (float a, float b) {
	return (a-b);
};

float mult (float a, float b) {
	return (a*b);
};

float divi(float a, float b) {
	return(a/b);
};

int mod (int a, int b) {
	return (a & b);
};