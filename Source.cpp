#include <iostream>

void string_to_int(char* c) {
	int place = 1;
	int integer = 0;

	bool is_negative = false;

	if (c[0] == '-') {
		c = c + 1;
		is_negative = true;
	}

	else if (c[0] == '+') {
		c = c + 1;
	}

	for (int i = 10; i >= 0; i--) {
		if (i < 0) break;
		if (c[i] == NULL) continue;

		if (!isdigit(c[i])) {
			integer = 0;
			break;
		}

		integer += (c[i] - '0') * place;
		place *= 10;
	}

	if (is_negative) {
		integer *= -1;
	}

	std::cout << integer << std::endl;
}

int main() {
	char* c = new char[20]{NULL};

	std::cout << "enter a number: " << std::endl;
	std::cin >> c;

	string_to_int(c);

	system("pause");
	return 0;
}