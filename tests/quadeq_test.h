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

#endif // QUADEQ_H
