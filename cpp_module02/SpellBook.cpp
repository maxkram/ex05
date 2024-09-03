#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    map<string, ASpell*>::iterator it;
    for (it = spells.begin(); it != spells.end(); ++it)
    {
        delete it->second;
    }
    spells.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if(spell)
        spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(string const & spell)
{
    map<string,ASpell*>::iterator it = spells.find(spell);
    if(it != spells.end()){
        delete it->second;
        spells.erase(spell);
    }
}

ASpell* SpellBook::createSpell(string const & spell)
{
    map<string,ASpell*>::iterator it = spells.find(spell);
    return it != spells.end() ? it->second : NULL;
}
