#include "addon.h"

using v8::String;
using v8::FunctionTemplate;

using Nan::GetFunction;
using Nan::New;
using Nan::Set;

NAN_MODULE_INIT(init) {
  Set(target, New<String>("sdot").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(sdot)).ToLocalChecked());
  Set(target, New<String>("ddot").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(ddot)).ToLocalChecked());

  Set(target, New<String>("daxpy").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(daxpy)).ToLocalChecked());
  Set(target, New<String>("saxpy").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(saxpy)).ToLocalChecked());

  Set(target, New<String>("dscal").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(dscal)).ToLocalChecked());
  Set(target, New<String>("sscal").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(sscal)).ToLocalChecked());

  Set(target, New<String>("dcopy").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(dcopy)).ToLocalChecked());
  Set(target, New<String>("scopy").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(scopy)).ToLocalChecked());

  Set(target, New<String>("dswap").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(dswap)).ToLocalChecked());
  Set(target, New<String>("sswap").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(sswap)).ToLocalChecked());

  Set(target, New<String>("idamax").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(idamax)).ToLocalChecked());
  Set(target, New<String>("isamax").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(isamax)).ToLocalChecked());

  Set(target, New<String>("dasum").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(dasum)).ToLocalChecked());
  Set(target, New<String>("sasum").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(sasum)).ToLocalChecked());

  Set(target, New<String>("dnrm2").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(dnrm2)).ToLocalChecked());
  Set(target, New<String>("snrm2").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(snrm2)).ToLocalChecked());

  Set(target, New<String>("dgemm").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(dgemm)).ToLocalChecked());
  Set(target, New<String>("sgemm").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(sgemm)).ToLocalChecked());
}

NODE_MODULE(addon, init)
