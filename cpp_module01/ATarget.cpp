#include "ATarget.hpp"

ATarget::ATarget(const std::string& type) : _type(type) {}

const string& ATarget::getType() const
{
    return _type;
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    cout <<  _type << " has been " << spell.getEffects() << "!" << endl;
}