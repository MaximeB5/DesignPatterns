// My Includes
#include "derivedclassfactory.hpp"

// Includes
	// None for the moment.

int main() {
	std::unique_ptr<BaseClass> p_one = DerivedClassFactory::createClass(DerivedClassFactory::DerivedClassType::DerivedTypeOne);
	std::unique_ptr<BaseClass> p_two = DerivedClassFactory::createClass(DerivedClassFactory::DerivedClassType::DerivedTypeTwo);

	return 0;
}