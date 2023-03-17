#include <iostream>
#include <cmath>

int main() {
  
  double a;
  double b;
  double c;

  std::cout << "From 𝗮𝒙² ＋ 𝗯𝒙 ＋ 𝗰 ＝ 𝟬 \nEnter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  double base = b;
  double exponent = 2;
  double b_squared = pow(base, exponent);
  double FourEhSea = 4 * a * c;
  double sqPart = sqrt(b_squared - FourEhSea);
  double denominator = 2 * a;

  double root1 = (b * -1 + sqPart) / denominator;
  double root2 = (b * -1 - sqPart) / denominator;

  std::cout << "The x intercepts for \n\n  " << a << "𝒙² ＋ " << b << "𝒙 ＋ " << c << " ＝ 𝟬 are:\n" << root1 << "\n ~ and ~ \n" << root2 << "\n";
}
