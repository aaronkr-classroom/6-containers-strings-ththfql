#ifndef GUARD_border_h
#define GUARD_border_h

#include <string>
#include <vector>

using namespace std;


string::size_type width(const vector<string>&);
vector<string> frame(const vector<string>& v);

// 수직 결합
vector<string> vcat(const vector<string>&,
	const vector<string>&);

	// 수평 결합
vector<string> vcat(const vector<string>&,
	const vector<string>&);

#endif