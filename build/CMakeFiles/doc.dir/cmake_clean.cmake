file(REMOVE_RECURSE
  "doc/python_wrapping.doxytag"
  "doc/doxygen.log"
  "doc/doxygen-html"
  "CMakeFiles/doc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/doc.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
