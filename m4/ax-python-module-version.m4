AC_DEFUN([AX_PYTHON_MODULE_VERSION], [
    AX_PYTHON_MODULE([$1], [required])
    AC_MSG_CHECKING([for version $2 or higher of $1])
    $PYTHON -c "import sys, $1; from distutils.version import StrictVersion; sys.exit(0 if StrictVersion($1.__version__) >= StrictVersion('$2') else 1)" 2> /dev/null
    AS_IF([test $? -eq 0], [], [
        AC_MSG_RESULT([no])
        AC_MSG_ERROR([You need at least version $2 of the $1 Python module.])
    ])
    AC_MSG_RESULT([yes])
])
