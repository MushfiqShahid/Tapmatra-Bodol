#include <iostream>

inline double c2f(double c) { return (c * 9.0 / 5.0) + 32.0; }
inline double f2c(double f) { return (f - 32.0) * 5.0 / 9.0; }
inline double c2k(double c) { return c + 273.15; }
inline double k2c(double k) { return k - 273.15; }
inline double f2k(double f) { return c2k(f2c(f)); }
inline double k2f(double k) { return c2f(k2c(k)); }

int main() {
  int a;
  double inputTemperature, result;

  std::cout << "***** Welcome to Shahid Temperature Converter *****\n";
  std::cout << "What conversion do you want to do? Select an option:\n";
  std::cout << "1. Celsius to Fahrenheit\n";
  std::cout << "2. Fahrenheit to Celsius\n";
  std::cout << "3. Kelvin to Celsius\n";
  std::cout << "4. Celsius to Kelvin\n";
  std::cout << "5. Fahrenheit to Kelvin\n";
  std::cout << "6. Kelvin to Fahrenheit\n";
  std::cout << "Enter your option here: ";
  std::cin >> a;

  switch (a) {
  case 1:
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> inputTemperature;
    result = c2f(inputTemperature);
    std::cout << "Converted temperature: " << result << " ºF\n";
    break;
  case 2:
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> inputTemperature;
    result = f2c(inputTemperature);
    std::cout << "Converted temperature: " << result << " ºC\n";
    break;
  case 3:
    std::cout << "Enter temperature in Kelvin: ";
    std::cin >> inputTemperature;
    result = k2c(inputTemperature);
    std::cout << "Converted temperature: " << result << " ºC\n";
    break;
  case 4:
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> inputTemperature;
    result = c2k(inputTemperature);
    std::cout << "Converted temperature: " << result << " K\n";
    break;
  case 5:
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> inputTemperature;
    result = f2k(inputTemperature);
    std::cout << "Converted temperature: " << result << " K\n";
    break;
  case 6:
    std::cout << "Enter temperature in Kelvin: ";
    std::cin >> inputTemperature;
    result = k2f(inputTemperature);
    std::cout << "Converted temperature: " << result << " ºF\n";
    break;
  default:
    int i;
    for (i = 0; i <= a; i++) {
      std::cout << "*** Please select a valid option (1-6) ***\n";
    }
    break;
  }

  return 0;
}
