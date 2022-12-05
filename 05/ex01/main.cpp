/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:04:16 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/02 16:11:37 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//#include <stdlib.h>

// void	cc(void)
// {
// 	system("leaks maggots");
// }

int	main(void)
{
	// atexit(&cc);
	/* beSgined() TEST */
	try
	{
		Bureaucrat	bob("bob", 21);
		Form		file("file", 10, 20);

		std::cout << "<---------BOB----------->" << std::endl;
		std::cout << bob << "\nVV trying to sign VV\n" << file << std::endl << std::endl;
		file.beSigned(bob);
		std::cout << file <<std::endl;
		std::cout << "--------SUCCESE----------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}


	try
	{
		Bureaucrat	jack("jack", 15);
		Form		file("file", 10, 20);

		std::cout << "\n<---------JACK----------->" << std::endl;
		std::cout << jack << "\nVV trying to sign VV\n" << file << std::endl << std::endl;
		file.beSigned(jack);
		std::cout << file <<std::endl;
		std::cout << "---------SUCCESE----------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}
	try
	{
		Bureaucrat	tom("tom", 9);
		Form		file("file", 10, 20);

		std::cout << "\n<---------TOM----------->" << std::endl;
		std::cout << tom << "\nVV trying to sign VV\n" << file << std::endl << std::endl;
		file.beSigned(tom);
		std::cout << file <<std::endl;
		std::cout << "---------SUCCESE---------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;;
	}

	/*singForm() TEST*/
	try
	{
		Bureaucrat	bob("bob", 21);
		Form		file("file", 10, 20);

		std::cout << "<---------BOB----------->" << std::endl;
		std::cout << bob << "\nVV trying to sign VV\n" << file << std::endl << std::endl;
		bob.signForm(file);
		std::cout << file <<std::endl;
		std::cout << "--------SUCCESE----------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}


	try
	{
		Bureaucrat	jack("jack", 15);
		Form		file("file", 10, 20);

		std::cout << "\n<---------JACK----------->" << std::endl;
		std::cout << jack << "\nVV trying to sign VV\n" << file << std::endl << std::endl;
		jack.signForm(file);
		std::cout << file <<std::endl;
		std::cout << "---------SUCCESE----------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}
	try
	{
		Bureaucrat	tom("tom", 9);
		Form		file("file", 10, 20);

		std::cout << "\n<---------TOM----------->" << std::endl;
		std::cout << tom << "\nVV trying to sign VV\n" << file << std::endl << std::endl;
		tom.signForm(file);
		std::cout << file <<std::endl;
		std::cout << "---------SUCCESE---------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}
	
	/* Copy Test */
	try
	{
		Bureaucrat	tom("tom", 9);
		Bureaucrat	tt(tom);
		Form		file("file", 10, 20);
		Form		ff(file);

		std::cout << "\n<---------TOM----------->" << std::endl;
		std::cout << tt << "\nVV trying to sign VV\n" << ff << std::endl << std::endl;
		tt.signForm(ff);
		std::cout << ff <<std::endl;
		std::cout << "---------SUCCESE---------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}
	/* Assignment Test */
	try
	{
		Bureaucrat	tom("tom", 9);
		Bureaucrat	tt = tom;
		Form		file("file", 10, 20);
		Form		ff = file;

		std::cout << "\n<---------TOM----------->" << std::endl;
		std::cout << tt << "\nVV trying to sign VV\n" << ff << std::endl << std::endl;
		tt.signForm(ff);
		std::cout << ff <<std::endl;
		std::cout << "---------SUCCESE---------\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}

	/* Construct Test */
	try
	{
		Bureaucrat	gg("gg", 1566);
		Form		dd("dd", -12515, 123);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "--------FAIL----------\n" << std::endl;
	}
	return (0);
}
