//iallocator.h

namespace sdgm
{
  template <class T>
  class IAllocator<T>;
}


template <class T>
class sdgm::IAllocator<T>
{
 public:
  virtual T* get(int count);
  virtual void release(T*, int count);
};
