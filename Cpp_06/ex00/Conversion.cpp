/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:14:26 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/19 18:24:48 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {
}

Conversion::Conversion(const std::string &value) : _value(value) {
}

Conversion::~Conversion() {
}

Conversion::Conversion(const Conversion& Conversion) {
	*this = Conversion;
}

Conversion& Conversion::operator=(const Conversion& Conversion) {
	(void)Conversion;
	return *this;
}

void Conversion::is_char()
{
	if (_value == "+inf" || _value == "-inf" || _value == "nan" ||
		_value == "+inff" || _value == "-inff" || _value == "nanf" ||
		_value == "error")
		std::cout << "char: impossible\n";
	else
	{
		char c = static_cast<char>(_av);
		if (c < 32 || c > 126)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << c << "'\n";
	}
}

void Conversion::convert() {

	const char cValue = toChar();
	const int iValue = toInt();
	const float fValue = toFloat();
	const double dValue = toDouble();

	/*if (fValue < CHAR_MIN || fValue > CHAR_MAX || isnan(fValue)) {
		std::cout << "char: impossible" << std::endl;
	} else if (is_char(cValue)) {
		std::cout << "char: '" << cValue << "'" << std::endl;
	} else {
		std::cout << "char: non displayable" << std::endl;
	}*/
	if (cValue)
		is_char();
	if (iValue < INT_MIN || iValue > INT_MAX || isnan(fValue)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << iValue << std::endl;
	}

	if (fValue - iValue == 0) {
		std::cout << "float: " << fValue << ".0f" << std::endl;
		std::cout << "double: " << dValue << ".0" << std::endl;
	} else {
		std::cout << "float: " << fValue << "f" << std::endl;
		std::cout << "double: " << dValue << std::endl;
	}
}

char Conversion::toChar() {
	
	return static_cast<char>(toFloat());
}

int Conversion::toInt() {
	return static_cast<int>(toFloat());
}

float Conversion::toFloat() {
	return atof(_value.c_str());
}

double Conversion::toDouble() {
	return static_cast<double>(toFloat());
}



/* 
    static_cast = Este é o tipo de molde mais simples que pode ser usado. É um cast em tempo de compilação. 
                Ele faz coisas como conversões implícitas entre tipos (como int para float ou ponteiro para void *) 
                e também pode chamar funções de conversão explícitas (ou implícitas).

    isnan() = Os valores NaN são usados ​​para identificar valores indefinidos ou não representáveis ​​para 
        elementos de ponto flutuante,como a raiz quadrada de números negativos ou o resultado de 0/0.

    atof() = um valor duplo (que é convertido da string), completando o espaço que falta.


    isinf() = Retorna se x é um valor infinito ( infinito positivo ou infinito negativo ).

    isprint() = Verifica se c é um caractere imprimível .

    c_str() = Converte o conteúdo de uma String como uma string terminada em nulo no estilo C. 
            Observe que isso fornece acesso direto ao buffer interno do String. Quando modifica o objeto String, 
            ou quando ele é destruído, qualquer ponteiro retornado anteriormente por c_str ()
            se torna inválido e não deve ser mais usado.



*/