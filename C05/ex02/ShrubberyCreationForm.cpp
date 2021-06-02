#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form::Form("shrubbery creation", 145, 137), _target("default")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("shrubbery creation", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("shrubbery creation", 145, 137), _target(src.getTarget())
{
	*this = src;
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
		int i;
		i = 0;
		while (i < 2)
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
			i++;
		}
		out.close();
	}
	return;
}
