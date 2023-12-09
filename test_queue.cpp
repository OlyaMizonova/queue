#include"gtest.h"
#include"TQueue.h"

TEST(TQueue, can_create_queue_with_positive_length) {
	ASSERT_NO_THROW(TQueue<int> r(5));
}

TEST(TQueue, cant_create_queue_with_negative_length) {
	ASSERT_NO_THROW(TQueue<int> r(5));
}

TEST(TQueue, can_push_element_to_not_full_queue) {
	TQueue<int> t(2);
	t.push(1);
	ASSERT_NO_THROW(t.push(6));
}

TEST(TQueue, cant_push_element_to_full_queue) {
	TQueue<int> t(2);
	t.push(1);
	t.push(1);
	ASSERT_ANY_THROW(t.push(6));
}

TEST(TQueue, can_pop_element_from_not_empty_queue) {
	TQueue<int> t(2);
	t.push(1);
	t.push(1);
	ASSERT_NO_THROW(t.pop());
}

TEST(TQueue, cant_pop_element_from_empty_queue) {
	TQueue<int> t(2);
	ASSERT_ANY_THROW(t.pop());
}

TEST(TQueue, can_front_element_from_not_empty_queue) {
	TQueue<int> t(2);
	t.push(1);
	t.push(1);
	ASSERT_NO_THROW(t.front());
	EXPECT_EQ(1, t.front());
}

TEST(TQueue, can_back_element_from_not_empty_queue) {
	TQueue<int> t(2);
	t.push(1);
	t.push(1);
	ASSERT_NO_THROW(t.back());
	EXPECT_EQ(1, t.back());
}

TEST(TQueue, is_empty_returns_true_when_empty_queue) {
	TQueue<int> t(2);
	EXPECT_EQ(1, t.is_empty());
}

TEST(TQueue, is_empty_returns_false_when_not_empty_queue) {
	TQueue<int> t(2);
	t.push(1);
	EXPECT_EQ(0, t.is_empty());
}

TEST(TQueue, is_full_returns_true_when_full_queue) {
	TQueue<int> t(2);
	t.push(1);
	t.push(1);
	EXPECT_EQ(1, t.is_full());
}

TEST(TQueue, is_full_returns_false_when_not_full_queue) {
	TQueue<int> t(2);
	t.push(1);
	EXPECT_EQ(0, t.is_full());
}