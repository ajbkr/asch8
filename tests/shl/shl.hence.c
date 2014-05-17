#include "libhence.h"

#define FUNCTION_PREFIX	xyzzy_

#include "h0.h"

    /* Standard Hence Runtime Library */
    /* Copyright 2010-2014 Andrew J. Baker */
void xyzzy_and(void)
{
    __push__("and");
    __call_native__();
}

void xyzzy_beep(void)
{
    __push__("beep");
    __call_native__();
}

void xyzzy_bitwise_and(void)
{
    __push__("bitwise-and");
    __call_native__();
}

void xyzzy_bitwise_not(void)
{
    __push__("bitwise-not");
    __call_native__();
}

void xyzzy_bitwise_or(void)
{
    __push__("bitwise-or");
    __call_native__();
}

void xyzzy_bitwise_shift_left(void)
{
    __push__("bitwise-shift-left");
    __call_native__();
}

void xyzzy_bitwise_shift_right(void)
{
    __push__("bitwise-shift-right");
    __call_native__();
}

void xyzzy_bitwise_xor(void)
{
    __push__("bitwise-xor");
    __call_native__();
}

void xyzzy_concatenate(void)
{
    __push__("concatenate");
    __call_native__();
}

void xyzzy_debug(void)
{
    __push__("debug");
    __call_native__();
}

void xyzzy_depth(void)
{
    __push__("depth");
    __call_native__();
}

void xyzzy_divide(void)
{
    __push__("divide");
    __call_native__();
}

void xyzzy_drop(void)
{
    __push__("drop");
    __call_native__();
}

void xyzzy_equal(void)
{
    __push__("equal");
    __call_native__();
}

void xyzzy_exit(void)
{
    __push__("exit");
    __call_native__();
}

void xyzzy_hexadecimal(void)
{
    __push__("hexadecimal");
    __call_native__();
}

void xyzzy_if(void)
{
    __push__("if");
    __call_native__();
}

void xyzzy_json_rpc(void)
{
    __push__("json-rpc");
    __call_native__();
}

void xyzzy_length(void)
{
    __push__("length");
    __call_native__();
}

void xyzzy_less_than(void)
{
    __push__("less-than");
    __call_native__();
}

void xyzzy_modulo(void)
{
    __push__("modulo");
    __call_native__();
}

void xyzzy_not(void)
{
    __push__("not");
    __call_native__();
}

void xyzzy_or(void)
{
    __push__("or");
    __call_native__();
}

void xyzzy_pick(void)
{
    __push__("pick");
    __call_native__();
}

void xyzzy_read_line(void)
{
    __push__("read-line");
    __call_native__();
}

void xyzzy_roll(void)
{
    __push__("roll");
    __call_native__();
}

void xyzzy_substring(void)
{
    __push__("substring");
    __call_native__();
}

void xyzzy_subtract(void)
{
    __push__("subtract");
    __call_native__();
}

void xyzzy_target(void)
{
    __push__("target");
    __call_native__();
}

void xyzzy_while(void)
{
    __push__("while");
    __call_native__();
}

void xyzzy_write(void)
{
    __push__("write");
    __call_native__();
    /* Synthesised functions */
}

void xyzzy_abort(void)
{
    __push__("Abnormal program termination");
    xyzzy_write_line();
    __pushi__(1);
    xyzzy_exit();
}

void xyzzy__ss(void)
{
    __pushi__(0);
    xyzzy_swap();
    xyzzy_subtract();
}

void xyzzy__dsl(void)
{
    xyzzy_duplicate();
    __pushi__(0);
    xyzzy_swap();
    xyzzy_less_than();
}

void xyzzy_absolute(void)
{
    __push__("do-nothing");
    __push__("_ss");
    __push__("_dsl");
    xyzzy_if();
}

void xyzzy_add(void)
{
    xyzzy_swap();
    __pushi__(0);
    xyzzy_swap();
    xyzzy_subtract();
    xyzzy_subtract();
}

void xyzzy_append(void)
{
    xyzzy_swap();
    xyzzy_concatenate();
}

void xyzzy_assign(void)
{
    xyzzy_swap();
    xyzzy_set();
}

void xyzzy_call(void)
{
    /* else call TOS */
    __push__("do-nothing");
    __push__("false");
    xyzzy_if();
}

void xyzzy_decrement(void)
{
    __pushi__(1);
    xyzzy_subtract();
}

void xyzzy_decrement_variable(void)
{
    xyzzy_duplicate();
    xyzzy_get();
    xyzzy_decrement();
    xyzzy_swap();
    xyzzy_set();
}

