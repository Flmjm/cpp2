#include <iostream>
#include "Fixed.hpp"

// int main() {

//     Fixed a;
//     Fixed b;

//     a = Fixed(10);
//     b = Fixed(11);

//     if (a > b) std::cout << a << " > " << b << std::endl;
//     if (b > a) std::cout << b << " > " << a << std::endl;
//     if (a < b) std::cout << a << " < " << b << std::endl;
//     if (b < a) std::cout << b << " < " << a << std::endl;
//     if (a >= b) std::cout << a << " >= " << b << std::endl;
//     if (b >= a) std::cout << b << " >= " << a << std::endl;
//     if (a <= b) std::cout << a << " <= " << b << std::endl;
//     if (b <= a) std::cout << b << " <= " << a << std::endl;
//     if (a == b) std::cout << a << " == " << b << std::endl;
//     if (b != a) std::cout << b << " != " << a << std::endl;
//     std::cout << std::endl;
// 	std::cout << std::endl;

//     Fixed c;

//     c = a + Fixed(10);
//     std::cout << a << " + 10 = " << c << std::endl;
// 	std::cout << std::endl;

//     c = a - Fixed(100);
//     std::cout << a << " - 100 = " << c << std::endl;
// 	std::cout << std::endl;

//     c = a * Fixed(10);
//     std::cout << a << " * 10 = " << c << std::endl;
// 	std::cout << std::endl;

//     c = a / Fixed(10);
//     std::cout << a << " / 10 = " << c << std::endl;
// 	std::cout << std::endl;

//     c = a / Fixed(0);
//     std::cout << a << " / 0 = " << c << std::endl;
// 	std::cout << std::endl;

//     Fixed d(1);
//     Fixed e = d++;
//     std::cout << "d++: d = " << d << ", e = " << e << std::endl;
// 	std::cout << std::endl;

//     d = Fixed(1);
//     e = ++d;
//     std::cout << "++d: d = " << d << ", e = " << e << std::endl;
// 	std::cout << std::endl;

//     d = Fixed(1);
//     e = d--;
//     std::cout << "d--: d = " << d << ", e = " << e << std::endl;
// 	std::cout << std::endl;

//     d = Fixed(1);
//     e = --d;
//     std::cout << "--d: d = " << d << ", e = " << e << std::endl;
// 	std::cout << std::endl;

//     Fixed f(1);
//     Fixed g(2);

//     Fixed maxVal = Fixed::max(f, g);
//     std::cout << "max(1,2) = " << maxVal << std::endl;
// 	std::cout << std::endl;

//     Fixed minVal = Fixed::min(f, g);
//     std::cout << "min(1,2) = " << minVal << std::endl;
// 	std::cout << std::endl;

//     return 0;
// }
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
