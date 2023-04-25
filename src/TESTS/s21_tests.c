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
    double x = 0;
    ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_3) {
    double x = 0;
    ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

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