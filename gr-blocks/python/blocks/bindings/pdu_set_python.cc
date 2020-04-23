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

#include <gnuradio/blocks/pdu_set.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_set_pydoc.h>

void bind_pdu_set(py::module& m)
{

    using pdu_set = ::gr::blocks::pdu_set;


    py::class_<pdu_set, gr::block, gr::basic_block, std::shared_ptr<pdu_set>>(
        m, "pdu_set", D(pdu_set))

        .def(py::init(&pdu_set::make), py::arg("k"), py::arg("v"), D(pdu_set, make))


        .def("set_key", &pdu_set::set_key, py::arg("key"), D(pdu_set, set_key))


        .def("set_val", &pdu_set::set_val, py::arg("val"), D(pdu_set, set_val))

        ;
}
