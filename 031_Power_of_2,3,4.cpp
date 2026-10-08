#include <iostream>
#include <cmath>

int main()
{
    float Number;
    std::cout << "Please enter Number to power of 2, 3, 4!\n"
        << "Number: "; std::cin >> Number;
    unsigned int power2 = pow(Number, 2), power3 = pow(Number, 3), power4 = pow(Number, 4);

	std::cout << "Power of 2: " << round(power2) << std::endl
		<< "Power of 3: " << round(power3) << std::endl
		<< "Power of 4: " << round(power4) << std::endl;
}