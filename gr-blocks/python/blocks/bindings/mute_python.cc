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

#include <gnuradio/blocks/mute.h>

template <typename T>
void bind_mute_template(py::module& m, const char* classname)
{
    using mute_blk = gr::blocks::mute_blk<T>;

    py::class_<mute_blk,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<mute_blk>>(m, classname)
        .def(py::init(&gr::blocks::mute_blk<T>::make), py::arg("mute") = false)
        .def("mute", &mute_blk::mute)
        .def("set_mute", &mute_blk::set_mute, py::arg("mute") = false);
}

void bind_mute(py::module& m)
{
    bind_mute_template<std::int16_t>(m, "mute_ss");
    bind_mute_template<std::int32_t>(m, "mute_ii");
    bind_mute_template<float>(m, "mute_ff");
    bind_mute_template<gr_complex>(m, "mute_cc");
}
