#ifndef PAGE_H
#define PAGE_H

class Page {
  public:
    Page(int number);
    ~Page();
    int getPageNumber() const;

  private:
    int pageNumber;
};

#endif // PAGE_H
