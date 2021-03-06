/**
* @file include/llvmir2hll/semantics/semantics/libc_semantics/func_never_returns.h
* @brief Provides function funcNeverReturns() for LibcSemantics in the
*        semantics::libc namespace.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_SEMANTICS_SEMANTICS_LIBC_SEMANTICS_FUNC_NEVER_RETURNS_H
#define LLVMIR2HLL_SEMANTICS_SEMANTICS_LIBC_SEMANTICS_FUNC_NEVER_RETURNS_H

#include <string>

#include "llvmir2hll/support/maybe.h"

namespace llvmir2hll {
namespace semantics {
namespace libc {

Maybe<bool> funcNeverReturns(const std::string &funcName);

} // namespace libc
} // namespace semantics
} // namespace llvmir2hll

#endif
