# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HospitalManagementSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HospitalManagementSystem_autogen.dir\\ParseCache.txt"
  "HospitalManagementSystem_autogen"
  )
endif()
