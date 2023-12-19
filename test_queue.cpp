#include"gtest.h"
#include"TQueue.h"

TEST(TListQueue, can_create_queue) {
	ASSERT_NO_THROW(TListQueue<int> r);
}

TEST(TListQueue, can_create_copied_queue) {
	TListQueue<int> r;
	for (int i = 0; i < 20; i++) {
		r.push(i);
	}
	ASSERT_NO_THROW(TListQueue<int> t(r););
}

TEST(TListQueue, compare_equal_queues_both_bool_operators_work_correctly) {
	TListQueue<int> first, second;
	for (int i = 0; i < 20; i++) {
		first.push(i);
		second.push(i);
	}
	EXPECT_EQ(first == second, 1);
	EXPECT_EQ(first!=second,0);
}

TEST(TListQueue, compare_not_equal_queues_both_bool_operators_work_correctly) {
	TListQueue<int> first, second;
	for (int i = 0; i < 20; i++) {
		first.push(i+5);
		second.push(i);
	}
	EXPECT_EQ(first == second, 0);
	EXPECT_EQ(first != second, 1);
}

TEST(TListQueue, copied_queue_is_equal_to_source_one) {
	TListQueue<int> r;
	for (int i = 0; i < 20; i++) {
		r.push(i);
	}
	TListQueue<int> t(r);
	EXPECT_EQ(t==r,1);
}

TEST(TListQueue, can_assign_queues) {
	TListQueue<int> t,r;
	for (int i = 0; i < 10; i++) {
		t.push(i);
	}
	ASSERT_NO_THROW(r = t);
	EXPECT_EQ(t==r,1);
}

TEST(TListQueue, can_push_element) {
	TListQueue<int> t;
	for (int i = 0; i < 50; i++) {
	ASSERT_NO_THROW(t.push(i));
	EXPECT_EQ(i,t.back());
	}
}

TEST(TListQueue, can_pop_element_from_not_empty_queue) {
	TListQueue<int> t;
	for (int i = 0; i < 100; i++) {
		t.push(i);
	}
	for (int i = 0; i < 100; i++) {
		ASSERT_NO_THROW(t.pop());
	}
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
