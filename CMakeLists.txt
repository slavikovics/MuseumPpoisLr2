cmake_minimum_required(VERSION 3.10)

project(MuseumPpoisLr2 VERSION 1.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    MuseumPpoisLr2/BankAccount.cpp
    MuseumPpoisLr2/BuyableItem.cpp
    MuseumPpoisLr2/Cashier.cpp
    MuseumPpoisLr2/Cleaner.cpp
    MuseumPpoisLr2/Employee.cpp
    MuseumPpoisLr2/EmployeesController.cpp
    MuseumPpoisLr2/Exhibit.cpp
    MuseumPpoisLr2/ExhibitsController.cpp
    MuseumPpoisLr2/Guard.cpp
    MuseumPpoisLr2/Guide.cpp
    MuseumPpoisLr2/IdNotAcceptableException.cpp
    MuseumPpoisLr2/Museum.cpp
    MuseumPpoisLr2/Person.cpp
    MuseumPpoisLr2/PersonNotFoundException.cpp
    MuseumPpoisLr2/Visitor.cpp
    MuseumPpoisLr2/VisitorsController.cpp
    )

set(HEADERS
    MuseumPpoisLr2/BankAccount.h
    MuseumPpoisLr2/BuyableItem.h
    MuseumPpoisLr2/Cashier.h
    MuseumPpoisLr2/Cleaner.h
    MuseumPpoisLr2/Employee.h
    MuseumPpoisLr2/EmployeesController.h
    MuseumPpoisLr2/Exhibit.h
    MuseumPpoisLr2/ExhibitsController.h
    MuseumPpoisLr2/Guard.h
    MuseumPpoisLr2/Guide.h
    MuseumPpoisLr2/IController.h
    MuseumPpoisLr2/IMuseumItem.h
    MuseumPpoisLr2/IdNotAcceptableException.h
    MuseumPpoisLr2/Museum.h
    MuseumPpoisLr2/Person.h
    MuseumPpoisLr2/PersonNotFoundException.h
    MuseumPpoisLr2/Visitor.h
    MuseumPpoisLr2/VisitorsController.h
    )

add_library(MuseumPpoisLr2 ${SOURCES} ${HEADERS})
target_include_directories(MuseumPpoisLr2 PRIVATE MuseumPpoisLr2)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
add_compile_options(--coverage)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")

enable_testing()

add_executable(BankAccountTest MuseumTest/BankAccountTest.cpp)
target_link_libraries(BankAccountTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME BankAccountTest COMMAND BankAccountTest)

add_executable(EmployeesControllerTest MuseumTest/EmployeesControllerTest.cpp)
target_link_libraries(EmployeesControllerTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME EmployeesControllerTest COMMAND EmployeesControllerTest)

add_executable(EmployeesTest MuseumTest/EmployeesTest.cpp)
target_link_libraries(EmployeesTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME EmployeesTest COMMAND EmployeesTest)

add_executable(ExhibitControllerTest MuseumTest/ExhibitControllerTest.cpp)
target_link_libraries(ExhibitControllerTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME ExhibitControllerTest COMMAND ExhibitControllerTest)

add_executable(ExhibitTest MuseumTest/ExhibitTest.cpp)
target_link_libraries(ExhibitTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME ExhibitTest COMMAND ExhibitTest)

add_executable(PersonTest MuseumTest/PersonTest.cpp)
target_link_libraries(PersonTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME PersonTest COMMAND PersonTest)

add_executable(VisitorTest MuseumTest/VisitorTest.cpp)
target_link_libraries(VisitorTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME VisitorTest COMMAND VisitorTest)

add_executable(VisitorsControllerTest MuseumTest/VisitorsControllerTest.cpp)
target_link_libraries(VisitorsControllerTest PRIVATE MuseumPpoisLr2 ${GTEST_LIBRARIES} pthread)
add_test(NAME VisitorsControllerTest COMMAND VisitorsControllerTest)
