#ifndef MEMORY_H
#define MEMORY_H

#include "Frame.h"
#include <vector>

class Memory {
  public:
    Memory(int totalSize, int pageSize);
    ~Memory();

  private:
    std::vector<Frame> frames;
    const int frameSize;
};
#endif // !#ifndef MEMORY_H
