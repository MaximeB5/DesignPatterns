#ifndef DERIVEDCLASSFACTORYEXCEPTION_H
#define DERIVEDCLASSFACTORYEXCEPTION_H

// Includes
#include <exception>    // std::exception
#include <string>

class DerivedClassFactoryException : public std::exception
{
// Attributes
private:
    std::string _msg;

// Methods
public:
    // Constructors
    /**
     * @brief Construct a new DerivedClassFactoryException object
     * 
     * @param msg 
     */
    DerivedClassFactoryException(const std::string& msg) : _msg(msg) {}

    // UI
    /**
     * @brief what
     * 
     * @return const char* _msg.c_str()
     */
    virtual const char* what() const noexcept override
    {
        return _msg.c_str();
    }
}; 

#endif // DERIVEDCLASSFACTORYEXCEPTION_H