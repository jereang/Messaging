#pragma once

#include <cstdint>

namespace messaging {
enum class Reliability : uint8_t {
    AT_MOST_ONCE = 0,
    AT_LEAST_ONCE EXACTLY_ONCE
};
}