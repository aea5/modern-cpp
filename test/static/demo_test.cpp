#include <fenv.h>
#include <iostream>
#include <type_traits>

namespace demotest
{
// some dummy static assert that is always true
static_assert(std::is_same_v<int, int>, "int is not int");

} // namespace demotest
