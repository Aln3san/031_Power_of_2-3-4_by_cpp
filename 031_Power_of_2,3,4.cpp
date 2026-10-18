#include <iostream>
#include <cmath>

unsigned int fnpower2(float Number){
    return pow(Number, 2);
}

unsigned int fnpower3(float Number) {
    return pow(Number, 3);
}

unsigned int fnpower4(float Number) {
    return pow(Number, 4);
}

int main()
{
    float Number;
    std::cout << "Please enter Number to power of 2, 3, 4!\n"
        << "Number: "; std::cin >> Number;
	std::cout << "Power of 2: " << round(fnpower2(Number)) << std::endl
		<< "Power of 3: " << round(fnpower3(Number)) << std::endl
		<< "Power of 4: " << round(fnpower4(Number)) << std::endl;
}