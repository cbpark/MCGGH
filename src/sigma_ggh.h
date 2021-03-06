/*
 *  Copyright (C) 2017 Chan Beom Park <cbpark@gmail.com>
 *
 *  This file is part of mcggh, which is released under the GNU General
 *  Public License. See file LICENSE in the top directory of this project or
 *  go to <http://www.gnu.org/licenses/> for full license details.
 */

#ifndef SRC_SIGMA_GGH_H_
#define SRC_SIGMA_GGH_H_

#include <memory>
#include "LHAPDF/LHAPDF.h"
#include "gluons.h"
#include "utils.h"

namespace mcggh {
/** The parton-level production cross section of the Higgs boson
 *  through the gluon fusion process at leading order.
 *
 *  See Eq.(3.55) in arXiv:hep-ph/0503172
 */
double sigmaLO(const double s, const double mh, const double gammah,
               const double alphas);

double dsigma(std::shared_ptr<LHAPDF::PDF> pdf, const InitGluon &glu,
              const double alphas, const double mu, const double mh,
              const double gammah);
}  // namespace mcggh

#endif  // SRC_SIGMA_GGH_H_
