#include "default_allocator.h"

template <class T>
class DefaultAllocator: public IAllocator
{
 public: 
  T* get(int count)
  {
    return new T(); 
  }

  void release(T* toRelease, int count)
  {
    delete toRelease;
  }
}
