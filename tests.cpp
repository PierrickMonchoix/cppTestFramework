#include "Tester.h"
#include <iostream>
 
bool fonctionATesterTrue();
bool fonctionATesterFalse();

void testAll(){  
  INITIALISE_TESTS
  ADD_TEST_FUNCTION(fonctionATesterTrue)
  ADD_TEST_FUNCTION(fonctionATesterFalse)
  LAUNCH_TESTS
}

bool fonctionATesterTrue(){
    ASSERT_EQUAL(1,1)
    return true;
}

bool fonctionATesterFalse(){
    ASSERT_EQUAL(1,0)
    return true;
}