#include "Model.h"
#include <iostream>
using namespace std;

Model::Model(){

}
Model::~Model(){

}
string Model::translateSingleCharacter(char c){
  char single = c;
  string word = "";
  switch(single){
    case 'A':
      word = "A";
      break;
    case 'E':
      word = "E";
      break;
    case 'I':
      word = "I";
      break;
    case 'O':
      word = "O";
      break;
    case 'U':
      word = "U";
      break;
    case 'a':
      word = "a";
      break;
    case 'e':
      word = "e";
      break;
    case 'i':
      word = "i";
      break;
    case 'o':
      word = "o";
      break;
    case 'u':
      word = "u";
      break;
    case 'b':
      word = "bub";
      break;
    case 'c':
      word = "cash";
      break;
    case 'd':
      word = "dud";
      break;
    case 'f':
      word = "fuf";
      break;
    case 'g':
      word = "gug";
      break;
    case 'h':
      word = "hash";
      break;
    case 'j':
      word = "jay";
      break;
    case 'k':
      word = "kuck";
      break;
    case 'l':
      word = "lul";
      break;
    case 'm':
      word = "mum";
      break;
    case 'n':
      word = "nun";
      break;
    case 'p':
      word = "pub";
      break;
    case 'q':
      word = "quack";
      break;
    case 'r':
      word = "rug";
      break;
    case 's':
      word = "sus";
      break;
    case 't':
      word = "tut";
      break;
    case 'v':
      word = "vuv";
      break;
    case 'w':
      word = "wack";
      break;
    case 'x':
      word = "ex";
      break;
    case 'y':
      word = "yub";
      break;
    case 'z':
      word = "zub";
      break;
    case 'B':
      word = "Bub";
      break;
    case 'C':
      word = "Cash";
      break;
    case 'D':
      word = "Dud";
      break;
    case 'F':
      word = "Fuf";
      break;
    case 'G':
      word = "Gug";
      break;
    case 'H':
      word = "Hash";
      break;
    case 'J':
      word = "Jay";
      break;
    case 'K':
      word = "Kuck";
      break;
    case 'L':
      word = "Lul";
      break;
    case 'M':
      word = "Mum";
      break;
    case 'N':
      word = "Nun";
      break;
    case 'P':
      word = "Pub";
      break;
    case 'Q':
      word = "Quack";
      break;
    case 'R':
      word = "Rug";
      break;
    case 'S':
      word = "Sus";
      break;
    case 'T':
      word = "Tut";
      break;
    case 'V':
      word = "Vuv";
      break;
    case 'W':
      word = "Wack";
      break;
    case 'X':
      word = "Ex";
      break;
    case 'Y':
      word = "Yub";
      break;
    case 'Z':
      word = "Zub";
      break;
  }
  return word;
}
string Model::translateDoubleCharacter(char c){
  string output = "";
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
    output = "squat";
  }
  else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
    output = "Squat";
  }
  else if(c == 'B' || c == 'C' || c == 'D' || c == 'F' || c == 'G' || c == 'H' || c == 'J' || c == 'K' || c == 'L' || c == 'M' || c == 'N' || c == 'P' || c == 'Q' || c == 'R' || c == 'S' || c == 'T' || c == 'V' || c == 'W' || c == 'X' || c == 'Y' || c == 'Z'){
    output = "Squa";
  }
  else if(c == 'b' || c == 'c' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || c == 'j' || c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't' || c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z'){
    output = "squa";
  }
  return output;
}
