example of using swig with go
=============================

This allows one to use a C++ header file containing a structure with std:string
fields in Go. You need to install go and swig for this to work.

`go build` will magically build the files necessary and typemap things
correctly using swig.
