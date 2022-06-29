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

TORCH_API at::Tensor fft_fftn(const at::Tensor & self, c10::optional<at::IntArrayRef> s=c10::nullopt, c10::optional<at::IntArrayRef> dim=c10::nullopt, c10::optional<c10::string_view> norm=c10::nullopt);
TORCH_API at::Tensor & fft_fftn_out(const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<c10::string_view> norm, at::Tensor & out);

} // namespace native
} // namespace at
