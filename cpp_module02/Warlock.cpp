#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
    : _name(name), _title(title)
{
    cout << _name << ": This looks like another boring day." << endl;
}

const string& Warlock::getName() const{
    return _name;
}

const string& Warlock::getTitle() const{
    return _title;
}

void Warlock::setTitle(const string& title){
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

void Warlock::forgetSpell(const string& spell)
{
   spellBook.forgetSpell(spell);
}

void Warlock::launchSpell(string spell, const ATarget& target)
{
    ASpell* tmpSpell = spellBook.createSpell(spell);
    if(tmpSpell)
        tmpSpell->launch(target);
}

Warlock::~Warlock()
{
    cout << _name << ": My job here is done!" << endl;
}

