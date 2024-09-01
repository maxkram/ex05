#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
    : _name(name), _title(title) {
    cout << name << ": This looks like another boring day." << endl;
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
        spells.insert(make_pair(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(string spell)
{
   map<string,ASpell*>::iterator it = spells.find(spell);
   if(it != spells.end()) {
        delete it->second;
        spells.erase(spell);
   }
}

void Warlock::launchSpell(string spell, const ATarget& target)
{
    map<string,ASpell*>::iterator it = spells.find(spell);
    if(it != spells.end())
        it->second->launch(target);
}

Warlock::~Warlock()
{
    cout << _name << ": My job here is done!" << endl;
    for(map<string,ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
        delete it->second;
    spells.clear();
}

