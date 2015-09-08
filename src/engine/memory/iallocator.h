//iallocator.h

namespace sdgm
{

};


template <class T>
class IAllocator<T>
{
 public:
  abstract T* get(int count);
  abstract void release(T*, int count);
}

