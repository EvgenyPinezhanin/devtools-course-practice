// Copyright 2022 Pinezhanin Evgeny

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Pinezhanin_Evgeny_ComplexNumberTest, can_create_copied_complex_number) {
    double re = 5.0;
    double im = 6.0;
    ComplexNumber z(re, im);
    ComplexNumber z_copy(z);

    ASSERT_EQ(z_copy.getRe(), z.getRe());
    ASSERT_EQ(z_copy.getIm(), z.getIm());
}

TEST(Pinezhanin_Evgeny_ComplexNumberTest, can_assign_complex_number) {
    double re = 3.0;
    double im = 2.0;
    ComplexNumber z(re, im);
    ComplexNumber z_assign;
    z_assign = z;

    ASSERT_EQ(z_assign.getRe(), z.getRe());
    ASSERT_EQ(z_assign.getIm(), z.getIm());
}

TEST(Pinezhanin_Evgeny_ComplexNumberTest, can_get_re_complex_number) {
    double re = 3.0;
    double im = 2.0;
    ComplexNumber z(re, im);

    ASSERT_EQ(z.getRe(), re);
}

TEST(Pinezhanin_Evgeny_ComplexNumberTest, can_get_im_complex_number) {
    double re = 3.0;
    double im = 2.0;
    ComplexNumber z(re, im);

    ASSERT_EQ(z.getIm(), im);
}