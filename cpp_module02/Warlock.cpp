#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title)
    : _name(name), _title(title)
{
    cout << _name << ": This looks like another boring day." << endl;
}

string const & Warlock::getName() const{
    return _name;
}

string const & Warlock::getTitle() const{
    return _title;
}

void Warlock::setTitle(string const & title){
    _title = title;
}

void Warlock::introduce() const {
    cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    if(spell)
       spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(string const & spell)
{
   spellBook.forgetSpell(spell);
}

void Warlock::launchSpell(string spell, ATarget const & target)
{
    ASpell* tmpSpell = spellBook.createSpell(spell);
    if(tmpSpell)
        tmpSpell->launch(target);
}

Warlock::~Warlock()
{
    cout << _name << ": My job here is done!" << endl;
}

