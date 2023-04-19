#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	while (true) {
		string expression;
		cout << "$ ";
		//cin >> expression;
		getline(cin, expression);
		stringstream ss(expression);
		string part1, operand, part2;
		ss >> part1 >> operand >> part2;
		if (!ss || ss.peek() != EOF) {
			cout << "Invalid input" << endl;
			continue;
		}
		float number1 = stof(part1);
		float number2 = stof(part2);
		
		if (operand == "+") {
			auto sum = [](float x, float y) -> float {
			    return x + y;
			};
			float result = sum(number1, number2);
			cout << result << endl;
		} else if (operand == "-") {
			auto def = [](float x, float y) -> float {
				return x - y;
			};
			float result = def(number1, number2);
			cout << result << endl;
		} else if (operand == "*") {
			auto product = [](float x, float y) -> float {
				return x * y;
			};
			float result = product(number1, number2);
			cout << result << endl;
		} else if (operand == "/") {
			auto div = [](float x, float y) -> float {
				return x / y;
			};
			float result = div(number1, number2);
			cout << result << endl;
		} else {
			cout << "Unknown Operand" << endl;
		}
	}
	return 0;
}
