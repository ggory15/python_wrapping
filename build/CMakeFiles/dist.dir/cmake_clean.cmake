file(REMOVE_RECURSE
  "doc/python_wrapping.doxytag"
  "doc/doxygen.log"
  "doc/doxygen-html"
  "CMakeFiles/dist"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/dist.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
