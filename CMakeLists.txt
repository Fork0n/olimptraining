cmake_minimum_required(VERSION 4.0)
project(olimptraining)

set(CMAKE_CXX_STANDARD 20)

add_executable(fib fib.cpp)

add_executable(check check.cpp)

add_executable(numerator numerator.cpp)

add_executable(sum sum.cpp)

add_executable(info info.cpp)

add_executable(oddsoneout oddsoneout.cpp)

add_executable(badisgood badisgood.cpp)

add_executable(longest longest.cpp)

add_executable(reverse reverse.cpp)

add_executable(grades grades.cpp)

add_executable(merge merge.cpp)

add_executable(cleaner cleaner.cpp)

add_executable(count count.cpp)

add_executable(muntele ./mun-ex/muntele.cpp)

add_executable(cadoul ./mun-ex/cadoul.cpp)

add_executable(luni ./mun-ex/luni.cpp)

add_executable(expresii ./mun-ex/expresii.cpp)

add_executable(circuite ./mun-ex/circuite.cpp)

add_executable(energie ./mun-ex/energie.cpp)

add_executable(roman ./mun-ex/roman.cpp)

add_executable(allp allp.cpp)

add_executable(cuvintele offex/cuvinte.cpp)

add_executable(piese offex/piese.cpp)
