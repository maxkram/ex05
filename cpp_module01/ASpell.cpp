#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects)
    : _name(name), _effects(effects) {}

const string& ASpell::getName() const{
    return _name;
}

const string& ASpell::getEffects() const{
    return _effects;
}

void ASpell::launch(const ATarget& target) const{
    target.getHitBySpell(*this);
}