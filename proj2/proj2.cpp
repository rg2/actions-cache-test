
#include "proj1.h"

#include <fmt/core.h>

#include <iostream>

int main(int argc, char* argv[])
{
  std::cout << "hello from proj2 main()" << std::endl;

  Proj1Fn();

  fmt::print("printed from fmt! {0}", "arg 0");

  return 0;
}

