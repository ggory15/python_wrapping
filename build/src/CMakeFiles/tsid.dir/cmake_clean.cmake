file(REMOVE_RECURSE
  "libtsid.pdb"
  "libtsid.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/tsid.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
