#ifndef DERIVEDCLASSONE_H
#define DERIVEDCLASSONE_H

// My Includes
#include "baseclass.hpp"

// Includes
    // None for the moment.

/**
 * @brief DerivedClassOne
 * 
 */
class DerivedClassOne : public BaseClass
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
    virtual ~DerivedClassOne();

    // UI
    void Init()     override;
    void Release()  override;

protected:
    // None for the moment.

private:
    // None for the moment.

};

#endif // DERIVEDCLASSONE_H