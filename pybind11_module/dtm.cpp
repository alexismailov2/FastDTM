#include <dtm.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

PYBIND11_MODULE(dtm, m) {
  pybind11::class_<DTM>(m, "DTM")
    .def(pybind11::init<const vector<vector<vector<size_t>>>&, const vector<string>&,
                        size_t, float, float, float, float, float, float>())
    .def("initialize",        &DTM::initialize)
    .def("estimate",          &DTM::estimate)
    .def("save_data",         &DTM::save_data)
    .def("diagnosis",         &DTM::diagnosis)
    .def("build_alias_table", &DTM::build_alias_table);
}
