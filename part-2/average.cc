// Juan Vega
// jv3ga@csu.fullerton.edu
// @jv3ga0107
// Partners: @none

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO(jv3ga): Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number. \n";
  }

  // TODO(jv3ga): Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};

  for (const auto& arg : arguments) {
    if (arg != arguments[0]) {
      sum += std::stod(arg);
    }
  }

  // TODO(jv3ga): After the loop has finished summing the arguments, calculate
  // the average of the values. Recall that the average is the total value
  // divided by the number of values.
  double average{sum / (--argc)};
  std::cout << "average =";
  std::cout << average;

  return 0;
}
