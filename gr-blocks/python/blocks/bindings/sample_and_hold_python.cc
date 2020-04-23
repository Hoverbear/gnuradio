/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/sample_and_hold.h>

template <typename T>
void bind_sample_and_hold_template(py::module& m, const char* classname)
{
    using sample_and_hold = gr::blocks::sample_and_hold<T>;

    py::class_<sample_and_hold,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<sample_and_hold>>(m, classname)
        .def(py::init(&gr::blocks::sample_and_hold<T>::make));
}

void bind_sample_and_hold(py::module& m)
{
    bind_sample_and_hold_template<std::uint8_t>(m, "sample_and_hold_bb");
    bind_sample_and_hold_template<std::int16_t>(m, "sample_and_hold_ss");
    bind_sample_and_hold_template<std::int32_t>(m, "sample_and_hold_ii");
    bind_sample_and_hold_template<float>(m, "sample_and_hold_ff");
    // bind_sample_and_hold_template<gr_complex>(m,"sample_and_hold_cc");
}
