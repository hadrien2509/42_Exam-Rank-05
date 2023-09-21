#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph();

		ASpell *clone() const;
};

#endif
