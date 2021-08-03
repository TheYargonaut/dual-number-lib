#ifndef DUAL_NUMBERS_DUAL_H
#define DUAL_NUMBERS_DUAL_H

#include <sstream>

namespace dual {

template< typename T >
class Dual {
public:
    Dual( T _real, T _inft ): real_( _real ), inft_( _inft ) {}
    std::string to_string() const;
protected:
    T real_;
    T inft_;
};

template< typename T >
std::string to_string( const Dual< T >& obj );
template< typename T >
std::ostream& operator<<( std::ostream& os, const Dual< T >& obj );


}

// template implementations here
#include "dual.hpp"

#endif // DUAL_NUMBERS_DUAL_H