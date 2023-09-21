#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget* tar)
{
	if (tar && !this->_targetList[tar->getType()])
		this->_targetList[tar->getType()] = tar;
}

void TargetGenerator::forgetTargetType(const std::string& tar)
{
	this->_targetList.erase(tar);
}

ATarget* TargetGenerator::createTarget(const std::string &tar)
{
	return (this->_targetList[tar]);
}
