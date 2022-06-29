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



#include <ATen/ops/normal_ops.h>

namespace at {


// aten::normal.Tensor_float_out(Tensor mean, float std=1, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_out(at::Tensor & out, const at::Tensor & mean, double std=1, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_Tensor_float_out::call(mean, std, generator, out);
}

// aten::normal.Tensor_float_out(Tensor mean, float std=1, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_outf(const at::Tensor & mean, double std, c10::optional<at::Generator> generator, at::Tensor & out) {
    return at::_ops::normal_Tensor_float_out::call(mean, std, generator, out);
}

// aten::normal.Tensor_float(Tensor mean, float std=1, *, Generator? generator=None) -> Tensor
TORCH_API inline at::Tensor normal(const at::Tensor & mean, double std=1, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_Tensor_float::call(mean, std, generator);
}

// aten::normal.float_Tensor_out(float mean, Tensor std, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_out(at::Tensor & out, double mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_float_Tensor_out::call(mean, std, generator, out);
}

// aten::normal.float_Tensor_out(float mean, Tensor std, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_outf(double mean, const at::Tensor & std, c10::optional<at::Generator> generator, at::Tensor & out) {
    return at::_ops::normal_float_Tensor_out::call(mean, std, generator, out);
}

// aten::normal.float_Tensor(float mean, Tensor std, *, Generator? generator=None) -> Tensor
TORCH_API inline at::Tensor normal(double mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_float_Tensor::call(mean, std, generator);
}

// aten::normal.Tensor_Tensor_out(Tensor mean, Tensor std, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_out(at::Tensor & out, const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_Tensor_Tensor_out::call(mean, std, generator, out);
}

// aten::normal.Tensor_Tensor_out(Tensor mean, Tensor std, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_outf(const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator, at::Tensor & out) {
    return at::_ops::normal_Tensor_Tensor_out::call(mean, std, generator, out);
}

// aten::normal.Tensor_Tensor(Tensor mean, Tensor std, *, Generator? generator=None) -> Tensor
TORCH_API inline at::Tensor normal(const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_Tensor_Tensor::call(mean, std, generator);
}

// aten::normal.float_float(float mean, float std, int[] size, *, Generator? generator=None, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor normal(double mean, double std, at::IntArrayRef size, c10::optional<at::Generator> generator=c10::nullopt, at::TensorOptions options={}) {
    return at::_ops::normal_float_float::call(mean, std, size, generator, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::normal.float_float(float mean, float std, int[] size, *, Generator? generator=None, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
TORCH_API inline at::Tensor normal(double mean, double std, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::normal_float_float::call(mean, std, size, generator, dtype, layout, device, pin_memory);
}

// aten::normal.float_float_out(float mean, float std, int[] size, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_out(at::Tensor & out, double mean, double std, at::IntArrayRef size, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::normal_float_float_out::call(mean, std, size, generator, out);
}

// aten::normal.float_float_out(float mean, float std, int[] size, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & normal_outf(double mean, double std, at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
    return at::_ops::normal_float_float_out::call(mean, std, size, generator, out);
}

}
