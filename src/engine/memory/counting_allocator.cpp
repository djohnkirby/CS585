#include "counting_allocator.h"

template <class T>
class CountingAllocator : public DefaultAllocator
{
 public:
  int getAllocationCount(); //number of allocations that have occured
  int getReleaseCount(); //number of releases that have occured
  int getOutStandingCount(); //allocaitons - releases
}
