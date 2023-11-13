#include "../includes/Page.h"

Page::Page(int number) : pageNumber(number) { }

int Page::getPageNumber() const {
  return pageNumber;
}

