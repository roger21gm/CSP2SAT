//
// Created by Roger Generoso Masós on 19/03/2020.
//

#ifndef CSP2SAT_SYMBOL_H
#define CSP2SAT_SYMBOL_H

#include <string>
#include <utility>
#include "../Scope/Scope.h"

using namespace std;

class Scope;
class Type;

class Symbol {
public:
    Symbol(string name) : name(move(name)) {} //For constructing Type symbols
    Symbol(string name, Type *type) : name(move(name)), type(type) {} //For constructing var/const declarations

    string getName() {
        return this->name;
    }

    string name;
    Type *type = nullptr;
    Scope *scope = nullptr;
};


#endif //CSP2SAT_SYMBOL_H
