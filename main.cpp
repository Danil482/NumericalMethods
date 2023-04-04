#include "stdafx.h"

#ifdef DEBUG_LIB
#include "NumMethods/TestMethods/testLinearEquation.h"
#endif // DEBUG_LIB


int main()
{
	//// Iterative methods tests
	//UnitTests::testLinearEquation::testThomas();
	//UnitTests::testLinearEquation::testUpRelaxation();
	//UnitTests::testLinearEquation::testJacobi();
	//UnitTests::testLinearEquation::testDownRelaxation();
	UnitTests::testLinearEquation::testSeidel();
	////UnitTests::testLinearEquation::testGreatDescent();
	//UnitTests::testLinearEquation::testDownRelaxtionAsync();
	UnitTests::testLinearEquation::testSeidelAsync();

	//Kursach tests
	//UnitTests::testKursach::testExercise();


	return 0;
}
