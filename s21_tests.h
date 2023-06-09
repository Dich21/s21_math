#ifndef TEST_S21_TESTS_H_
#define TEST_S21_TESTS_H_

#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "s21_math.h"

Suite *abs_tests(void);
Suite *ceil_tests(void);
Suite *floor_tests(void);
Suite *fabs_tests(void);
Suite *fmod_tests(void);
Suite *exp_tests(void);
Suite *pow_tests(void);
Suite *sqrt_tests(void);
Suite *log_tests(void);
Suite *sin_tests(void);
Suite *atan_tests(void);
Suite *cos_tests(void);
Suite *asin_tests(void);
Suite *acos_tests(void);
Suite *tan_tests(void);

int main(void) {
  int number_failed = 0;
  int total_tests = 0;
  int total_failed = 0;

  Suite *math[] = {abs_tests(),  ceil_tests(), floor_tests(), fabs_tests(),
                   fmod_tests(), exp_tests(),  pow_tests(),   sqrt_tests(),
                   log_tests(),  sin_tests(),  atan_tests(),  cos_tests(),
                   asin_tests(), acos_tests(), tan_tests(),   NULL};

  for (int i = 0; math[i] != NULL; i++) {
    printf("\n\n");
    SRunner *sr = srunner_create(math[i]);

    srunner_run_all(sr, CK_NORMAL);

    int ntests = srunner_ntests_run(sr);
    total_tests += ntests;
    number_failed = srunner_ntests_failed(sr);
    total_failed += number_failed;
    srunner_free(sr);
  }
  printf("\n\n");
  int total_passed = total_tests - total_failed;
  printf("\033[34mTotal tests run: %d\033[0m\t", total_tests);
  printf("\033[32mTotal tests passed: %d\033[0m\t", total_passed);
  printf("\033[31mTotal tests failed: %d\033[0m\n", total_failed);

  return (number_failed == 0) ? 0 : 1;
}

#endif  // TEST_S21_TESTS_H_