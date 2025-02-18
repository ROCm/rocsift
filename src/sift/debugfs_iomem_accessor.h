/* Copyright © 2020 Advanced Micro Devices, Inc. All rights reserved */

#ifndef _SIFT_DEBUGFS_IOMEM_ACCESSOR_H_
#define _SIFT_DEBUGFS_IOMEM_ACCESSOR_H_

#include <cstdint>

#if __has_include(<filesystem>)
#include <filesystem>
namespace std_fs = std::filesystem;
#elif __has_include(<experimental/filesystem>)
#include <experimental/filesystem>
namespace std_fs = std::experimental::filesystem;
#else
error "Missing the <filesystem> header."
#endif

#include "fdowner.h"

namespace sift
{

// IOMEM accessor requires a GPU bus address to read/write system memory bound to the GPU

class DebugFSIOMEMAccessor
{
 private:
  FDOwner fd_;

 public:
  DebugFSIOMEMAccessor(std_fs::path iomem);
  ssize_t Read(uint64_t address, void *buffer, size_t count);
  ssize_t Write(uint64_t address, const void *buffer, size_t count);
};

}  // namespace sift

#endif  // _SIFT_DEBUGFS_IOMEM_ACCESSOR_H_
