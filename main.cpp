#include "Frame.h"
#include "Memory.h"
#include "Page.h"
#include "PageTable.h"
#include <iostream>

const int NUM_PAGES = 10;
const int NUM_FRAMES = 5;

int main(int argc, char *argv[])

{
    std::vector<Page> pages;
    for (int i = 0; i < NUM_PAGES; i++) {
        pages.push_back(Page(i));
    }

    std::vector<Frame> frames;
    for (int i = 0; i < NUM_FRAMES; i++) {
        frames.push_back(Frame(i));
    }

    PageTable pageTable;

    Memory memory(frames, pages, pageTable);

    for (int i = 0; i < NUM_PAGES; i++) {
        std::cout << "Page " << i << " is mapped to frame "
                  << pageTable.getFrameNumber(i) << std::endl;
    }

    memory.accessPage(0);
    memory.accessPage(7);

    std::cout << "Going to remove page 0 in frame and replace with page 7"
              << std::endl;


    memory.replacePage(0, 7);
    for (int i = 0; i < NUM_PAGES; i++) {
        std::cout << "Page " << i << " is mapped to frame "
                  << pageTable.getFrameNumber(i) << std::endl;
    }


    return 0;
}
