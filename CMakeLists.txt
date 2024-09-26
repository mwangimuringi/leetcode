cmake_minimum_required(VERSION 3.29)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(problems)

add_executable(leetcode
    problems/two-sum.cpp
    .gitignore
    README.md
        problems/longest-substring.cpp
        problems/merge-two-sorted-list.cpp
        problems/removeDuplicates.cpp
        problems/remove-element.cpp
)
