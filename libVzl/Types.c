#include "Types.h"
#include <libVzl/Types.h>

vzl_typeResultInt vzl_wrapValueInt(bool const success, int const value,
                                     vzl_typeError const error) {
  vzl_typeResultInt r = {.success = success};
  if (success) {
    r.value = value;
  } else {
    r.error = error;
  }
  return r;
}
vzl_typeResultChar vzl_wrapValueChar(bool const success, char const value,
                                       vzl_typeError const error) {
  vzl_typeResultChar r = {.success = success};
  if (success) {
    r.value = value;
  } else {
    r.error = error;
  }
  return r;
}
vzl_typeResultBool vzl_wrapValueBool(bool const success, bool const value,
                                       vzl_typeError const error) {
  vzl_typeResultBool r = {.success = success};
  if (success) {
    r.value = value;
  } else {
    r.error = error;
  }
  return r;
}

int vzl_unwrapValueInt(vzl_typeResultInt const *const result) {
  return result->value;
}
char vzl_unwrapValueChar(vzl_typeResultChar const *const result) {
  return result->value;
}
bool vzl_unwrapValueBool(vzl_typeResultBool const *const result) {
  return result->value;
}

bool vzl_unwrapSuccessInt(vzl_typeResultInt const *const result) {
  return result->success;
}
bool vzl_unwrapSuccessChar(vzl_typeResultChar const *const result) {
  return result->success;
}
bool vzl_unwrapSuccessBool(vzl_typeResultBool const *const result) {
  return result->success;
}

vzl_typeError vzl_unwrapErrorInt(vzl_typeResultInt const *const result) {
  return result->error;
}
vzl_typeError vzl_unwrapErrorChar(vzl_typeResultChar const *const result) {
  return result->error;
}
vzl_typeError vzl_unwrapErrorBool(vzl_typeResultBool const *const result) {
  return result->error;
}
