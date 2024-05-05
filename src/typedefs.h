#ifndef TYPEDEFS_H_
#define TYPEDEFS_H_

#include <memory>
#include <stdlib.h>
#include <stdint.h>
#include <variant>

using scriptenv = std::shared_ptr<int>;
using observer_handler = std::shared_ptr<int>;

/// @brief dynamic integer type (64 bit signed integer)
using integer_t = int64_t;
/// @brief dynamic floating-point type (64 bit floating point)
using number_t = double;
/// @brief dynamic numeric types union (integer and floating-point)
using number_u = std::variant<integer_t, number_t>;

using uint = unsigned int;

/// @brief use for bytes arrays
using ubyte = uint8_t;

// content indices
using itemid_t = uint32_t;
using blockid_t = uint16_t;

using itemcount_t = uint32_t;
using blockstate_t = uint16_t;
using light_t = uint16_t;

#endif // TYPEDEFS_H_
