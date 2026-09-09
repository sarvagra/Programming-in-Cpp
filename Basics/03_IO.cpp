#include <iostream>
#include <string>

int main() {

  /* int a{0}, b{0};
  std ::string name;
  std::cout << "Enter a your name, age and a random integer\n";
  // std::cin >> a; // send the input to the integer values
  // std::cin >> b;

  // for one line input
  std::cin >> name >> a >> b;

  std::cout << "Hi " << name << " your age is " << a
            << " and your magic number is " << (a * b) / (a + b) << std::endl;
 */

  // taking input with spaces
  std ::string full_name{};
  float agem{0.0};
  std ::cout << "Enter your Full name now, along with age in "
                "years.month_number format eg. 1 for jan, 2 for feb, so on. "
             << std ::endl;

  std ::getline(std::cin, full_name); // take input with spaces
  std ::cin >> agem;                  // take input for age

  std ::cout << "Hey " << full_name << " your age is " << agem
             << " so your lucky number is " << agem / 12 << std ::endl;
}
