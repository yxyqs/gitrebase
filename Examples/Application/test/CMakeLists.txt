
otb_test_application(NAME apTeGenerateAnApplicationExample
  APP ApplicationExample
  OPTIONS -in ${OTB_DATA_ROOT}/Examples/QB_Suburb.png
          -out ${TEMP}/apTeGenerateAnApplicationExampleOutput.png)

set_tests_properties(apTeGenerateAnApplicationExample PROPERTIES DEPENDS otbapp_ApplicationExample)
