// My Includes
#include "derivedclasstwo.hpp"

// Includes
#include <iostream>

/**
 * @brief Destroy the DerivedClassTwo:: DerivedClassTwo object
 * 
 */
DerivedClassTwo::~DerivedClassTwo() {
    this->Release();
}


/**
 * @brief DerivedClassTwo::Init
 * 
 */
void DerivedClassTwo::Init() {
}


/**
 * @brief DerivedClassTwo::Release
 * 
 */
void DerivedClassTwo::Release() {
    std::cout << "Destroying an instance of DerivedClassTwo" << "\n";
}