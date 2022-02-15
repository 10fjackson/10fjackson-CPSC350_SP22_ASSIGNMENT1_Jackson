#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <iostream>
using namespace std;
class Translator{
public:
Translator();
~Translator();
string translateEnglishWord(string eng);
string translateEnglishSentence(string sentence);
};
#endif
