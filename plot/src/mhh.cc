/*
 *  Copyright (C) 2017 Chan Beom Park <cbpark@gmail.com>
 *
 *  This file is part of MCGGH, which is released under the GNU General
 *  Public License. See file LICENSE in the top directory of this project or
 *  go to <http://www.gnu.org/licenses/> for full license details.
 */

#include <fstream>
#include <iostream>
#include <memory>
#include "TCanvas.h"
#include "common.h"

const char appname[] = "mhh";

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << appname << " <input> <output>\n";
        return 1;
    }

    std::ifstream fin(argv[1]);
    if (!fin.good()) { return failedToRead(appname, argv[1]); }

    // Create the canvas.
    auto canvas = std::make_unique<TCanvas>("c", "", 0, 0, 600, 600);
    canvas->SetTicks();

    // ...

    canvas->SaveAs(argv[2]);
}