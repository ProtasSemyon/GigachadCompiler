#include <iostream>
#include "src/Visitor.hpp"

const std::string FILENAME = "../test.rels";

int main(int , const char **) {
  Visitor visit;
  visit.fromFile(FILENAME);
  visit.module->print(outs(), nullptr);
  return 0;
}