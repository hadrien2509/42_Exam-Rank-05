#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "has been burned") {}

ASpell* Fireball::clone() const
{
	return (new Fireball);
}
