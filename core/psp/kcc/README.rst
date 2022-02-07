PC Linux, kcc (Runtime Verification)
====================================
This is a variation of the PC Linux build that uses kcc instead of gcc.
kcc finds places in tests that depend on undefined behavior in C.
It will probably be too slow to run the whole sitl, it is designed
just to run unit tests.   

Directory "inc" has header files that override the standard ones,
and are used only when compiling with kcc.

(The following is not yet true in this version)
kcc only handles C, not C++.   There is a script kc++ that pretends to
be a C++ compiler but actually just calls g++ to compile C++ programs,
but then calls kld to link them instead of ld.   This allows kcc to
check all C programs, even if they are called by C++ or call C++, but
it doesn't check the C++ programs.
