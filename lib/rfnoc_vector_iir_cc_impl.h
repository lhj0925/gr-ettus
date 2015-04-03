/* -*- c++ -*- */
/* Copyright 2015 Ettus Research
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * gr-ettus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with gr-ettus; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_ETTUS_RFNOC_VECTOR_IIR_CC_IMPL_H
#define INCLUDED_ETTUS_RFNOC_VECTOR_IIR_CC_IMPL_H

#include <ettus/rfnoc_vector_iir_cc.h>
#include "rfnoc_block_impl.h"

namespace gr {
  namespace ettus {

    class rfnoc_vector_iir_cc_impl : public rfnoc_vector_iir_cc, public rfnoc_block_impl

    {
     public:
      rfnoc_vector_iir_cc_impl(int vlen, double alpha, double beta, const device3::sptr &dev, const int block_select, const int device_select);
      ~rfnoc_vector_iir_cc_impl();

      void set_vector_iir_alpha(const double alpha);
      void set_vector_iir_beta(const double beta);
    };

  } // namespace ettus
} // namespace gr

#endif /* INCLUDED_ETTUS_RFNOC_VECTOR_IIR_CC_IMPL_H */

