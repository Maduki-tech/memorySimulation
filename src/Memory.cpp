#include "../includes/Memory.h"

Memory::Memory(int totalSize, int pageSize) : frameSize(totalSize / pageSize) {
    for (int i = 0; i < frameSize; i++) {
        frames.emplace_back(Frame(i));
    }
}
