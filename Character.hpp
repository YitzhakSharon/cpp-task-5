#include "IllegalCharException.hpp"
class Character{
private:
    char c;
public:
    Character(){
        this->c='.';
    };
    Character(const char t){
        if(t=='.' || t=='X' || t=='O')
            this->c=t;
        else{
            this->c='.';
            throw IllegalCharException(t);
        }
    };
    operator char(){
        return this->c;
    };
    
        


};
