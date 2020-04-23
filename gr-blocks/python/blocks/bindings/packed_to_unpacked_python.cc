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

#include <gnuradio/blocks/packed_to_unpacked.h>

template <typename T>
void bind_packed_to_unpacked_template(py::module& m, const char* classname)
{
    using packed_to_unpacked = gr::blocks::packed_to_unpacked<T>;

    py::class_<packed_to_unpacked,
               gr::block,
               gr::basic_block,
               std::shared_ptr<packed_to_unpacked>>(m, classname)
        .def(py::init(&gr::blocks::packed_to_unpacked<T>::make),
             py::arg("bits_per_chunk"),
             py::arg("endianness"));
}

void bind_packed_to_unpacked(py::module& m)
{
    bind_packed_to_unpacked_template<std::uint8_t>(m, "packed_to_unpacked_bb");
    bind_packed_to_unpacked_template<std::int16_t>(m, "packed_to_unpacked_ss");
    bind_packed_to_unpacked_template<std::int32_t>(m, "packed_to_unpacked_ii");
}
