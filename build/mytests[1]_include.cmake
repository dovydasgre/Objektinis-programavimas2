if(EXISTS "C:/Users/dovyd/OneDrive/Stalinis kompiuteris/Uni/Uni/2 semestras/objektinis programavimas/pirmas darbas/V2.0/build/mytests[1]_tests.cmake")
  include("C:/Users/dovyd/OneDrive/Stalinis kompiuteris/Uni/Uni/2 semestras/objektinis programavimas/pirmas darbas/V2.0/build/mytests[1]_tests.cmake")
else()
  add_test(mytests_NOT_BUILT mytests_NOT_BUILT)
endif()
