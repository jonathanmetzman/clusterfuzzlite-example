#include "my_api.h"
#include <fuzzer/FuzzedDataProvider.h>


extern "C" void ExploreMeFuzzTest(const uint8_t *data, size_t size) {

  FuzzedDataProvider fuzzed_data(data, size);
  int a = fuzzed_data.ConsumeIntegral<int>();
  int b = fuzzed_data.ConsumeIntegral<int>();
  std::string c = fuzzed_data.ConsumeRandomLengthString();

  exploreMe(a, b, c);
}