void xyzzy_divide_by(void)
{
    xyzzy_swap();
    xyzzy_divide();
}

void xyzzy_do_nothing(void)
{
    /* no operation */
}

void xyzzy_drop_all(void)
{
    __push__("drop");
    __push__("depth");
    xyzzy_while();
}

void xyzzy_dump(void)
{
    __push__("write-line");
    __push__("depth");
    xyzzy_while();
}

void xyzzy_duplicate(void)
{
    __pushi__(0);
    xyzzy_pick();
}

void xyzzy_false(void)
{
    __pushi__(0);
}

void xyzzy_get(void)
{
    xyzzy_call();
    xyzzy_pick();
}

void xyzzy_greater_than(void)
{
    xyzzy_over();
    xyzzy_over();
    xyzzy_greater_than_or_equal();
    xyzzy_rotate();
    xyzzy_rotate();
    xyzzy_not_equal();
    xyzzy_and();
}

void xyzzy_greater_than_or_equal(void)
{
    xyzzy_less_than();
    xyzzy_not();
}

void xyzzy_increment(void)
{
    __pushi__(1);
    xyzzy_add();
}

void xyzzy_increment_variable(void)
{
    xyzzy_duplicate();
    xyzzy_get();
    xyzzy_increment();
    xyzzy_swap();
    xyzzy_set();
}

void xyzzy_less_than_or_equal(void)
{
    xyzzy_greater_than();
    xyzzy_not();
}

void xyzzy__e(void)
{
    __pushi__(1);
    xyzzy_equal();
}

void xyzzy__rdrarsrparrr(void)
{
    xyzzy_rotate();
    xyzzy_duplicate();
    xyzzy_rotate();
    xyzzy_add();
    xyzzy_rotate();
    xyzzy_swap();
    __pushi__(3);
    xyzzy_roll();
    __pushi__(2);
    xyzzy_pick();
    xyzzy_add();
    __pushi__(3);
    xyzzy_roll();
    __pushi__(3);
    xyzzy_roll();
    __pushi__(3);
    xyzzy_roll();
}

void xyzzy__pn(void)
{
    __pushi__(3);
    xyzzy_pick();
    __pushi__(0);
    xyzzy_not_equal();
}

void xyzzy__mo(void)
{
    __pushi__(-1);
}

void xyzzy__o(void)
{
    __pushi__(1);
}

void xyzzy__sl(void)
{
    __pushi__(0);
    xyzzy_swap();
    xyzzy_less_than();
}

void xyzzy__oaoal(void)
{
    xyzzy_over();
    xyzzy_absolute();
    xyzzy_over();
    xyzzy_absolute();
    xyzzy_less_than();
}

void xyzzy_multiply(void)
{
    __push__("do-nothing");
    __push__("swap");
    __push__("_oaoal");
    xyzzy_if();
    xyzzy_over();
    __push__("_mo");
    __push__("_o");
    __push__("_sl");
    xyzzy_if();
    __pushi__(0);
    __push__("_rdrarsrparrr");
    __push__("_pn");
    xyzzy_while();
    __pushi__(3);
    xyzzy_roll();
    xyzzy_drop();
    __pushi__(2);
    xyzzy_roll();
    xyzzy_drop();
    xyzzy_swap();
    __push__("do-nothing");
    __push__("_ss");
    __push__("_e");
    xyzzy_if();
}

void xyzzy_negate(void)
{
    __pushi__(-1);
    xyzzy_multiply();
}

void xyzzy_not_equal(void)
{
    xyzzy_equal();
    xyzzy_not();
}

void xyzzy_over(void)
{
    __pushi__(1);
    xyzzy_pick();
}

void xyzzy_write_line(void)
{
    __push__("\n");
    xyzzy_append();
    xyzzy_write();
}

void xyzzy__sd(void)
{
    __push__("");
    /* push */
    xyzzy_swap();
    xyzzy_decrement();
}

void xyzzy__dsg(void)
{
    xyzzy_duplicate();
    __pushi__(0);
    xyzzy_swap();
    xyzzy_greater_than();
}

void xyzzy_reserve(void)
{
    __push__("_sd");
    __push__("_dsg");
    xyzzy_while();
    xyzzy_drop();
}

void xyzzy_rotate(void)
{
    __pushi__(2);
    xyzzy_roll();
}

void xyzzy__rrdirsri(void)
{
    xyzzy_rotate();
    xyzzy_rotate();
    xyzzy_duplicate();
    xyzzy_increment();
    xyzzy_roll();
    xyzzy_swap();
    __pushi__(3);
    xyzzy_roll();
    xyzzy_increment();
}

