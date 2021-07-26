#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form::Form("shrubbery creation", 145, 137, false), _target("default")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("shrubbery creation", 145, 137, false), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src.getName(), src.getGradeForSign(), src.getGradeForExecute(), src.getSignedStatus()), _target(src.getTarget())
{
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	(void)src;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

std::string const & ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(const Bureaucrat & b) const
{
	this->Form::checkFormExec(b);
	std::string filename = this->_target + "_shrubbery";
	std::ofstream out(filename.c_str());
	if (out)
	{
		out << "         .     .  .      +     .      .          .\n"
				   "     .       .      .     #       .           .\n"
				   "        .      .         ###            .      .      .\n"
				   "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
				   "          .      . \"####\"###\"####\"  .\n"
				   "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				   "  .             \"#########\"#########\"        .        .\n"
				   "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				   "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				   "                .\"##\"#####\"#####\"##\"           .      .\n"
				   "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				   "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
				   "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
				   "            .     \"      000      \"    .     .\n"
				   "       .         .   .   000     .        .       .\n"
				   ".. .. ..................O000O........................ ...... ..." << std::endl;
		out.close();
	}
	return;
}
