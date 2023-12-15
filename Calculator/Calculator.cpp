#include <iostream>;
#include <cmath>;
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	cout << "Калькулятор Димона" << endl;

	double oper1, oper2;
	char operation;

	cout << "Введите выражение: ";
	cin >> oper1 >> operation >> oper2;

	double result;

	switch (operation) {
	case '+':
		result = oper1 + oper2;
		break;
	case '-':
		result = oper1 - oper2;
		break;
	case '*':
		result = oper1 * oper2;
		break;
	case '/':
		result = oper1 / oper2;
		break;
	}

	cout << "Результат: " << result;
	return 0;
}
