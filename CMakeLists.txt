cmake_minimum_required(VERSION 3.29)
project(c__proj)

set(CMAKE_CXX_STANDARD 14)

include_directories("archive/class exercises/exams")
include_directories("archive/class exercises/exams/final")
include_directories("archive/class exercises/oop/separateFilesForClasses")
include_directories(archive/codefromvideos/oct11)
include_directories(archive/codefromvideos/sept13)
include_directories(archive/codefromvideos/sept20)
include_directories(archive/codefromvideos/sept27)
include_directories("c++ general/errors")
include_directories(dsa/2Node)
include_directories(dsa/3List)

add_executable(c__proj
    "archive/class exercises/challenges/oop/challenge1.cpp"
    "archive/class exercises/challenges/oop/challenge2.cpp"
    "archive/class exercises/challenges/challenge.cpp"
    "archive/class exercises/challenges/challenge1.cpp"
    "archive/class exercises/challenges/challenge2.cpp"
    "archive/class exercises/challenges/challenge3_strings.cpp"
    "archive/class exercises/challenges/challenge4_vectors.cpp"
    "archive/class exercises/challenges/challenge4_vectors2.cpp"
    "archive/class exercises/challenges/challenge5_vectors.cpp"
    "archive/class exercises/challenges/challenge6_vectors.cpp"
    "archive/class exercises/challenges/challenge6_vectorsp2.cpp"
    "archive/class exercises/challenges/challenge6_vectorsp3.cpp"
    "archive/class exercises/challenges/challenge6_vectorsp4.cpp"
    "archive/class exercises/challenges/challenge7.cpp"
    "archive/class exercises/exams/final/car.cpp"
    "archive/class exercises/exams/final/car.h"
    "archive/class exercises/exams/final/q1_main.cpp"
    "archive/class exercises/exams/final/truck.cpp"
    "archive/class exercises/exams/final/truck.h"
    "archive/class exercises/exams/final/truck_main.cpp"
    "archive/class exercises/exams/exam1.cpp"
    "archive/class exercises/exams/exam1_p2.cpp"
    "archive/class exercises/exams/exam2.cpp"
    "archive/class exercises/exams/exam2.h"
    "archive/class exercises/exams/exam2_main.cpp"
    "archive/class exercises/oop/constructorOverloading/main.cpp"
    "archive/class exercises/oop/destructors/main.cpp"
    "archive/class exercises/oop/separateFilesForClasses/Item.cpp"
    "archive/class exercises/oop/separateFilesForClasses/Item.h"
    "archive/class exercises/oop/separateFilesForClasses/main.cpp"
    "archive/class exercises/oop/main.cpp"
    "archive/class exercises/oop/objects1.cpp"
    "archive/class exercises/pointers/main.cpp"
    "archive/class exercises/vectors/vectors.cpp"
    "archive/class exercises/vectors/vectors10.cpp"
    "archive/class exercises/vectors/vectors2.cpp"
    "archive/class exercises/vectors/vectors3.cpp"
    "archive/class exercises/vectors/vectors4.cpp"
    "archive/class exercises/vectors/vectors5.cpp"
    "archive/class exercises/vectors/vectors6.cpp"
    "archive/class exercises/vectors/vectors7.cpp"
    "archive/class exercises/vectors/vectors8.cpp"
    "archive/class exercises/vectors/vectors9.cpp"
    "archive/class exercises/workingwithfiles/intro.cpp"
    "archive/class exercises/workingwithfiles/readfromfile.cpp"
    "archive/class exercises/workingwithfiles/readingpdf.cpp"
    "archive/class exercises/ifelse1.cpp"
    "archive/class exercises/ifelse2.cpp"
    "archive/class exercises/stringcomparison.cpp"
    "archive/class exercises/strings.cpp"
    "archive/class exercises/strings2.cpp"
    "archive/class exercises/switch1.cpp"
    "archive/class exercises/switch2rockpaperscissors.cpp"
    "archive/class exercises/switch3greekletter.cpp"
    archive/codefromvideos/aug30sept1/loops_main.cpp
    archive/codefromvideos/aug30sept1/loops_multiply_main.cpp
    archive/codefromvideos/aug30sept1/main_hello.cpp
    archive/codefromvideos/aug30sept1/mine_loop.cpp
    archive/codefromvideos/aug30sept1/mine_loop_with_function.cpp
    archive/codefromvideos/aug30sept1/mine_loop_with_vector.cpp
    archive/codefromvideos/oct11/arrays.cpp
    archive/codefromvideos/oct11/arrays.h
    archive/codefromvideos/oct11/arrays_id.cpp
    archive/codefromvideos/oct11/arrays_id.h
    archive/codefromvideos/oct11/arrays_id_main.cpp
    archive/codefromvideos/oct11/arrays_main.cpp
    archive/codefromvideos/oct11/tarrays.h
    archive/codefromvideos/oct11/tarrays_main.cpp
    archive/codefromvideos/oct4/filestats_main.cpp
    archive/codefromvideos/oct4/loops2_main.cpp
    archive/codefromvideos/oct4/vectors_main.cpp
    archive/codefromvideos/sept13/cf1_main.cpp
    archive/codefromvideos/sept13/cf2_main.cpp
    archive/codefromvideos/sept13/cf3.cpp
    archive/codefromvideos/sept13/cf3.h
    archive/codefromvideos/sept13/cf3_main.cpp
    archive/codefromvideos/sept13/factorial_main.cpp
    archive/codefromvideos/sept13/factoriald_main.cpp
    archive/codefromvideos/sept13/looops_ascii_main.cpp
    archive/codefromvideos/sept13/someVarsHere.h
    archive/codefromvideos/sept13/testCustomHeader.cpp
    archive/codefromvideos/sept20/cf3.cpp
    archive/codefromvideos/sept20/cf3.h
    archive/codefromvideos/sept20/cf3_main.cpp
    archive/codefromvideos/sept20/cf4.h
    archive/codefromvideos/sept20/cf4_main.cpp
    archive/codefromvideos/sept20/loops_multiply_main.cpp
    archive/codefromvideos/sept20/prime_main.cpp
    archive/codefromvideos/sept20/primes_main.cpp
    archive/codefromvideos/sept20/primes_vector_main.cpp
    archive/codefromvideos/sept27/copy2files_main.cpp
    archive/codefromvideos/sept27/filecopy_main.cpp
    archive/codefromvideos/sept27/myswap.cpp
    archive/codefromvideos/sept27/myswap.h
    archive/codefromvideos/sept27/myswap_main.cpp
    archive/codefromvideos/sept27/myswapt.h
    archive/codefromvideos/sept27/myswapt_main.cpp
    "c++ general/errors/0.5_errors.cpp"
    "c++ general/errors/1_compiletimeerrors.cpp"
    "c++ general/errors/2_linktimeerrors.cpp"
    "c++ general/errors/3_runtimeerrors.cpp"
    "c++ general/errors/4_logicerrors.cpp"
    "c++ general/errors/func2.cpp"
    "c++ general/errors/func2.h"
    "c++ general/functions/functionsPlayground.cpp"
    "c++ general/objectLifeCycle/objectLifeCycle.cpp"
    "c++ general/basicoperations.cpp"
    "c++ general/parameterspassingmechs.cpp"
    dsa/1basics/2strings/operationsOnStrings.cpp
    dsa/1basics/2strings/processingStrings.cpp
    dsa/1basics/1basicds.cpp
    dsa/1basics/3array.cpp
    dsa/1basics/4abstractADT.cpp
    dsa/2Node/Node.cpp
    dsa/2Node/Node.h
    dsa/3List/ArrayBasedList.cpp
    dsa/3List/ArrayBasedList.h
    dsa/3List/LinkedList.h
    dsa/3List/LinkedListNode.h
    dsa/3List/main.cpp
    dsa/Containers/1arrays.cpp
    dsa/Containers/2vectors.cpp
    dsa/Containers/3sets.cpp
    dsa/Containers/4maps.cpp
    dsa/Containers/5graphs.cpp
    dsa/Containers/6trees.cpp
    dsa/problems/easy/addUpToZero.cpp
    dsa/problems/easy/centuryFromYear.cpp
    dsa/problems/easy/findRepeatedWord.cpp
    dsa/problems/easy/largestNumber.cpp
    dsa/problems/easy/lengthOfEachWord.cpp
    dsa/problems/easy/listOf2Items.cpp
    dsa/problems/easy/mapOfNums.cpp
    dsa/problems/easy/printEveryOtherItem.cpp
    dsa/problems/easy/printoutItemsInList.cpp
    dsa/problems/easy/shortestword.cpp
    dsa/problems/easy/tokenizeString.cpp
    project1-workingwithfiles/exercise1.cpp
    project1-workingwithfiles/main.cpp
    project3-securenotes/main.cpp
    project3-securenotes/snoteswithopenssl.cpp)
