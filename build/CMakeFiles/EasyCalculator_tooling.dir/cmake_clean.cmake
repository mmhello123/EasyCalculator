file(REMOVE_RECURSE
  "EasyCalculator/Main.qml"
  "EasyCalculator/buttons/EqualSignButton.qml"
  "EasyCalculator/buttons/FunctionalButton.qml"
  "EasyCalculator/buttons/NumberButton.qml"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/EasyCalculator_tooling.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
