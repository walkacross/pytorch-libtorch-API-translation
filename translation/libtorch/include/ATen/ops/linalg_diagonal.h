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



#include <ATen/ops/linalg_diagonal_ops.h>

namespace at {


// aten::linalg_diagonal(Tensor(a) A, *, int offset=0, int dim1=-2, int dim2=-1) -> Tensor(a)
TORCH_API inline at::Tensor linalg_diagonal(const at::Tensor & A, int64_t offset=0, int64_t dim1=-2, int64_t dim2=-1) {
    return at::_ops::linalg_diagonal::call(A, offset, dim1, dim2);
}

}