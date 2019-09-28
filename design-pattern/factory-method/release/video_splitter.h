#ifndef FACTORY_METHOD_RELEASE_VIDEO_SPLITTER_H
#define FACTORY_METHOD_RELEASE_VIDEO_SPLITTER_H

#include <iostream>
#include "splitter_base.h"

namespace release {
class VideoSplitter : public SplitterBase {
 public:
  VideoSplitter(const std::string file_path, const int file_num)
      : SplitterBase(file_path, file_num) {}
  void Split() override { std::cout << "VideoSplitter::Split\n"; }
};
}  // namespace release

#endif