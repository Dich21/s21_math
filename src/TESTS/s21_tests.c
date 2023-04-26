#include "s21_tests.h"

// abs
START_TEST(abs_1) {
  int x = -3;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(abs_2) {
  int x = 0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(abs_3) {
  int x = 6;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

// ceil
START_TEST(ceil_1) {
  double x = 6.5673839393;
  ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(ceil_2) {
  double x = -6.999999999;
  ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(ceil_3) {
  double x = 0;
  ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

// floor
START_TEST(floor_1) {
  double x = 6.5673839393;
  ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(floor_2) {
  double x = -6.999999999;
  ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(floor_3) {
  double x = 0;
  ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

// fabs
START_TEST(fabs_1) {
  double x = 6.5673839393;
  ck_assert_int_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_2) {
  double x = -6.999999999;
  ck_assert_int_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_3) {
  double x = 0;
  ck_assert_int_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(exp_1) {
  double x = 0;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_2) {
  double x = 5;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_3) {
  double x = 10;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

// fmod

START_TEST(fmod_1) {
  double x = 6.5673839393;
  double y = 3.68686;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_2) {
  double x = -6.999999999;
  double y = 3.68686;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_3) {
  double x = 0;
  double y = 3.68686;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_4) {
  double x = 3.68686;
  double y = 0.00;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_5) {
  double x = 3.68686;
  double y = -6.00;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_6) {
  double x = -0.000;
  double y = 56.787878;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

// pow

START_TEST(pow_1) {
  double x = 1;
  double y = 1;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_2) {
  double x = 0;
  double y = 0;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_3) {
  double x = 1;
  double y = 0;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_4) {
  double x = 0;
  double y = 1;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_5) {
  double x = 1;
  double y = 3;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_6) {
  double x = 3;
  double y = 1;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_7) {
  double x = 3;
  double y = 1000000;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_8) {
  double x = 10000;
  double y = 80;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_9) {
  double x = 2;
  double y = -4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_10) {
  double x = 2.51;
  double y = -4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_11) {
  double x = 2.51;
  double y = -4.11;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_12) {
  double x = 2;
  double y = -4.11;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_13) {
  double x = 2.51;
  double y = -4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_14) {
  double x = S21_Inf;
  double y = 5;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_15) {
  double x = 2;
  double y = S21_Inf;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_16) {
  double x = S21_NaN;
  double y = 4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_17) {
  double x = 12;
  double y = S21_NaN;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

/////////////////SSUUIITTEE
///////
///////////
////////////

// abs
Suite *abs_tests(void) {
  Suite *m = suite_create("S21_ABS_TESTS");

  TCase *tm = tcase_create("s21_abs");

  tcase_add_test(tm, abs_1);
  tcase_add_test(tm, abs_2);
  tcase_add_test(tm, abs_3);

  suite_add_tcase(m, tm);

  return m;
}
// ceil
Suite *ceil_tests(void) {
  Suite *m = suite_create("S21_CEIL_TESTS");

  TCase *tm = tcase_create("s21_ceil");

  tcase_add_test(tm, ceil_1);
  tcase_add_test(tm, ceil_2);
  tcase_add_test(tm, ceil_3);

  suite_add_tcase(m, tm);

  return m;
}
// floor
Suite *floor_tests(void) {
  Suite *m = suite_create("S21_FLOOR_TESTS");

  TCase *tm = tcase_create("s21_floor");

  tcase_add_test(tm, floor_1);
  tcase_add_test(tm, floor_2);
  tcase_add_test(tm, floor_3);

  suite_add_tcase(m, tm);

  return m;
}
// fabs
Suite *fabs_tests(void) {
  Suite *m = suite_create("S21_FABS_TESTS");

  TCase *tm = tcase_create("s21_fabs");

  tcase_add_test(tm, fabs_1);
  tcase_add_test(tm, fabs_2);
  tcase_add_test(tm, fabs_3);

  suite_add_tcase(m, tm);

  return m;
}
// exp
Suite *exp_tests(void) {
  Suite *m = suite_create("S21_EXP_TESTS");

  TCase *tm = tcase_create("s21_exp");

  tcase_add_test(tm, exp_1);
  tcase_add_test(tm, exp_2);
  tcase_add_test(tm, exp_3);

  suite_add_tcase(m, tm);

  return m;
}
// fmod
Suite *fmod_tests(void) {
  Suite *m = suite_create("S21_FMOD_TESTS");

  TCase *tm = tcase_create("s21_fmod");

  tcase_add_test(tm, fmod_1);
  tcase_add_test(tm, fmod_2);
  tcase_add_test(tm, fmod_3);
  tcase_add_test(tm, fmod_4);
  // tcase_add_test(tm, fmod_5);
  tcase_add_test(tm, fmod_6);

  suite_add_tcase(m, tm);

  return m;
}

// pow
Suite *pow_tests(void) {
  Suite *m = suite_create("S21_pow_TESTS");

  TCase *tm = tcase_create("s21_pow");

  tcase_add_test(tm, pow_1);
  tcase_add_test(tm, pow_2);
  tcase_add_test(tm, pow_3);
  tcase_add_test(tm, pow_4);
  tcase_add_test(tm, pow_5);
  tcase_add_test(tm, pow_6);
  tcase_add_test(tm, pow_7);
  tcase_add_test(tm, pow_8);
  tcase_add_test(tm, pow_9);
  tcase_add_test(tm, pow_10);
  tcase_add_test(tm, pow_11);
  tcase_add_test(tm, pow_12);
  tcase_add_test(tm, pow_13);
  tcase_add_test(tm, pow_14);
  tcase_add_test(tm, pow_15);
  tcase_add_test(tm, pow_16);
  tcase_add_test(tm, pow_17);

  suite_add_tcase(m, tm);

  return m;
}