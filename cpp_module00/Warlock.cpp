#include "Warlock.hpp"

Warlock::Warlock(const string &name, const string &title)
    : _name(name), _title(title)
{
    cout << name << ": This looks like another boring day." << endl;
}

const string &Warlock::getName() const
{
    return _name;
}

const string &Warlock::getTitle() const
{
    return _title;
}

void Warlock::setTitle(const string &title)
{
    _title = title;
}

void Warlock::introduce() const
{
    cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
}

Warlock::~Warlock()
{
    cout << _name << ": My job here is done!" << endl;
}
