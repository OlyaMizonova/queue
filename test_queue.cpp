#include"gtest.h"
#include"TQueue.h"

TEST(TListQueue, can_create_queue) {
	ASSERT_NO_THROW(TListQueue<int> r);
}

TEST(TListQueue, can_push_element) {
	TListQueue<int> t;
	t.push(1);
	ASSERT_NO_THROW(t.push(6));
}

TEST(TListQueue, can_pop_element_from_not_empty_queue) {
	TListQueue<int> t;
	t.push(6);
	ASSERT_NO_THROW(t.pop());
}

TEST(TListQueue, cant_pop_element_from_empty_queue) {
	TListQueue<int> t;
	ASSERT_ANY_THROW(t.pop());
}

TEST(TListQueue, can_front_element_from_not_empty_queue) {
	TListQueue<int> t;
	t.push(1);
	t.push(1);
	ASSERT_NO_THROW(t.front());
	EXPECT_EQ(1, t.front());
}

TEST(TListQueue, can_back_element_from_not_empty_queue) {
	TListQueue<int> t;
	t.push(1);
	t.push(1);
	ASSERT_NO_THROW(t.back());
	EXPECT_EQ(1, t.back());
}

TEST(TListQueue, is_empty_returns_true_when_empty_queue) {
	TListQueue<int> t;
	EXPECT_EQ(1, t.is_empty());
}

TEST(TListQueue, is_empty_returns_false_when_not_empty_queue) {
	TListQueue<int> t;
	t.push(1);
	EXPECT_EQ(0, t.is_empty());
}
