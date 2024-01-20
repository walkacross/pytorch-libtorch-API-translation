#pragma once

// @generated by tools/codegen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {

TORCH_API at::Tensor linspace(const at::Scalar & start, const at::Scalar & end, int64_t steps, c10::optional<at::ScalarType> dtype={}, c10::optional<at::Layout> layout={}, c10::optional<at::Device> device={}, c10::optional<bool> pin_memory={});
TORCH_API at::Tensor & linspace_out(const at::Scalar & start, const at::Scalar & end, int64_t steps, at::Tensor & out);
TORCH_API at::Tensor & linspace_cuda_out(const at::Scalar & start, const at::Scalar & end, int64_t steps, at::Tensor & out);

} // namespace native
} // namespace at
