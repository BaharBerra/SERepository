// my_function.h

/* Note how this header contains only a declaration of a function.
 * Header functions usually do not define implementations for declarations
 * unless code must be further processed at compile time, as in templates.
 */

 /* Also, usually header files include preprocessor guards so that every header
  * is never included twice.
  *
  * The guard is implemented by checking if a header-file unique preprocessor
  * token is defined, and only including the header if it hasn't been included
  * once before.
  */
#ifndef MY_FUNCTION_H
#define MY_FUNCTION_H

  // global_value and my_function() will be
  // recognized as the same constructs if this header is included by different files.
const int global_value = 42;
int my_function();

#endif // MY_FUNCTION_H

// my_function.cpp

/* Note how the corresponding source file for the header includes the interface
 * defined in the header so that the compiler is aware of what the source file is
 * implementing.
 *
 * In this case, the source file requires knowledge of the global constant
 * global_value only defined in my_function.h. Without inclusion of the header
 * file, this source file would not compile.
 */
#include "my_function.h" // or #include "my_function.hpp"
int my_function() {
	return global_value; // return 42;
}
