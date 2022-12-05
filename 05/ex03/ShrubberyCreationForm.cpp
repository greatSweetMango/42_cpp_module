/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:43:00 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 13:43:54 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", "Default", 145, 137)

{
	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "ShrubberyCreationForm: Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: AForm(copy)
{
	std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw IsNotSignedException();
	if (this->getGradeToExecute() < executor.getGrade())
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw GradeTooLowException(2);
	}

	std::ofstream	outfile(this->getTarget() + "_shrubbery");
	if (outfile.fail())
	{
		std::cout << "Fail to make outfile!" << std::endl;
		return ;
	}
	outfile << "                                                         ." << std::endl;
	outfile << "                                              .         ;  " << std::endl;
	outfile << "                 .              .              ;%     ;;        " << std::endl;
	outfile << "                   ,           ,                :;%  %;         " << std::endl;
	outfile << "                    :         ;                   :;%;'     .,  " << std::endl; 
	outfile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	outfile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	outfile << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	outfile << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	outfile << "                            ;@%. :@%%  %@@%;       " << std::endl;
	outfile << "                              %@bd%%%bd%%:;     " << std::endl;
	outfile << "                                #@%%%%%:;;" << std::endl;
	outfile << "                                %@@%%%::;        " << std::endl;
	outfile << "                                %@@@%(o);  . '         " << std::endl;
	outfile << "                                %@@@o%;:(.,'         " << std::endl;
	outfile << "                            `.. %@@@o%::;         " << std::endl;
	outfile << "                               `)@@@o%::;         " << std::endl;
	outfile << "                                %@@(o)::;        " << std::endl;
	outfile << "                               .%@@@@%::;         " << std::endl;
	outfile << "                               ;%@@@@%::;.          " << std::endl;
	outfile << "                              ;%@@@@%%:;;;. " << std::endl;
	outfile << "                          ...;%@@@@@%%:;;;;,..    " << std::endl;
	outfile.close();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this == &src)
		return (*this);
	*this = ShrubberyCreationForm(src);
	return (*this);
}
