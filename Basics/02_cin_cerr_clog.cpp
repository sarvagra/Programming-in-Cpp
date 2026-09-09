#include <iostream>

int main() {
    // cout - for normal messages (buffered, goes to stdout)
    std::cout << "This is a normal print" << std::endl;

    // cerr - for error messages (unbuffered, goes to stderr)
    std::cerr << "This is an error message" << std::endl;

    // clog - for log messages (buffered, goes to stderr)
    std::clog << "This is a log message" << std::endl;

  return 0;
}
