#pragma once

namespace My {
// [Func]
// - Ret([const] void*, Args...)
// - Ret(Impl::*)([const] void*, Args...)[const]
// [ID] vtable, TypeID, customed ID
template <typename Func>
class Visitor;
}  // namespace My

#include "details/Visitor.inl"
