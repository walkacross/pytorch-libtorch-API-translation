#pragma once

// @generated by tools/codegen/gen.py from Operator.h

#include <c10/core/QScheme.h>
#include <tuple>
#include <vector>


// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
namespace c10 {

template<typename T>
class optional;
template<typename T>
class List;
class Stream;
class Scalar;
struct Storage;
struct TensorOptions;

}

namespace at {

class Tensor;
struct Dimname;
struct Generator;
using TensorList = c10::ArrayRef<Tensor>;
using DimnameList = c10::ArrayRef<Dimname>;
using c10::Stream;
using c10::Storage;
using c10::QScheme;
using c10::Scalar;
using c10::TensorOptions;

namespace _ops {


struct TORCH_API slice_scatter {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, int64_t, c10::optional<int64_t>, c10::optional<int64_t>, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::slice_scatter")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "slice_scatter(Tensor self, Tensor src, int dim=0, int? start=None, int? end=None, int step=1) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::optional<int64_t> start, c10::optional<int64_t> end, int64_t step);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::optional<int64_t> start, c10::optional<int64_t> end, int64_t step);
};

}} // namespace at::_ops
