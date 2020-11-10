#ifndef DERIVEDCLASSTWO_H
#define DERIVEDCLASSTWO_H

// My Includes
#include "baseclass.hpp"

// Includes
    // None for the moment.

/**
 * @brief BaseClass
 * 
 */
class DerivedClassTwo : public BaseClass
{
// Attributes
protected:
    // None for the moment.

private:
    // None for the moment.


// Methods
public:
    // Constructors
        // None.

    // Destructor
    virtual ~DerivedClassTwo();

    // UI
    void Init()     override;
    void Release()  override;

protected:
    // None for the moment.

private:
    // None for the moment.

};

#endif // DERIVEDCLASSTWO_H