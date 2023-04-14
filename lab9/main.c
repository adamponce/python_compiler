#include <stdio.h>
#include "tac.h"
#include <string.h>

int main(int argc, char *argv[]){
	struct addr loc_0 = {R_LOCAL, {0}};
	struct addr cont_5 = {R_CONST, {5}};
	struct addr none_addr = {R_NONE, {0}};
	struct instr *tac = gen(O_ASN, loc_0, cont_5, none_addr);


	struct addr loc_8 = {R_LOCAL, {8}};
	struct instr *mult = gen(O_MUL, loc_8, loc_0, loc_0);
	tac = append(tac, mult);


	struct addr loc_16 = {R_LOCAL, {16}};
	struct addr cont_1 = {R_CONST, {1}};
	struct instr *add = gen(O_ADD, loc_16, loc_8, cont_1);
	tac = append(tac, add);


	struct instr *assignment = gen(O_ASN, loc_0, loc_16, none_addr);
	tac = append(tac, assignment);


	struct instr *parameter = gen(O_PARM, loc_0, none_addr, none_addr);
	tac = append(tac, parameter);

	struct addr to_string = {R_NAME};
	to_string.u.name = "tostr";
	struct addr loc_24 = {R_LOCAL, {24}};
	struct instr *call = gen(O_CALL, to_string, loc_24, none_addr);
	tac = append(tac, call);

	struct addr str_0 = {R_NAME};
	str_0.u.name = "str";
	parameter = gen(O_PARM, str_0, none_addr, none_addr);
	tac = append(tac, parameter);

	parameter = gen(O_PARM, loc_24, none_addr, none_addr);
	tac = append(tac, parameter);

	struct addr cat_2 = {R_NAME};
	cat_2.u.name = "cat";
	struct addr loc_32 = {R_LOCAL, {32}};
	call = gen(O_CALL, cat_2, loc_32, none_addr);
	tac = append(tac, call);

	parameter = gen(O_PARM, loc_32, none_addr, none_addr);
	tac = append(tac, parameter);

	struct addr println_1 = {R_NAME};
	println_1.u.name = "println";
	struct addr loc_40 = {R_LOCAL, {40}};
	call = gen(O_CALL, println_1, loc_40, none_addr);
	tac = append(tac, call);

	struct instr *ret = gen(O_RET, none_addr, none_addr, none_addr);
	tac = append(tac, ret);


	tacprint(tac);
	return 0;
}