add_executable(cw_10_tests "employee_tests.cpp")
target_link_libraries(cw_10_tests cw_10_library)
add_test(NAME cw_10_tests COMMAND cw_10_tests -s)