void xyzzy__rrdiirdri(void)
{
    xyzzy_rotate();
    xyzzy_rotate();
    xyzzy_duplicate();
    xyzzy_increment();
    xyzzy_increment();
    xyzzy_roll();
    xyzzy_drop();
    xyzzy_rotate();
    xyzzy_increment();
}

void xyzzy__ool(void)
{
    xyzzy_over();
    xyzzy_over();
    xyzzy_less_than();
}

void xyzzy_set(void)
{
    xyzzy_call();
    __pushi__(0);
    __push__("do-nothing");
    __push__("_rrdiirdri");
    __push__("_ool");
    xyzzy_if();
    __push__("_rrdirsri");
    __push__("_ool");
    xyzzy_while();
    xyzzy_drop();
    xyzzy_drop();
}

void xyzzy_swap(void)
{
    __pushi__(1);
    xyzzy_roll();
}

void xyzzy_true(void)
{
    __pushi__(1);
    /* CHIP-8 Pseudo-Assembler -- code generator */
    /* Copyright 2014 Andrew J. Baker */
}

void xyzzy_offset(void)
{
    xyzzy_depth();
    /* from */
    __pushi__(1);
    xyzzy_subtract();
}

void xyzzy_v0(void)
{
    __pushi__(0);
}

void xyzzy_v1(void)
{
    __pushi__(1);
}

void xyzzy_v2(void)
{
    __pushi__(2);
}

void xyzzy_v3(void)
{
    __pushi__(3);
}

void xyzzy_v4(void)
{
    __pushi__(4);
}

void xyzzy_v5(void)
{
    __pushi__(5);
}

void xyzzy_v6(void)
{
    __pushi__(6);
}

void xyzzy_v7(void)
{
    __pushi__(7);
}

void xyzzy_v8(void)
{
    __pushi__(8);
}

void xyzzy_v9(void)
{
    __pushi__(9);
}

void xyzzy_va(void)
{
    __push__("a");
    xyzzy_hexadecimal();
}

void xyzzy_vb(void)
{
    __push__("b");
    xyzzy_hexadecimal();
}

void xyzzy_vc(void)
{
    __push__("c");
    xyzzy_hexadecimal();
}

void xyzzy_vd(void)
{
    __push__("d");
    xyzzy_hexadecimal();
}

void xyzzy_ve(void)
{
    __push__("e");
    xyzzy_hexadecimal();
}

void xyzzy_vf(void)
{
    __push__("f");
    xyzzy_hexadecimal();
}

void xyzzy_advance(void)
{
    __push__("offset");
    xyzzy_increment_variable();
    __push__("offset");
    xyzzy_increment_variable();
    /*  vx --  */
}

