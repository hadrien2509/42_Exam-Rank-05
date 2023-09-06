#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp" 

class ATarget
{
	private:
		std::string _type;
	
	public:
		ATarget(std::string);
		ATarget(const ATarget&);
		const ATarget& operator=(const ATarget&);
		virtual ~ATarget();

		const std::string& getType() const;

		void getHitBySpell(const ASpell&) const;
		virtual ATarget* clone() const = 0;
};

#endif
