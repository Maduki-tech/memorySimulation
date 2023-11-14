#ifndef PAGE_TABLE_H
#define PAGE_TABLE_H
#include <unordered_map>

class PageTable {
  public:
    void mapPageToFrame(int pageNumber, int frameNumber);
    int getFrameNumber(int pageNumber);

  private:
    std::unordered_map<int, int> table;
};

#endif // !DEBUG
