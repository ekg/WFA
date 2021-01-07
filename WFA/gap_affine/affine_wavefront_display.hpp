/*
 *                             The MIT License
 *
 * Wavefront Alignments Algorithms
 * Copyright (c) 2017 by Santiago Marco-Sola  <santiagomsola@gmail.com>
 *
 * This file is part of Wavefront Alignments Algorithms.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * PROJECT: Wavefront Alignments Algorithms
 * AUTHOR(S): Santiago Marco-Sola <santiagomsola@gmail.com>
 * DESCRIPTION: WFA display functions
 */

#pragma once

/*
 * Includes
 */
#include "WFA/gap_affine/affine_table.hpp"
#include "WFA/gap_affine/affine_wavefront.hpp"
#include "WFA/utils/commons.hpp"

namespace wfa {

/*
 * Accessors
 */
void affine_wavefronts_set_edit_table(
    affine_wavefronts_t* const affine_wavefronts,
    const int pattern_length,
    const int text_length,
    const int k,
    const awf_offset_t offset,
    const int score);

/*
 * Display
 */
void affine_wavefronts_print_wavefront(
    FILE* const stream,
    affine_wavefronts_t* const affine_wavefronts,
    const int current_score);
void affine_wavefronts_print_wavefronts(
    FILE* const stream,
    affine_wavefronts_t* const affine_wavefronts,
    const int current_score);
void affine_wavefronts_print_wavefronts_pretty(
    FILE* const stream,
    affine_wavefronts_t* const affine_wavefronts,
    const int current_score);

/*
 * Debug
 */
void affine_wavefronts_debug_step(
    affine_wavefronts_t* const affine_wavefronts,
    const char* const pattern,
    const char* const text,
    const int score);

}

