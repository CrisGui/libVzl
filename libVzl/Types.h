#pragma once
#ifndef LIBVZL_TYPES_H
#include <stdbool.h>

#define _vzl_defineResult(T, NAME)                                             \
  /*NAME*/                                                                     \
  typedef struct {                                                             \
    bool success;                                                              \
    union {                                                                    \
      T value;                                                                 \
      vzl_typeError error;                                                     \
    };                                                                         \
  } NAME

/*#define vzl_wrapValue(T, SUCCESS, VALUE, ERROR) \*/
/*  _Generic((T, SUCCESS, VALUE, ERROR), \*/
/*      int: _vzl_wrapValueInt(SUCCESS, VALUE, ERROR), \*/
/*      char: _vzl_wrapValueChar(SUCCESS, VALUE, ERROR), \*/
/*      bool: _vzl_wrapValueBool(SUCCESS, VALUE, ERROR))(T, SUCCESS, VALUE,
 * ERROR)*/
/**/
/*#define vzl_unwrapValue(T, RESULT_REF) \*/
/*  _Generic((T), \*/
/*      int: _vzl_unwrapValueInt(), \*/
/*      char: _vzl_unwrapValueChar(), \*/
/*      bool: _vzl_unwrapValueBool())(T)*/
/**/
/*#define vzl_unwrapSuccess(T, RESULT_REF) \*/
/*  _Generic((T), \*/
/*      int: _vzl_unwrapSuccessInt(RESULT_REF), \*/
/*      char: _vzl_unwrapSuccessChar(RESULT_REF), \*/
/*      bool: _vzl_unwrapSuccessBool(RESULT_REF))(T)*/
/**/
/*#define vzl_unwrapError(T, RESULT_REF) \*/
/*  _Generic((T), \*/
/*      int: _vzl_unwrapErrorInt(RESULT_REF), \*/
/*      char: _vzl_unwrapErrorChar(RESULT_REF), \*/
/*      bool: _vzl_unwrapErrorBool(RESULT_REF))(T)*/

/*#define vzl_typeResult(T) \*/
/*  _Generic((T), \*/
/*      int: _vzl_typeResultInt, \*/
/*      char: _vzl_typeResultChar, \*/
/*      bool: _vzl_typeResultBool)*/

typedef enum {
  vzl_errorNull,
  vzl_errorValueNotFound,

  vzl_errorInvalidIndex,
  vzl_errorInvalidType,
  vzl_errorInvalidValue,
} vzl_typeError;

_vzl_defineResult(int, vzl_typeResultInt);
_vzl_defineResult(char, vzl_typeResultChar);
_vzl_defineResult(bool, vzl_typeResultBool);

vzl_typeResultInt vzl_wrapValueInt(bool const success, int const value,
                                   vzl_typeError const error);
vzl_typeResultChar vzl_wrapValueChar(bool const success, char const value,
                                     vzl_typeError const error);
vzl_typeResultBool vzl_wrapValueBool(bool const success, bool const value,
                                     vzl_typeError const error);

int vzl_unwrapValueInt(vzl_typeResultInt const *const result);
char vzl_unwrapValueChar(vzl_typeResultChar const *const result);
bool vzl_unwrapValueBool(vzl_typeResultBool const *const result);

bool vzl_unwrapSuccessInt(vzl_typeResultInt const *const result);
bool vzl_unwrapSuccessChar(vzl_typeResultChar const *const result);
bool vzl_unwrapSuccessBool(vzl_typeResultBool const *const result);

vzl_typeError vzl_unwrapErrorInt(vzl_typeResultInt const *const result);
vzl_typeError vzl_unwrapErrorChar(vzl_typeResultChar const *const result);
vzl_typeError vzl_unwrapErrorBool(vzl_typeResultBool const *const result);
#endif // !LIBVZL_TYPES_H
