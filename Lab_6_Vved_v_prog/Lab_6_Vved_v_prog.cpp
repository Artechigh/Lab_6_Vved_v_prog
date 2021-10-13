
#include <iostream>

int main()
{
    //Задание 1
    std::cout << "1-st task\n";
    std::cout << "Let's swap a and b meanings \n";
    double a, b;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;   //swap a and b
    std::cout << "Now a = ";
    std::cout << a;
    std::cout << " and b = ";
    std::cout << b;
    std::cout << "\n";

    std::cout << "2-nd task\n";
    std::cout << "Now let's swap a and b aaaand c meanings ('a' to 'b', 'b' to 'c', 'c' to 'a')\n";
    double c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    a = a + b;
    b = a - b;
    a = a - b;//swap a and b
    a = a + c;
    c = a - c;
    a = a - c;//swap a and c
    std::cout << "Now a = ";
    std::cout << a;
    std::cout << " b = ";
    std::cout << b;
    std::cout << " and c = ";
    std::cout << c;
    std::cout << "\n";
    std::cout << "3-rd task\n";
    std::cout << "Now let's swap a and b aaaand c meanings ('a' to 'c', 'c' to 'b', 'b' to 'a')\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    a = a + b;
    b = a - b;
    a = a - b;//swap a and b
    b = b + c;
    c = b - c;
    b = b - c;//swap b and c
    std::cout << "Now a = ";
    std::cout << a;
    std::cout << " b = ";
    std::cout << b;
    std::cout << " and c = ";
    std::cout << c;
    std::cout << "\n";

    std::cout << "4-th task\n";// y=3x^6-6x^2-7
    std::cout << "Finding y(x)=3x^6-6x^2-7";
    std::cout << "Please write down x meaning \n";
    std::cout << "x = ";
    std::cin >> a; // a stores meaning of x
    b = 3 * pow(a, 6) - 6 * pow(a, 2) - 7; // b stores meaning of y
    std::cout << "y = ";
    std::cout << b;
    std::cout << "\n";

    std::cout << "5-th task\n";
    std::cout << "Finding 4(x-3)^6-7(x-3)^3+2";
    std::cout << "Please write down x meaning \n";
    std::cout << "x = ";
    std::cin >> a; // a stores meaning of x
    b = 4 * pow((a-3), 6) - 7 * pow((a-3), 3) + 2; // b stores meaning of y
    std::cout << "y = ";
    std::cout << b;
    std::cout << "\n" ;

    std::cout << "6-th task\n";
    std::cout << "Finding a^8 by using 1 additional variable and 3 multiplications\n";
    std::cout << "Please write down a = ";
    std::cin >> a;
    b = a * a;
    b = b * b;
    b = b * b;
    std::cout << "a^8 = ";
    std::cout << b;
    std::cout << "\n";

    std::cout << "7-th task\n";
    std::cout << "Finding a^15 by using 2 additional variable and 5 multiplications\n";
    std::cout << "Please write down a = ";
    std::cin >> a;
    b = a * a;
    c = b * a;
    b = c * c;
    b = b * b;
    b = b * c;
    std::cout << "a^15 = ";
    std::cout << b;
    std::cout << "\n";
}