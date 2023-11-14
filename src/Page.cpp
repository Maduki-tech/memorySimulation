#include "Page.h"

Page::Page(int number) : pageNumber(number) { }
Page::~Page() { }

int Page::getPageNumber() const {
  return pageNumber;
}



