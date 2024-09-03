#pragma once

#include <map>
// #include <utility>
#include "ASpell.hpp"

using namespace std;

class SpellBook
{
    private:
        map<string,ASpell*> spells;
        SpellBook(SpellBook const &);
        SpellBook& operator=(SpellBook const &) {return *this;}

    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(string const & spell);
        ASpell* createSpell(string const &);

};