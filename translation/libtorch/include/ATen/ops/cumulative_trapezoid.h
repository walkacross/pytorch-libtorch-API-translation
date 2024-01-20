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



#include <ATen/ops/cumulative_trapezoid_ops.h>

namespace at {


// aten::cumulative_trapezoid.x(Tensor y, Tensor x, *, int dim=-1) -> Tensor
TORCH_API inline at::Tensor cumulative_trapezoid(const at::Tensor & y, const at::Tensor & x, int64_t dim=-1) {
    return at::_ops::cumulative_trapezoid_x::call(y, x, dim);
}

// aten::cumulative_trapezoid.dx(Tensor y, *, Scalar dx=1, int dim=-1) -> Tensor
TORCH_API inline at::Tensor cumulative_trapezoid(const at::Tensor & y, const at::Scalar & dx=1, int64_t dim=-1) {
    return at::_ops::cumulative_trapezoid_dx::call(y, dx, dim);
}

}
