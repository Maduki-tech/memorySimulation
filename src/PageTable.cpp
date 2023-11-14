#include "PageTable.h"
#include <iostream>
#include <ostream>

void PageTable::mapPageToFrame(int pageNumber, int frameNumber) {
  table[pageNumber] = frameNumber;
}

int PageTable::getFrameNumber(int pageNumber) {
    if (table.find(pageNumber) != table.end()){
        return table[pageNumber];
    }

    return -1;
}

