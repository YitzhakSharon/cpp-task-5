#include "IllegalCharException.hpp"
class Character{
private:
    char c;
public:
    Character(){
        this->c='.';
    };
    Character(char t){
        if(t=='.' || t=='X' || t=='O')
            this->c=t;
        else{
            this->c='.';
            throw IllegalCharException((char)t);
        }
    };
    operator char(){
        return this->c;
    };
    
        


};