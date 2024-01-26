#include "Fixed.h"
#include <iostream>

Fixed::Fixed() : m_dec(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : m_dec(fixed.m_dec)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy operator called" << std::endl;
    m_dec = fixed.m_dec;
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return m_dec;
}
void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    m_dec = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}