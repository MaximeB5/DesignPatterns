// My Includes
#include "derivedclassone.hpp"

// Includes
#include <iostream>

/**
 * @brief Destroy the DerivedClassOne:: DerivedClassOne object
 * 
 */
DerivedClassOne::~DerivedClassOne() {
    this->Release();
}


/**
 * @brief DerivedClassOne::Init
 * 
 */
void DerivedClassOne::Init() {
}


/**
 * @brief DerivedClassOne::Release
 * 
 */
void DerivedClassOne::Release() {
    std::cout << "Destroying an instance of DerivedClassOne" << "\n";
}