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



#include <ATen/ops/_add_relu_ops.h>

namespace at {


// aten::_add_relu.Tensor(Tensor self, Tensor other, *, Scalar alpha=1) -> Tensor
TORCH_API inline at::Tensor _add_relu(const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha=1) {
    return at::_ops::_add_relu_Tensor::call(self, other, alpha);
}

// aten::_add_relu_.Tensor(Tensor(a!) self, Tensor other, *, Scalar alpha=1) -> Tensor(a!)
TORCH_API inline at::Tensor & _add_relu_(at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha=1) {
    return at::_ops::_add_relu__Tensor::call(self, other, alpha);
}

// aten::_add_relu.out(Tensor self, Tensor other, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & _add_relu_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha=1) {
    return at::_ops::_add_relu_out::call(self, other, alpha, out);
}

// aten::_add_relu.out(Tensor self, Tensor other, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & _add_relu_outf(const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha, at::Tensor & out) {
    return at::_ops::_add_relu_out::call(self, other, alpha, out);
}

// aten::_add_relu.Scalar(Tensor self, Scalar other, Scalar alpha=1) -> Tensor
TORCH_API inline at::Tensor _add_relu(const at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha=1) {
    return at::_ops::_add_relu_Scalar::call(self, other, alpha);
}

// aten::_add_relu_.Scalar(Tensor(a!) self, Scalar other, Scalar alpha=1) -> Tensor(a!)
TORCH_API inline at::Tensor & _add_relu_(at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha=1) {
    return at::_ops::_add_relu__Scalar::call(self, other, alpha);
}

}