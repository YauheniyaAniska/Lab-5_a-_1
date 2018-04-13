#ifndef name_h
#define name_h
class Transport {
	int all_money;
	int all_time;
public:
	int money_t(int amount_cargo, int amount_people,int count_people, int count_cargo);
	int time_t(int distance, int count_time);
	void show_t();
};
class Auto : public Transport {
	int count_people = 1;
	int count_cargo = 1;
	int count_time = 1;
	int all_money;
	int all_time;
public:
	void money(int amount_cargo, int amount_people) {
		money_t(amount_cargo, amount_people, count_people, count_cargo);
	}
	void time(int distance) {
		time_t(distance, count_time);
	}
	void show() {
		show_t();
	}
};
class Bike : public Transport {
	int count_people = 2;
	int count_cargo = 2;
	int count_time = 2;
	int all_money;
	int all_time;
public:
	void money(int amount_cargo, int amount_people) {
		money_t(amount_cargo, amount_people, count_people, count_cargo);
	}
	void time(int distance) {
		time_t(distance, count_time);
	}
	void show() {
		show_t();
	}
};
class Wagon : public Transport {
	int count_people = 3;
	int count_cargo = 3;
	int count_time = 3;
	int all_money;
	int all_time;
public:
	void money(int amount_cargo, int amount_people) {
		money_t(amount_cargo, amount_people, count_people, count_cargo);
	}
	void time(int distance) {
		time_t(distance, count_time);
	}
	void show() {
		show_t();
	}
};
#endif // !name_h