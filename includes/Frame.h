#ifndef FRAME_H
#define FRAME_H

class Frame {
  public:
    Frame(int num);
    void occupy(int pageNumber);
    void release();
    bool checkOccuping() const;
    int getOccupingPage() const;
    int getFrameNumber() const;

  private:
    int frameNumber;
    int occupyingPage;
    bool isOccupied;
};
#endif // FRAME_H
