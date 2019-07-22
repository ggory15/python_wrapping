file(REMOVE_RECURSE
  "doc/python_wrapping.doxytag"
  "doc/doxygen.log"
  "doc/doxygen-html"
  "CMakeFiles/generate-template-css"
  "doc/header.html"
  "doc/footer.html"
  "doc/doxygen.css"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/generate-template-css.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
