#ifndef BASECLASS_H
#define BASECLASS_H

// My Includes
    // None for the moment.

// Includes
    // None for the moment.

/**
 * @brief BaseClass
 * 
 */
class BaseClass
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
    virtual ~BaseClass();

    // UI
    virtual void Init()     = 0;
    virtual void Release()  = 0;

protected:
    // None for the moment.

private:
    // None for the moment.

};

#endif // BASECLASS_H