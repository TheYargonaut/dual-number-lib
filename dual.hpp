#ifndef DUAL_NUMBERS_DUAL_HPP
#define DUAL_NUMBERS_DUAL_HPP

#include "dual.h"

#include <sstream>

namespace dual {

template< typename T > std::string Dual< T >::to_string() const {
    std::ostringstream out;
    out << real_ << ( ( inft_ > 0 )? "+" : "" ) << inft_ << "e";
    return out.str();
}

template< typename T >
std::string to_string( Dual< T >& obj ) {
    return obj.to_string();
}

template< typename T >
std::ostream& operator<<( std::ostream& os, const Dual< T >& obj ) {
    return os << obj.to_string();
}

}

#endif // DUAL_NUMBERS_DUAL_HPP