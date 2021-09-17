/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:38 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/17 17:45:25 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

























/*
static void test_subject(void) {
	std::cout << "TEST FROM SUBJECT" << std::endl << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl;
}

static void test_comparisons(void) {
	std::cout << "TEST COMPARISON OPERATORS" << std::endl << std::endl;

	Fixed a(3.14f);
	Fixed b(42.42f);


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "a > b: " << (a > b ? "true" : "false") << std::endl;
	std::cout << "a < b: " << (a < b ? "true" : "false") << std::endl;
	std::cout << "a >= b: " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "a <= b: " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "a == b: " << (a == b ? "true" : "false") << std::endl;
	std::cout << "a != b: " << (a != b ? "true" : "false") << std::endl;
	std::cout << std::endl;

	a = Fixed(b);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "a > b: " << (a > b ? "true" : "false") << std::endl;
	std::cout << "a < b: " << (a < b ? "true" : "false") << std::endl;
	std::cout << "a >= b: " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "a <= b: " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "a == b: " << (a == b ? "true" : "false") << std::endl;
	std::cout << "a != b: " << (a != b ? "true" : "false") << std::endl;
	std::cout << std::endl;
}

static void test_arithmetic(void) {
	std::cout << "TEST ARITHMETIC OPERATORS" << std::endl << std::endl;

	Fixed a(42.75f);
	Fixed b(5.25f);


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << std::endl;
}

static void test_increment_decrement(void) {
	std::cout << "TEST INCREMENT / DECREMENT" << std::endl << std::endl;

	Fixed a(42.0f);

	std::cout << "a is " << a << std::endl;

	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << std::endl;
}

static void test_min_max(void) {
	std::cout << "TEST MIN / MAX" << std::endl << std::endl;

	Fixed a(3.14f);
	Fixed b(42.42f);


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "Min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "Max(a, b): " << Fixed::max(a, b) << std::endl;
}

int	main(void) {
	test_subject();
	test_comparisons();
	test_arithmetic();
	test_increment_decrement();
	test_min_max();

	return 0;
}
*/