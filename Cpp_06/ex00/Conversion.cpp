/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:14:26 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/12 21:33:08 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include "Char.hpp"

Conversion::Conversion(char *av) : getline(av) {}

float Conversion::toFloat() const
{
    return atof(getline.c_str());
}

int Conversion::toInt() const
{
    return static_cast<int>(toFloat());
}

std::string Conversion::getValue() const
{
    return getline;
}

double Conversion::toDouble() const
{
    return static_cast<double>(toFloat());
}

std::ostream& operator<<(std::ostream& out, const Conversion& src)
{
	if (!isnan(src.toFloat()) && !isprint(src.toChar()) && !isinf(src.toFloat()))
		out << "char: Non displayable" << std::endl;
	else if (isprint(src.toChar()))
		out << "char:	" << src.toChar() << std::endl;
	else
		out << "char: impossible" << std::endl;

	if (isnan(src.toFloat()) || src.toFloat() >= 2147483646 || src.toFloat() <= -2147483648)
		out << "int: impossible" << std::endl;
	else
		out << "int:	" << src.toInt() << std::endl;

	if (src.toFloat() - src.toInt() == 0)
	{
		out << "Float:	" << src.toFloat() << ".0f" << std::endl;
		out << "Double:	" << src.toDouble() << ".0" << std::endl;
	}
	else
	{
		out << "Float:	" << src.toFloat() << "f" << std::endl;
		out << "Double:	" << src.toDouble() << std::endl;
	}
	return out;
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