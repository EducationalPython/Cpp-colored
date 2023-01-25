#include <iostream>

int main () {

    double n, a, b, x, y;
    std::cin >> n >> a >> b >> x >> y;

    if (n > a && n <= b) n *= (1 - x/100);
    if (n > b ) n *= (1 - y/100);

    std::cout << n;

    return 0;
}