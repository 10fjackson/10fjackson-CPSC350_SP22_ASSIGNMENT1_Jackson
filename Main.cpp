#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>
using namespace std;

int main(){
  FileProcessor *sb = new FileProcessor();
  sb->processFile("output.txt");
  return 0;
}
