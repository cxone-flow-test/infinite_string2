#include <malloc.h>
#include <string.h>
#include "infinite_str.h"


InfiniteString::InfiniteString() : m_size(0), m_buf(0)
{
}

InfiniteString::~InfiniteString()
{
}


InfiniteString& InfiniteString::operator+=(const char* rhs)
{
  if (m_buf == nullptr)
  {
    m_size = strlen(rhs);
    m_buf = (char*)calloc(sizeof(char), m_size + 1);
    strncpy(m_buf, rhs, m_size);
  }
  else
  {
    char* old_buf = m_buf;
    int old_size = m_size;

    m_size += strlen(rhs);
    m_buf = (char*)calloc(sizeof(char), m_size + 1);
    strncpy(m_buf, old_buf, old_size);
    strncpy(m_buf + old_size, rhs, m_size - old_size);
  }

  return *this;
}


int InfiniteString::size()
{
  return m_size;
}

const char* InfiniteString::c_str()
{
  return m_buf;
}
