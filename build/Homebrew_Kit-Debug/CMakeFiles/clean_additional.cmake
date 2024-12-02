# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QTrip_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QTrip_autogen.dir/ParseCache.txt"
  "QTrip_autogen"
  )
endif()
