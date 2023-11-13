#include "../includes/Frame.h"

Frame::Frame(int num) : frameNumber(num), occupyingPage(-1), isOccupied(false) {}

void Frame::occupy(int pageNumber) {
    occupyingPage = pageNumber;
    isOccupied = true;
}

void Frame::release() {
    isOccupied = false;
    occupyingPage = -1;
}

bool Frame::checkOccuping() const {
    return isOccupied;
}

int Frame::getOccupingPage() const {
    return occupyingPage;
}
