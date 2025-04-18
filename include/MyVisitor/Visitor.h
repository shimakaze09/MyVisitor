#pragma once

namespace Smkz {
// [Func]
// - Ret([const] void*, Args...)
// - Ret(Impl::*)([const] void*, Args...)[const]
// [ID] vtable, TypeID, customed ID
template <typename Func>
class Visitor;
}  // namespace Smkz

#include "details/Visitor.inl"
