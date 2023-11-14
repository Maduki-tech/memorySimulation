#include "Memory.h"
#include <iostream>
#include <ostream>

Memory::Memory(std::vector<Frame> frames, std::vector<Page> pages,
               PageTable &pageTable)
    : frames(frames), pages(pages), table(pageTable) {
    int minSize = std::min(frames.size(), pages.size());
    for (int i = 0; i < minSize; i++) {
        mapPageToFrame(pages[i].getPageNumber(), frames[i].getFrameNumber());
    }
}

Memory::~Memory() {}

std::vector<Frame> Memory::getFrames() const { return frames; }

void Memory::mapPageToFrame(int pageNumber, int frameNumber) {
    table.mapPageToFrame(pageNumber, frameNumber);
}

void Memory::accessPage(int pageNumber) {
    int frameNumber = table.getFrameNumber(pageNumber);
    if (frameNumber == -1) {
        std::cout << "Page fault: Page " << pageNumber << " is not in memory"
                  << std::endl;
    } else {
        std::cout << "Page " << pageNumber << " is in frame " << frameNumber
                  << std::endl;
    }
}

void Memory::replacePage(int activePage, int newPage) {
    int activeFrame = table.getFrameNumber(activePage);
    if (activeFrame == -1) {
        std::cout << "Page fault: Page " << activePage << " is not in memory"
                  << std::endl;
        return;
    }
    // remove active page from frame
    table.mapPageToFrame(activePage, -1);
    table.mapPageToFrame(newPage, activeFrame);

}
