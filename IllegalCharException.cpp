#include "IllegalCharException.hpp"
using namespace std;

char IllegalCharException::theChar() const{
    return this->ch;
}