file(REMOVE_RECURSE
  "doc/python_wrapping.doxytag"
  "doc/doxygen.log"
  "doc/doxygen-html"
  "CMakeFiles/distdir"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/distdir.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
