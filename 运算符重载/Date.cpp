#include"Date.h"
void Date::show() {
	cout << year << "Äê" << mouth << "ÔÂ" << day << "ÈÕ" << endl;
}
void Date::Set() {
	cin >> year >> mouth >> day;
}
bool Date::leap(int y) {
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return true;
	else
		return false;
}
int Date::dton(Date& A) {
	int t = 0;
	int i;
	for ( i = 1; i < A.year; i++) {
		if (leap(i) == 0) t += 365;
		else if (leap(i)) t += 366;
	}
	if (leap(A.year) == 0) {
		for ( i = 0; i < (A.mouth - 1); i++) {
			t += day_tab[0][i];
		}
	}
	else if (leap(A.year)) {
		for ( i = 0; i <( A.mouth - 1); i++) {
			t += day_tab[1][i];
		}
	}
	t += A.day;
	return t;
}
Date Date::ntod(int t) {
	int i;
	int y = 1;
	for (i = 1;; i++) {
		if (leap(i) == 0) t -= 365;
		else if (leap(i)) t -= 366;
		if (t < 0)break;
		y += 1;
	}
	int m = 1, d = 1;
	if (leap(i) == 0) {
		t += 365;
		for (i = 0;; i++) {
			t -= day_tab[0][i];
			if (t < 0)break;
			m += 1;
		}
		t += day_tab[0][i];
		d = t;
	}
	else if (leap(i)) {
		t += 366;
		for (i = 0;; i++) {
			t -= day_tab[1][i];
			if (t < 0)break;
			m += 1;
		}
		t += day_tab[1][i];
		d = t;
	}
	Date A(y, m, d);
	return A;
}
Date Date::operator+(int days) {
	int n = 0;
	Date x;
	n = dton(*this);
	n += days;
	x = ntod(n);
	return x;
}
Date Date::operator-(int days) {
	int n = 0;
	Date x;
	n = dton(*this);
	n -= days;
	x = ntod(n);
	return x;
}
int Date::operator-(Date& b) {
	int d = 0;
	d = (dton(*this) - dton(b));
	if (d <= 0) {
		d -= 2 * d;
	}
	return d;
}