void xyzzy_add_i(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __push__("1e");
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_add_(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(4);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  kk vx --  */
}

void xyzzy_addi(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(70);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and kk */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_and_(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(2);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  nnn --  */
}

void xyzzy_call_(void)
{
    /* nnn */
    xyzzy_duplicate();
    __pushi__(8);
    /* (nnn') by */
    xyzzy_swap();
    xyzzy_bitwise_shift_right();
    /* and */
    __pushi__(20);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and nnn */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  --  */
}

void xyzzy_cls(void)
{
    __pushi__(0);
    xyzzy_write_line();
    __push__("e0");
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  n vy vx --  */
}

void xyzzy_drw(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __push__("d0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and vy */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  nnn --  */
}

void xyzzy_jp_v0(void)
{
    /* nnn */
    xyzzy_duplicate();
    __pushi__(8);
    /* (nnn') by */
    xyzzy_swap();
    xyzzy_bitwise_shift_right();
    /* and */
    __push__("b0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and nnn */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  nnn --  */
}

void xyzzy_jp(void)
{
    /* nnn */
    xyzzy_duplicate();
    __pushi__(8);
    /* (nnn') by */
    xyzzy_swap();
    xyzzy_bitwise_shift_right();
    /* and */
    __pushi__(10);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and nnn */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_ld_dt(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(15);
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_ld_mi(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(55);
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_ld_st(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(18);
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_ld_b(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(33);
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_ld_f(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(29);
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  nnn --  */
}

void xyzzy_ld_i(void)
{
    /* nnn */
    xyzzy_duplicate();
    __pushi__(8);
    /* (nnn') by */
    xyzzy_swap();
    xyzzy_bitwise_shift_right();
    /* and */
    __push__("a0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and nnn */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  kk vx --  */
}

void xyzzy_ldi(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(60);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and kk */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_ld(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_or_(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(1);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  --  */
}

void xyzzy_ret(void)
{
    __pushi__(0);
    xyzzy_write_line();
    __push__("ee");
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  kk vx --  */
}

void xyzzy_rnd(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __push__("c0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and kk */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  kk vx --  */
}

void xyzzy_sei(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(30);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and kk */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_se(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(50);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_shl(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __push__("e");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_shr(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(6);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_sknp(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("e0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __push__("a1");
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_skp(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("e0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __push__("9e");
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  kk vx --  */
}

void xyzzy_snei(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(40);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and kk */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_sne(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(90);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_st_dt(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(7);
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_st_k(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __push__("a");
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vx --  */
}

void xyzzy_st_mi(void)
{
    __push__("0f");
    xyzzy_hexadecimal();
    /* vx and */
    xyzzy_bitwise_and();
    /* and */
    __push__("f0");
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(65);
    xyzzy_hexadecimal();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_subn(void)
{
    /* vx and vy */
    xyzzy_swap();
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(7);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_sub(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(5);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  nnn --  */
}

void xyzzy_sys(void)
{
    /* nnn */
    xyzzy_duplicate();
    __pushi__(8);
    /* (nnn') by */
    xyzzy_swap();
    xyzzy_bitwise_shift_right();
    /* and */
    __pushi__(0);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    /* and nnn */
    __push__("00ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    xyzzy_advance();
    /*  vy vx --  */
}

void xyzzy_xor(void)
{
    /* and vx */
    __push__("f");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    /* and */
    __pushi__(80);
    xyzzy_hexadecimal();
    xyzzy_bitwise_or();
    xyzzy_write_line();
    __pushi__(4);
    /* (vy) and */
    xyzzy_swap();
    xyzzy_bitwise_shift_left();
    /* and */
    __pushi__(3);
    xyzzy_bitwise_or();
    xyzzy_write_line();
    xyzzy_advance();
    /*  name -- nnn  */
}

void xyzzy_address(void)
{
    xyzzy_drop();
    __pushi__(0);
    /*  name -- n  */
}

void xyzzy_address_hi(void)
{
    xyzzy_drop();
    __pushi__(0);
    /*  name -- nn  */
}

void xyzzy_address_lo(void)
{
    xyzzy_drop();
    __pushi__(0);
    /*  nn --  */
}

void xyzzy_db(void)
{
    /* and nn */
    __push__("ff");
    xyzzy_hexadecimal();
    xyzzy_bitwise_and();
    xyzzy_write_line();
    /* (1-byte advance) */
    __push__("offset");
    xyzzy_increment_variable();
    /*  name --  */
}

void xyzzy_label(void)
{
    xyzzy_drop();
}

void xyzzy_init_asch8(void)
{
    /* element at BOS */
    __pushi__(1);
    xyzzy_reserve();
    __pushi__(200);
    xyzzy_hexadecimal();
    /* to */
    __push__("offset");
    xyzzy_set();
}

struct Function Functions[] = {
    { "and", xyzzy_and },
    { "beep", xyzzy_beep },
    { "bitwise-and", xyzzy_bitwise_and },
    { "bitwise-not", xyzzy_bitwise_not },
    { "bitwise-or", xyzzy_bitwise_or },
    { "bitwise-shift-left", xyzzy_bitwise_shift_left },
    { "bitwise-shift-right", xyzzy_bitwise_shift_right },
    { "bitwise-xor", xyzzy_bitwise_xor },
    { "concatenate", xyzzy_concatenate },
    { "debug", xyzzy_debug },
    { "depth", xyzzy_depth },
    { "divide", xyzzy_divide },
    { "drop", xyzzy_drop },
    { "equal", xyzzy_equal },
    { "exit", xyzzy_exit },
    { "hexadecimal", xyzzy_hexadecimal },
    { "if", xyzzy_if },
    { "json-rpc", xyzzy_json_rpc },
    { "length", xyzzy_length },
    { "less-than", xyzzy_less_than },
    { "modulo", xyzzy_modulo },
    { "not", xyzzy_not },
    { "or", xyzzy_or },
    { "pick", xyzzy_pick },
    { "read-line", xyzzy_read_line },
    { "roll", xyzzy_roll },
    { "substring", xyzzy_substring },
    { "subtract", xyzzy_subtract },
    { "target", xyzzy_target },
    { "while", xyzzy_while },
    { "write", xyzzy_write },
    { "abort", xyzzy_abort },
    { "_ss", xyzzy__ss },
    { "_dsl", xyzzy__dsl },
    { "absolute", xyzzy_absolute },
    { "add", xyzzy_add },
    { "append", xyzzy_append },
    { "assign", xyzzy_assign },
    { "call", xyzzy_call },
    { "decrement", xyzzy_decrement },
    { "decrement-variable", xyzzy_decrement_variable },
    { "divide-by", xyzzy_divide_by },
    { "do-nothing", xyzzy_do_nothing },
    { "drop-all", xyzzy_drop_all },
    { "dump", xyzzy_dump },
    { "duplicate", xyzzy_duplicate },
    { "false", xyzzy_false },
    { "get", xyzzy_get },
    { "greater-than", xyzzy_greater_than },
    { "greater-than-or-equal", xyzzy_greater_than_or_equal },
    { "increment", xyzzy_increment },
    { "increment-variable", xyzzy_increment_variable },
    { "less-than-or-equal", xyzzy_less_than_or_equal },
    { "_e", xyzzy__e },
    { "_rdrarsrparrr", xyzzy__rdrarsrparrr },
    { "_pn", xyzzy__pn },
    { "_mo", xyzzy__mo },
    { "_o", xyzzy__o },
    { "_sl", xyzzy__sl },
    { "_oaoal", xyzzy__oaoal },
    { "multiply", xyzzy_multiply },
    { "negate", xyzzy_negate },
    { "not-equal", xyzzy_not_equal },
    { "over", xyzzy_over },
    { "write-line", xyzzy_write_line },
    { "_sd", xyzzy__sd },
    { "_dsg", xyzzy__dsg },
    { "reserve", xyzzy_reserve },
    { "rotate", xyzzy_rotate },
    { "_rrdirsri", xyzzy__rrdirsri },
    { "_rrdiirdri", xyzzy__rrdiirdri },
    { "_ool", xyzzy__ool },
    { "set", xyzzy_set },
    { "swap", xyzzy_swap },
    { "true", xyzzy_true },
    { "offset", xyzzy_offset },
    { "v0", xyzzy_v0 },
    { "v1", xyzzy_v1 },
    { "v2", xyzzy_v2 },
    { "v3", xyzzy_v3 },
    { "v4", xyzzy_v4 },
    { "v5", xyzzy_v5 },
    { "v6", xyzzy_v6 },
    { "v7", xyzzy_v7 },
    { "v8", xyzzy_v8 },
    { "v9", xyzzy_v9 },
    { "va", xyzzy_va },
    { "vb", xyzzy_vb },
    { "vc", xyzzy_vc },
    { "vd", xyzzy_vd },
    { "ve", xyzzy_ve },
    { "vf", xyzzy_vf },
    { "advance", xyzzy_advance },
    { "add-i", xyzzy_add_i },
    { "add_", xyzzy_add_ },
    { "addi", xyzzy_addi },
    { "and_", xyzzy_and_ },
    { "call_", xyzzy_call_ },
    { "cls", xyzzy_cls },
    { "drw", xyzzy_drw },
    { "jp-v0", xyzzy_jp_v0 },
    { "jp", xyzzy_jp },
    { "ld-dt", xyzzy_ld_dt },
    { "ld-mi", xyzzy_ld_mi },
    { "ld-st", xyzzy_ld_st },
    { "ld-b", xyzzy_ld_b },
    { "ld-f", xyzzy_ld_f },
    { "ld-i", xyzzy_ld_i },
    { "ldi", xyzzy_ldi },
    { "ld", xyzzy_ld },
    { "or_", xyzzy_or_ },
    { "ret", xyzzy_ret },
    { "rnd", xyzzy_rnd },
    { "sei", xyzzy_sei },
    { "se", xyzzy_se },
    { "shl", xyzzy_shl },
    { "shr", xyzzy_shr },
    { "sknp", xyzzy_sknp },
    { "skp", xyzzy_skp },
    { "snei", xyzzy_snei },
    { "sne", xyzzy_sne },
    { "st-dt", xyzzy_st_dt },
    { "st-k", xyzzy_st_k },
    { "st-mi", xyzzy_st_mi },
    { "subn", xyzzy_subn },
    { "sub", xyzzy_sub },
    { "sys", xyzzy_sys },
    { "xor", xyzzy_xor },
    { "address", xyzzy_address },
    { "address-hi", xyzzy_address_hi },
    { "address-lo", xyzzy_address_lo },
    { "db", xyzzy_db },
    { "label", xyzzy_label },
    { "init-asch8", xyzzy_init_asch8 },
    { NULL, NULL }
};

/* entry point */
int main(void)
{
    __init__();
    __call_native_init__();

    xyzzy_init-asch8();

    __call_native_fini__();

    __depth__();
    return (__popi__() > 0) ? (__popi__()) : (0);
}
