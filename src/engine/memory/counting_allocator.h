//counting_allocator.h
#include "default_allocator.h"

namespace sdgm
{
  template <class T>
    class CountingAllocator : public DefaultAllocator;
}

template <class T>
class sdgm::CountingAllocator
{
 public:
  T* get(int count);
  void release(T*,int count);
  int getAllocationCount(); //number of allocations that have occured
  int getReleaseCount(); //number of releases that have occured
  int getOutStandingCount(); //allocaitons - releases}
  static int getTotalAllocationCount(); //allocations across instances
  static int getTotalReleaseCount(); //releases across instances
  static int getTotalOutstandingCount(); //allocations - releases across instances
};

