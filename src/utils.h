/*
 *  Copyright (C) 2017 Chan Beom Park <cbpark@gmail.com>
 *
 *  This file is part of mcggh, which is released under the GNU General
 *  Public License. See file LICENSE in the top directory of this project or
 *  go to <http://www.gnu.org/licenses/> for full license details.
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

#include <iostream>
#include "constants.h"

namespace mcggh {
inline void printProgress(const unsigned int i, const int N) {
    std::cout << "progress: " << i * 100.0 / N << "%\r" << std::flush;
}

double getRandom();

inline double costh(const double delta) { return -1.0 + getRandom() * delta; }
}  // namespace mcggh

#endif  // SRC_UTILS_H_
