#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "has been polymorphed") {}

ASpell* Polymorph::clone() const
{
	return (new Polymorph);
}
