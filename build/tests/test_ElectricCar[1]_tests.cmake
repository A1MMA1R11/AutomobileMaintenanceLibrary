add_test([=[ElectricCarTest.ConstructorAndDisplay]=]  /home/cybernaut/kpit-nova/AutomobileMaintenanceLibrary/build/tests/test_ElectricCar [==[--gtest_filter=ElectricCarTest.ConstructorAndDisplay]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[ElectricCarTest.ConstructorAndDisplay]=]  PROPERTIES WORKING_DIRECTORY /home/cybernaut/kpit-nova/AutomobileMaintenanceLibrary/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  test_ElectricCar_TESTS ElectricCarTest.ConstructorAndDisplay)
