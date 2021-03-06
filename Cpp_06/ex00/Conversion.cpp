/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:14:26 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/21 11:36:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(const std::string input) : _input(input) 
{
	if (!(isdigit(*(_input.c_str()))))
	{
		if (_input.length() == 1){
			_value = static_cast<double>(*(_input.c_str()));
		}
		else {
			if (strcmp(_input.c_str(), "-0") && atof(_input.c_str()) == 0) {
				_input = "nan";
			}
			else {
				_value = atof(_input.c_str());				
			}
		}
	}
	else {
		_value = atof(_input.c_str());
	}
}

Conversion::Conversion(const Conversion &copy) 
{
	*this = copy;
}

Conversion &Conversion::operator=(const Conversion &copy)
{
	_value = copy._value;
	return (*this);
}

void Conversion::toChar()
{
	if (_input == "+inf" || _input == "-inf" || _input == "nan" ||
		_input == "+inff" || _input == "-inff" || _input == "nanf" ||
		_input == "none")
		std::cout << "char: impossible\n";
	else
	{
		char c = static_cast<char>(_value);
		if (c < 32 || c > 126)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << c << "'\n";
	}
}

void Conversion::toInt()
{
	if (_input == "+inf" || _input == "-inf" || _input == "nan" ||
		_input == "+inff" || _input == "-inff" || _input == "nanf" ||
		_input == "none")
		std::cout << "int: impossible\n";
	else
	{
		int i = static_cast<int>(_value);
		std::cout << "int: " << i << std::endl;
	}
}

void Conversion::toFloat()
{
	if (_input == "none")
		std::cout << "float: impossible\n";
	else if (_input == "+inf" || _input == "-inf" || _input == "nan")
		std::cout << "float: " << _input << "f" << std::endl;
	else if (_input == "+inff" || _input == "-inff" || _input == "nanf")
		std::cout << "float: " << _input << std::endl;
	else
	{
		float f = static_cast<float>(_value);
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
}

void Conversion::toDouble()
{
	if (_input == "none")
		std::cout << "double: impossible\n";
	else if (_input == "+inf" || _input == "-inf" || _input == "nan")
		std::cout << "double: " << _input << std::endl;
	else if (_input == "+inff" || _input == "-inff" || _input == "nanf")
		std::cout << "double: " << _input.substr(0, _input.size() - 1) << std::endl;
	else
	{
		double d = static_cast<double>(_value);
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
}


/*

    static_cast = Este ?? o tipo de molde mais simples que pode ser usado. ?? um cast em tempo de compila????o. 
                Ele faz coisas como convers??es impl??citas entre tipos (como int para float ou ponteiro para void *) 
                e tamb??m pode chamar fun????es de convers??o expl??citas (ou impl??citas).

    atof() = um valor duplo (que ?? convertido da string), completando o espa??o que falta.

    isprint() = Verifica se c ?? um caractere imprim??vel .

    c_str() = Converte o conte??do de uma String como uma string terminada em nulo no estilo C. 
            Observe que isso fornece acesso direto ao buffer interno do String. Quando modifica o objeto String, 
            ou quando ele ?? destru??do, qualquer ponteiro retornado anteriormente por c_str ()
            se torna inv??lido e n??o deve ser mais usado.



*/