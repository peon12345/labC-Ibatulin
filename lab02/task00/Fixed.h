#pragma once 

class Fixed
{
public:
   Fixed();
   Fixed(const Fixed&);
   Fixed& operator = (const Fixed&);

   int getRawBits() const;
   void setRawBits(const int raw);

   ~Fixed();

private:
    int m_dec;
    static constexpr int m_fractionalBits = 8;
};