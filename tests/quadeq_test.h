#ifndef QUADEQ_H
#define QUADEQ_H

#include <gtest/gtest.h>

extern "C" {
#include "quadeq.h"
}

TEST(quadeqTest, roots_num) {
    double x1, x2;
    ASSERT_EQ(quadeq_resolve(1, 1, 1, &x1, &x2), 0);
    ASSERT_EQ(quadeq_resolve(1, 2, 1, &x1, &x2), 1);
    ASSERT_EQ(quadeq_resolve(1, 3, 1, &x1, &x2), 2);
}

TEST(quadeqTest, no_roots) {
    double x1, x2;
    ASSERT_EQ(quadeq_resolve(1, 0.5, 1, &x1, &x2), 0);
}

TEST(quadeqTest, one_root) {
    double x1, x2;
    ASSERT_EQ(quadeq_resolve(1, 20, 100, &x1, &x2), 1);
    ASSERT_EQ(x1, -10);
}

TEST(quadeqTest, two_roots) {
    double x1, x2;
    ASSERT_EQ(quadeq_resolve(1, 1, -2, &x1, &x2), 2);
    ASSERT_EQ(x1, 1);
    ASSERT_EQ(x2, -2);
}

TEST(quadeqTest, not_quadequation) {
    double x1, x2;
    ASSERT_EQ(quadeq_resolve(0, 1, 5, &x1, &x2), -1);
}

TEST(quadeqTest, not_equation) {
    double x1, x2;
    ASSERT_EQ(quadeq_resolve(0, 0, 5, &x1, &x2), -2);
}

#endif // QUADEQ_H
