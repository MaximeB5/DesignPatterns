#ifndef DERIVEDCLASSFACTORY_H
#define DERIVEDCLASSFACTORY_H

// My Includes
#include "baseclass.hpp"
#include "derivedclassone.hpp"
#include "derivedclasstwo.hpp"
#include "derivedclassfactoryexception.hpp"

// Includes
#include <memory>

/**
 * @brief BaseClass
 * 
 */
class DerivedClassFactory
{
// Attributes
public:
    enum class DerivedClassType : int {
        DerivedTypeOne = 1,
        DerivedTypeTwo = 2
    };

protected:
    // None for the moment.

private:
    // None for the moment.


// Methods
public:
    // Constructors
        // None.

    // Destructor
        // None.

    // UI
    static std::unique_ptr<BaseClass> createClass(DerivedClassType type) {
        switch(type) {
            case DerivedClassType::DerivedTypeOne : return std::make_unique<DerivedClassOne>();
            case DerivedClassType::DerivedTypeTwo : return std::make_unique<DerivedClassTwo>();
        }

        throw new DerivedClassFactoryException{"Invalid type. The requested instance creation is not possible."};
    }
    

protected:
    // None for the moment.

private:
    // None for the moment.

};

#endif // DERIVEDCLASSFACTORY_H