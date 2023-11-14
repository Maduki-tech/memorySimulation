#ifndef MEMORY_H
#define MEMORY_H

#include "Frame.h"
#include "Page.h"
#include "PageTable.h"
#include <map>
#include <vector>

class Memory {
  public:
    Memory(std::vector<Frame> frames, std::vector<Page> pages,
           PageTable &pageTable);
    ~Memory();
    std::vector<Frame> getFrames() const;
    void accessPage(int pageNumber);
  void replacePage(int pageNumber, int frameNumber);

  private:
    std::vector<Frame> frames;
    std::vector<Page> pages;
    PageTable &table;

  private:
    void mapPageToFrame(int pageNumber, int frameNumber);
};
#endif // !#ifndef MEMORY_H
