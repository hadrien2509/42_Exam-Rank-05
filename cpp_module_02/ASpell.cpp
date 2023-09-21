#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell& src)
{
	(*this) = src;
}

const ASpell& ASpell::operator=(const ASpell& src)
{
	this->_name = src._name;
	this->_effects = src._effects;
	return (*this);
}

ASpell::~ASpell() {}

const std::string& ASpell::getName() const
{
	return (this->_name);
}

const std::string& ASpell::getEffects() const
{
	return (this->_effects);
}

void ASpell::launch(const ATarget& tar) const
{
	tar.getHitBySpell(*this);
}


