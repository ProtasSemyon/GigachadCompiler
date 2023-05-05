#include <iostream>
#include "src/Visitor.hpp"

const std::string FILENAME = "/home/smn/BSUIR_6/YAPIS/GigachadCompiler/test.rels";

int main(int , const char **) {
  Visitor visit;
  visit.fromFile(FILENAME);
  visit.module->print(outs(), nullptr);
  return 0;
}