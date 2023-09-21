#ifndef TARGETGENERATOR_H
# define TARGETGENERATOR_H

# include <iostream>
# include <algorithm>
# include <map>
# include <string>

class ATarget;

class TargetGenerator
{
	private:
		std::map<std::string,ATarget*> _targetList;

		TargetGenerator(const TargetGenerator&);
		const TargetGenerator& operator=(const TargetGenerator&);

	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);

};

# include "ATarget.hpp"

#endif
