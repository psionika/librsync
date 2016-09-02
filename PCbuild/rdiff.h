#pragma once
#ifndef __RDIFF_H__
#define __RDIFF_H__

#ifdef BUILDDLL
#define DLLEXPORT __declspec(dllexport)

DLLEXPORT rs_result rdiff_sig(const wchar_t *baseFile, const wchar_t *sigFile);
DLLEXPORT rs_result rdiff_delta(const wchar_t *sigFile, const wchar_t *newFile, const wchar_t *deltaFile);
DLLEXPORT rs_result rdiff_patch(const wchar_t *baseFile, const wchar_t *deltaFile, const wchar_t *newFile);

#endif

#endif