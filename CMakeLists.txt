cmake_minimum_required(VERSION 3.17)
project(cpp_pool)

set(CMAKE_CXX_STANDARD 14)

include_directories(day00/ex01)

add_executable(cpp_pool
        day00/ex01/Contact.class.cpp
        day00/ex01/Contact.class.hpp
        day00/ex01/Contact.class.o
        day00/ex01/Field.class.cpp
        day00/ex01/Field.class.hpp
        day00/ex01/Field.class.o
        day00/ex01/my_aw_phonebook
        day00/ex01/myPhoneBook.class.cpp
        day00/ex01/myPhoneBook.class.hpp
        day00/ex01/myPhoneBook.class.o
        day00/ex01/phonebook.cpp
        day00/ex01/phonebook.o)
