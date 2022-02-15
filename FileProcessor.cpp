#include "Translator.h"
#include "Model.h"
#include "FileProcessor.h"
#include <iostream>
#include <fstream>
using namespace std;
FileProcessor::FileProcessor(){

}
FileProcessor::~FileProcessor(){

}
void FileProcessor::processFile(string fileName){
  string contents;
  string line;
  ifstream myfile(fileName);
  if(myfile.is_open()){
    while(getline(myfile,line)){
      contents += line;
    }
  }
  Translator *t = new Translator();
  cout<<t->translateEnglishSentence(contents)<<endl;
}
