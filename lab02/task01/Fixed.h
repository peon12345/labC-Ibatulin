#pragma once 

class Fixed
{
public:
   Fixed(int m_dec);
   Fixed(const Fixed&);
   Fixed& operator = (const Fixed&);

   int getRawBits() const;
   void setRawBits(const int raw);

   ~Fixed();

private:
    int m_dec;
    int m_n = 8;
};


class Fixed {
public:
    Fixed() : m_value(0) {}
    Fixed(const Fixed& other) : m_value(other.m_value) {}
    Fixed(int value) : m_value(value << m_fractionalBits) {}
    Fixed(float value) : m_value(roundf(value * (1 << m_fractionalBits))) {}
    ~Fixed() {}

    Fixed& operator=(const Fixed& other) {
        if (this != &other) {
            m_value = other.m_value;
        }
        return *this;
    }

    int getRawBits() const {
        return m_value;
    }

    void setRawBits(int raw) {
        m_value = raw;
    }

    float toFloat() const {
        return static_cast<float>(m_value) / (1 << m_fractionalBits);
    }

    int toInt() const {
        return m_value >> m_fractionalBits;
    }

private:
    int m_value;
    static const int m_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
