#pragma once
#ifdef RECENG_EXPORTS
#define RECENG_API __declspec(dllexport)
#else
#define RECENG_API __declspec(dllimport)
#endif
extern "C++" struct RECENG_API Matrix;
extern "C++" RECENG_API Matrix transpose(Matrix inMatrix);
extern "C++" RECENG_API Matrix dotProduct(Matrix inMatrix, int **inVector);