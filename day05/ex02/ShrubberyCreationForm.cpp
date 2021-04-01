
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", SHRUB_S_GRADE, SHRUB_E_GRADE),
														_target("Nothing") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm",
														SHRUB_S_GRADE, SHRUB_E_GRADE) {
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form): AForm("ShrubberyCreationForm",
																					  SHRUB_S_GRADE, SHRUB_E_GRADE) {
	this->_target = form.getTarget();
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void ShrubberyCreationForm::executeAction() const{
	std::string fileName = this->_target + "_shrubbery";
	std::ofstream shrub(fileName);
	if (shrub.is_open()) {
		shrub << "               ,@@@@@@@," << std::endl;
		shrub << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		shrub << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
  		shrub << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
  		shrub << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
  		shrub << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
  		shrub << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
  		shrub << "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
  		shrub << std::endl;
  		shrub << "------------------------------------------------" << std::endl;
  		shrub << "Thank you for visiting https://asciiart.website/" << std::endl;
  		shrub << "This ASCII pic can be found at" << std::endl;
  		shrub << "https://asciiart.website/index.php?art=plants/trees" << std::endl;
		shrub.close();
	}
}