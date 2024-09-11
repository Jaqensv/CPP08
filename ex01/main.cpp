/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:00:58 by mde-lang          #+#    #+#             */
/*   Updated: 2024/09/11 10:33:21 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		//Span sp = Span(5);

		// sp.addNumber(10);
		// sp.addNumber(-700);
		// sp.addNumber(80);
		// sp.addNumber(12);
		// sp.addNumber(85);
		
		Span sp2 = Span(10000);

		sp2.addPack();
	
		std::cout << "shortest span : " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}