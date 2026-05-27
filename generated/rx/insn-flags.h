/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_jump 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_simple_return 1
#define HAVE_deallocate_and_return 1
#define HAVE_pop_and_return (reload_completed)
#define HAVE_fast_interrupt_return 1
#define HAVE_exception_return 1
#define HAVE_naked_return 1
#define HAVE_call_internal 1
#define HAVE_call_value_internal 1
#define HAVE_sibcall_internal 1
#define HAVE_sibcall_value_internal 1
#define HAVE_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_stack_push 1
#define HAVE_stack_pushm (reload_completed)
#define HAVE_stack_pop 1
#define HAVE_stack_popm (reload_completed)
#define HAVE_cstoresi4 1
#define HAVE_cstoresf4 (ALLOW_RX_FPU_INSNS)
#define HAVE_abssi2 1
#define HAVE_addsi3_internal 1
#define HAVE_adc_internal (reload_completed)
#define HAVE_adddi3_internal 1
#define HAVE_andsi3 1
#define HAVE_bswapsi2 1
#define HAVE_bswaphi2 1
#define HAVE_divsi3 1
#define HAVE_udivsi3 1
#define HAVE_mulsidi3 (! TARGET_BIG_ENDIAN_DATA)
#define HAVE_umulsidi3 (! TARGET_BIG_ENDIAN_DATA)
#define HAVE_smaxsi3 1
#define HAVE_sminsi3 1
#define HAVE_umaxhi3_u 1
#define HAVE_umaxqi3_u 1
#define HAVE_uminhi3_ur 1
#define HAVE_uminqi3_ur 1
#define HAVE_umaxhi3_ur 1
#define HAVE_umaxqi3_ur 1
#define HAVE_mulsi3 1
#define HAVE_negsi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_iorsi3 1
#define HAVE_rotlsi3 1
#define HAVE_rotrsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashlsi3 1
#define HAVE_ssaddsi3 1
#define HAVE_subsi3 1
#define HAVE_sbb_internal (reload_completed)
#define HAVE_subdi3_internal 1
#define HAVE_xorsi3 1
#define HAVE_plussi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_andsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_iorsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_xorsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_plussi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_andsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_iorsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_xorsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_plussi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_andsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_iorsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_xorsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_plussi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_andsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_iorsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_xorsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_divsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_udivsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_minussi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_divsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_udivsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_minussi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_divsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_udivsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_minussi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_divsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_udivsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_minussi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_smaxsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_sminsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_multsi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_smaxsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_sminsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_multsi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_smaxsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_sminsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_multsi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_smaxsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_sminsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_multsi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_comparesi3_zero_extendhi ((optimize < 3 || optimize_size))
#define HAVE_comparesi3_sign_extendhi ((optimize < 3 || optimize_size))
#define HAVE_comparesi3_zero_extendqi ((optimize < 3 || optimize_size))
#define HAVE_comparesi3_sign_extendqi ((optimize < 3 || optimize_size))
#define HAVE_addsf3 (ALLOW_RX_FPU_INSNS)
#define HAVE_divsf3 (ALLOW_RX_FPU_INSNS)
#define HAVE_mulsf3 (ALLOW_RX_FPU_INSNS)
#define HAVE_subsf3 (ALLOW_RX_FPU_INSNS)
#define HAVE_fix_truncsfsi2 (ALLOW_RX_FPU_INSNS)
#define HAVE_floatsisf2 (ALLOW_RX_FPU_INSNS)
#define HAVE_bitset 1
#define HAVE_bitset_in_memory 1
#define HAVE_bitinvert 1
#define HAVE_bitinvert_in_memory 1
#define HAVE_bitclr 1
#define HAVE_bitclr_in_memory 1
#define HAVE_rx_insv_reg 1
#define HAVE_sync_lock_test_and_setsi 1
#define HAVE_xchg_memqi 1
#define HAVE_xchg_memhi 1
#define HAVE_rx_movstr (rx_allow_string_insns)
#define HAVE_rx_strend (rx_allow_string_insns)
#define HAVE_rx_cpymem (rx_allow_string_insns)
#define HAVE_rx_setmem (rx_allow_string_insns)
#define HAVE_rx_cmpstrn (rx_allow_string_insns)
#define HAVE_machi 1
#define HAVE_maclo 1
#define HAVE_mulhi 1
#define HAVE_mullo 1
#define HAVE_mvfachi 1
#define HAVE_mvfacmi 1
#define HAVE_mvtachi 1
#define HAVE_mvtaclo 1
#define HAVE_racw 1
#define HAVE_rmpa (rx_allow_string_insns)
#define HAVE_revw 1
#define HAVE_lrintsf2 1
#define HAVE_clrpsw 1
#define HAVE_setpsw 1
#define HAVE_mvfc 1
#define HAVE_mvtc 1
#define HAVE_mvtipl 1
#define HAVE_brk 1
#define HAVE_int 1
#define HAVE_wait 1
#define HAVE_mvfcp 1
#define HAVE_nop 1
#define HAVE_movdi (TARGET_ENABLE_LRA)
#define HAVE_movdf (TARGET_ENABLE_LRA)
#define HAVE_cbranchsi4 1
#define HAVE_cbranchsf4 (ALLOW_RX_FPU_INSNS)
#define HAVE_return (rx_can_use_simple_return ())
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_movsf 1
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movsicc 1
#define HAVE_addsi3 1
#define HAVE_addsi3_flags 1
#define HAVE_adddi3 1
#define HAVE_umaxhi3 1
#define HAVE_umaxqi3 1
#define HAVE_uminhi3 1
#define HAVE_uminqi3 1
#define HAVE_subsi3_flags 1
#define HAVE_subdi3 1
#define HAVE_insv 1
#define HAVE_atomic_exchangeqi 1
#define HAVE_atomic_exchangehi 1
#define HAVE_atomic_exchangesi 1
#define HAVE_atomic_fetch_addsi 1
#define HAVE_atomic_fetch_subsi 1
#define HAVE_atomic_fetch_orsi 1
#define HAVE_atomic_fetch_xorsi 1
#define HAVE_atomic_fetch_andsi 1
#define HAVE_atomic_fetch_nandsi 1
#define HAVE_atomic_add_fetchsi 1
#define HAVE_atomic_or_fetchsi 1
#define HAVE_atomic_xor_fetchsi 1
#define HAVE_atomic_and_fetchsi 1
#define HAVE_atomic_sub_fetchsi 1
#define HAVE_atomic_nand_fetchsi 1
#define HAVE_movstr (rx_allow_string_insns)
#define HAVE_cpymemsi (rx_allow_string_insns)
#define HAVE_setmemsi (rx_allow_string_insns)
#define HAVE_cmpstrnsi (rx_allow_string_insns)
#define HAVE_cmpstrsi (rx_allow_string_insns)
#define HAVE_pid_addr 1
extern rtx        gen_jump                     (rtx);
extern rtx        gen_indirect_jump            (rtx);
extern rtx        gen_tablejump                (rtx, rtx);
extern rtx        gen_simple_return            (void);
extern rtx        gen_deallocate_and_return    (rtx);
extern rtx        gen_pop_and_return           (rtx, rtx);
extern rtx        gen_fast_interrupt_return    (void);
extern rtx        gen_exception_return         (void);
extern rtx        gen_naked_return             (void);
extern rtx        gen_call_internal            (rtx);
extern rtx        gen_call_value_internal      (rtx, rtx);
extern rtx        gen_sibcall_internal         (rtx);
extern rtx        gen_sibcall_value_internal   (rtx, rtx);
extern rtx        gen_extendhisi2              (rtx, rtx);
extern rtx        gen_extendqisi2              (rtx, rtx);
extern rtx        gen_zero_extendhisi2         (rtx, rtx);
extern rtx        gen_zero_extendqisi2         (rtx, rtx);
extern rtx        gen_stack_push               (rtx);
extern rtx        gen_stack_pushm              (rtx, rtx);
extern rtx        gen_stack_pop                (rtx);
extern rtx        gen_stack_popm               (rtx, rtx);
extern rtx        gen_cstoresi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_abssi2                   (rtx, rtx);
extern rtx        gen_addsi3_internal          (rtx, rtx, rtx);
extern rtx        gen_adc_internal             (rtx, rtx, rtx);
extern rtx        gen_adddi3_internal          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_andsi3                   (rtx, rtx, rtx);
extern rtx        gen_bswapsi2                 (rtx, rtx);
extern rtx        gen_bswaphi2                 (rtx, rtx);
extern rtx        gen_divsi3                   (rtx, rtx, rtx);
extern rtx        gen_udivsi3                  (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                 (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                  (rtx, rtx, rtx);
extern rtx        gen_sminsi3                  (rtx, rtx, rtx);
extern rtx        gen_umaxhi3_u                (rtx, rtx, rtx);
extern rtx        gen_umaxqi3_u                (rtx, rtx, rtx);
extern rtx        gen_uminhi3_ur               (rtx, rtx, rtx);
extern rtx        gen_uminqi3_ur               (rtx, rtx, rtx);
extern rtx        gen_umaxhi3_ur               (rtx, rtx, rtx);
extern rtx        gen_umaxqi3_ur               (rtx, rtx, rtx);
extern rtx        gen_mulsi3                   (rtx, rtx, rtx);
extern rtx        gen_negsi2                   (rtx, rtx);
extern rtx        gen_one_cmplsi2              (rtx, rtx);
extern rtx        gen_iorsi3                   (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                  (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                  (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                  (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                  (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                  (rtx, rtx, rtx);
extern rtx        gen_ssaddsi3                 (rtx, rtx, rtx);
extern rtx        gen_subsi3                   (rtx, rtx, rtx);
extern rtx        gen_sbb_internal             (rtx, rtx, rtx);
extern rtx        gen_subdi3_internal          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_xorsi3                   (rtx, rtx, rtx);
extern rtx        gen_plussi3_zero_extendhi    (rtx, rtx, rtx);
extern rtx        gen_andsi3_zero_extendhi     (rtx, rtx, rtx);
extern rtx        gen_iorsi3_zero_extendhi     (rtx, rtx, rtx);
extern rtx        gen_xorsi3_zero_extendhi     (rtx, rtx, rtx);
extern rtx        gen_plussi3_sign_extendhi    (rtx, rtx, rtx);
extern rtx        gen_andsi3_sign_extendhi     (rtx, rtx, rtx);
extern rtx        gen_iorsi3_sign_extendhi     (rtx, rtx, rtx);
extern rtx        gen_xorsi3_sign_extendhi     (rtx, rtx, rtx);
extern rtx        gen_plussi3_zero_extendqi    (rtx, rtx, rtx);
extern rtx        gen_andsi3_zero_extendqi     (rtx, rtx, rtx);
extern rtx        gen_iorsi3_zero_extendqi     (rtx, rtx, rtx);
extern rtx        gen_xorsi3_zero_extendqi     (rtx, rtx, rtx);
extern rtx        gen_plussi3_sign_extendqi    (rtx, rtx, rtx);
extern rtx        gen_andsi3_sign_extendqi     (rtx, rtx, rtx);
extern rtx        gen_iorsi3_sign_extendqi     (rtx, rtx, rtx);
extern rtx        gen_xorsi3_sign_extendqi     (rtx, rtx, rtx);
extern rtx        gen_divsi3_zero_extendhi     (rtx, rtx, rtx);
extern rtx        gen_udivsi3_zero_extendhi    (rtx, rtx, rtx);
extern rtx        gen_minussi3_zero_extendhi   (rtx, rtx, rtx);
extern rtx        gen_divsi3_sign_extendhi     (rtx, rtx, rtx);
extern rtx        gen_udivsi3_sign_extendhi    (rtx, rtx, rtx);
extern rtx        gen_minussi3_sign_extendhi   (rtx, rtx, rtx);
extern rtx        gen_divsi3_zero_extendqi     (rtx, rtx, rtx);
extern rtx        gen_udivsi3_zero_extendqi    (rtx, rtx, rtx);
extern rtx        gen_minussi3_zero_extendqi   (rtx, rtx, rtx);
extern rtx        gen_divsi3_sign_extendqi     (rtx, rtx, rtx);
extern rtx        gen_udivsi3_sign_extendqi    (rtx, rtx, rtx);
extern rtx        gen_minussi3_sign_extendqi   (rtx, rtx, rtx);
extern rtx        gen_smaxsi3_zero_extendhi    (rtx, rtx, rtx);
extern rtx        gen_sminsi3_zero_extendhi    (rtx, rtx, rtx);
extern rtx        gen_multsi3_zero_extendhi    (rtx, rtx, rtx);
extern rtx        gen_smaxsi3_sign_extendhi    (rtx, rtx, rtx);
extern rtx        gen_sminsi3_sign_extendhi    (rtx, rtx, rtx);
extern rtx        gen_multsi3_sign_extendhi    (rtx, rtx, rtx);
extern rtx        gen_smaxsi3_zero_extendqi    (rtx, rtx, rtx);
extern rtx        gen_sminsi3_zero_extendqi    (rtx, rtx, rtx);
extern rtx        gen_multsi3_zero_extendqi    (rtx, rtx, rtx);
extern rtx        gen_smaxsi3_sign_extendqi    (rtx, rtx, rtx);
extern rtx        gen_sminsi3_sign_extendqi    (rtx, rtx, rtx);
extern rtx        gen_multsi3_sign_extendqi    (rtx, rtx, rtx);
extern rtx        gen_comparesi3_zero_extendhi (rtx, rtx);
extern rtx        gen_comparesi3_sign_extendhi (rtx, rtx);
extern rtx        gen_comparesi3_zero_extendqi (rtx, rtx);
extern rtx        gen_comparesi3_sign_extendqi (rtx, rtx);
extern rtx        gen_addsf3                   (rtx, rtx, rtx);
extern rtx        gen_divsf3                   (rtx, rtx, rtx);
extern rtx        gen_mulsf3                   (rtx, rtx, rtx);
extern rtx        gen_subsf3                   (rtx, rtx, rtx);
extern rtx        gen_fix_truncsfsi2           (rtx, rtx);
extern rtx        gen_floatsisf2               (rtx, rtx);
extern rtx        gen_bitset                   (rtx, rtx, rtx);
extern rtx        gen_bitset_in_memory         (rtx, rtx);
extern rtx        gen_bitinvert                (rtx, rtx, rtx);
extern rtx        gen_bitinvert_in_memory      (rtx, rtx);
extern rtx        gen_bitclr                   (rtx, rtx, rtx);
extern rtx        gen_bitclr_in_memory         (rtx, rtx);
extern rtx        gen_rx_insv_reg              (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setsi (rtx, rtx, rtx);
extern rtx        gen_xchg_memqi               (rtx, rtx, rtx);
extern rtx        gen_xchg_memhi               (rtx, rtx, rtx);
extern rtx        gen_rx_movstr                (void);
extern rtx        gen_rx_strend                (rtx, rtx);
extern rtx        gen_rx_cpymem                (void);
extern rtx        gen_rx_setmem                (void);
extern rtx        gen_rx_cmpstrn               (rtx, rtx, rtx);
extern rtx        gen_machi                    (rtx, rtx);
extern rtx        gen_maclo                    (rtx, rtx);
extern rtx        gen_mulhi                    (rtx, rtx);
extern rtx        gen_mullo                    (rtx, rtx);
extern rtx        gen_mvfachi                  (rtx);
extern rtx        gen_mvfacmi                  (rtx);
extern rtx        gen_mvtachi                  (rtx);
extern rtx        gen_mvtaclo                  (rtx);
extern rtx        gen_racw                     (rtx);
extern rtx        gen_rmpa                     (void);
extern rtx        gen_revw                     (rtx, rtx);
extern rtx        gen_lrintsf2                 (rtx, rtx);
extern rtx        gen_clrpsw                   (rtx);
extern rtx        gen_setpsw                   (rtx);
extern rtx        gen_mvfc                     (rtx, rtx);
extern rtx        gen_mvtc                     (rtx, rtx);
extern rtx        gen_mvtipl                   (rtx);
extern rtx        gen_brk                      (void);
extern rtx        gen_int                      (rtx);
extern rtx        gen_wait                     (void);
extern rtx        gen_mvfcp                    (rtx, rtx, rtx);
extern rtx        gen_nop                      (void);
extern rtx        gen_movdi                    (rtx, rtx);
extern rtx        gen_movdf                    (rtx, rtx);
extern rtx        gen_cbranchsi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4               (rtx, rtx, rtx, rtx);
extern rtx        gen_return                   (void);
extern rtx        gen_call                     (rtx, rtx);
extern rtx        gen_call_value               (rtx, rtx, rtx);
extern rtx        gen_sibcall                  (rtx, rtx);
extern rtx        gen_sibcall_value            (rtx, rtx, rtx);
extern rtx        gen_prologue                 (void);
extern rtx        gen_epilogue                 (void);
extern rtx        gen_sibcall_epilogue         (void);
extern rtx        gen_movsf                    (rtx, rtx);
extern rtx        gen_movsi                    (rtx, rtx);
extern rtx        gen_movhi                    (rtx, rtx);
extern rtx        gen_movqi                    (rtx, rtx);
extern rtx        gen_movsicc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3                   (rtx, rtx, rtx);
extern rtx        gen_addsi3_flags             (rtx, rtx, rtx);
extern rtx        gen_adddi3                   (rtx, rtx, rtx);
extern rtx        gen_umaxhi3                  (rtx, rtx, rtx);
extern rtx        gen_umaxqi3                  (rtx, rtx, rtx);
extern rtx        gen_uminhi3                  (rtx, rtx, rtx);
extern rtx        gen_uminqi3                  (rtx, rtx, rtx);
extern rtx        gen_subsi3_flags             (rtx, rtx, rtx);
extern rtx        gen_subdi3                   (rtx, rtx, rtx);
extern rtx        gen_insv                     (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangeqi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangehi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandsi      (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchsi        (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchsi       (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchsi      (rtx, rtx, rtx, rtx);
extern rtx        gen_movstr                   (rtx, rtx, rtx);
extern rtx        gen_cpymemsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_setmemsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpstrnsi                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmpstrsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_pid_addr                 (rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
