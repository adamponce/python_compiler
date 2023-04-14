#include <stdio.h>
#include "tac.h"
#include <string.h>


void print_address(struct addr a){
	if(a.region != R_NONE){
		if(a.region == R_NAME){
			if(strcmp(a.u.name, "str") == 0){
				printf("%s: 0", a.u.name);
			}else if(strcmp(a.u.name, "tostr") == 0){
				printf("%s, 1", a.u.name);
			}else if(strcmp(a.u.name, "cat") == 0){
				printf("%s, 2", a.u.name);
			}else if(strcmp(a.u.name, "println") == 0){
				printf("%s, 1", a.u.name);
			}
		}else
			printf("%s: %d", regionname(a.region), a.u.offset);
	}
}

void tacprint(struct instr *rv){
	printf("%s\t", opcodename(rv->opcode));
	print_address(rv->dest);
	if(rv->src1.region != R_NONE)
		printf(", ");
	print_address(rv->src1);
	if(rv->src2.region != R_NONE)
		printf(", ");
	print_address(rv->src2);
	printf("\n");
	if(rv->next != NULL){
		tacprint(rv->next);
	}
}

int main(int argc, char *argv[]){

	struct addr loc_0 = {R_LOCAL, 0};
	struct addr cont_5 = {R_CONST, 5};
	struct addr none_addr = {R_NONE, 0};
	struct instr *tac = gen(O_ASN, loc_0, cont_5, none_addr);

	struct addr loc_8 = {R_LOCAL, 8};
	//struct addr
	struct instr *temp = gen(O_MUL, loc_8, loc_0, loc_0);
	tac = append(tac, temp);

	struct addr loc_16 = {R_LOCAL, 16};
	struct addr cont_1 = {R_CONST, 1};
	temp = gen(O_ADD, loc_16, loc_8, cont_1);
	tac = append(tac, temp);

	temp = gen(O_ASN, loc_0, loc_16, none_addr);
	tac = append(tac, temp);

	temp = gen(O_PARM, loc_0, none_addr, none_addr);
	tac = append(tac, temp);

	struct addr to_string = {R_NAME};
	to_string.u.name = "tostr";
	struct addr loc_24 = {R_LOCAL, 24};
	temp = gen(O_CALL, to_string, loc_24, none_addr);
	tac = append(tac, temp);

	struct addr str_0 = {R_NAME};
	str_0.u.name = "str";
	temp = gen(O_PARM, str_0, none_addr, none_addr);
	tac = append(tac, temp);

	temp = gen(O_PARM, loc_24, none_addr, none_addr);
	tac = append(tac, temp);

	struct addr cat_2 = {R_NAME};
	cat_2.u.name = "cat";
	struct addr loc_32 = {R_LOCAL, 32};
	temp = gen(O_CALL, cat_2, loc_32, none_addr);
	tac = append(tac, temp);

	temp = gen(O_PARM, loc_32, none_addr, none_addr);
	tac = append(tac, temp);

	struct addr println_1 = {R_NAME};
	println_1.u.name = "println";
	struct addr loc_40 = {R_LOCAL, 40};
	temp = gen(O_CALL, println_1, loc_40, none_addr);
	tac = append(tac, temp);

	temp = gen(O_RET, none_addr, none_addr, none_addr);
	tac = append(tac, temp);

	tacprint(tac);
	return 0;
}