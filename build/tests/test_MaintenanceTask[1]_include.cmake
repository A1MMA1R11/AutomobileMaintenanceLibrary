if(EXISTS "C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests/test_MaintenanceTask[1]_tests.cmake")
  include("C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests/test_MaintenanceTask[1]_tests.cmake")
else()
  add_test(test_MaintenanceTask_NOT_BUILT test_MaintenanceTask_NOT_BUILT)
endif()
