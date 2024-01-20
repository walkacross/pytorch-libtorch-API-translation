#pragma once

// @generated by tools/codegen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/hardtanh_backward_ops.h>

namespace at {


// aten::hardtanh_backward.grad_input(Tensor grad_output, Tensor self, Scalar min_val, Scalar max_val, *, Tensor(a!) grad_input) -> Tensor(a!)
TORCH_API inline at::Tensor & hardtanh_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val) {
    return at::_ops::hardtanh_backward_grad_input::call(grad_output, self, min_val, max_val, grad_input);
}

// aten::hardtanh_backward.grad_input(Tensor grad_output, Tensor self, Scalar min_val, Scalar max_val, *, Tensor(a!) grad_input) -> Tensor(a!)
TORCH_API inline at::Tensor & hardtanh_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val, at::Tensor & grad_input) {
    return at::_ops::hardtanh_backward_grad_input::call(grad_output, self, min_val, max_val, grad_input);
}

// aten::hardtanh_backward(Tensor grad_output, Tensor self, Scalar min_val, Scalar max_val) -> Tensor
TORCH_API inline at::Tensor hardtanh_backward(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val) {
    return at::_ops::hardtanh_backward::call(grad_output, self, min_val, max_val);
}

}
