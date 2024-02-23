#include <gtest/gtest.h>
#include "temperature_control.h"

TEST(TemperatureControlTest, HeatingTest) {
    TemperatureControl control(20, 25);
    control.updateTemperature(15);
    ASSERT_TRUE(control.isHeating());
}

TEST(TemperatureControlTest, CoolingTest) {
    TemperatureControl control(20, 25);
    control.updateTemperature(30);
    ASSERT_TRUE(control.isCooling());
}

TEST(TemperatureControlTest, NoActionTest) {
    TemperatureControl control(20, 25);
    control.updateTemperature(22);
    ASSERT_FALSE(control.isHeating());
    ASSERT_FALSE(control.isCooling());
}

