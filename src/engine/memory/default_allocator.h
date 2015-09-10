//default_allocator.h
#include "iallocator.cpp"

namespace sdgm
{
  template <class T>
  class DefaultAllocator<T>: public IAllocator<T>;
}

template <class T>
class sdgm::DefaultAllocator<T>
{
 public:
  T* get(int count);
  void release(T*, int count);
};

