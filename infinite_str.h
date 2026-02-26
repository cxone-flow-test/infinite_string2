#ifndef __INFINITE_STR_H__
#define __INFINITE_STR_H__

class InfiniteString
{
  private:
  int m_size;
  char* m_buf;

  public:
  
    InfiniteString();
    ~InfiniteString();
    int size();

    InfiniteString& operator+=(const char* rhs);

    const char* c_str();


};



#endif

