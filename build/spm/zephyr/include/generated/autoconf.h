#define CONFIG_PM_PARTITION_SIZE_PROVISION 0x280
#define CONFIG_PM_PARTITION_SIZE_B0_IMAGE 0x8000
#define CONFIG_SB_VALIDATION_INFO_MAGIC 0x86518483
#define CONFIG_SB_VALIDATION_POINTER_MAGIC 0x6919b47e
#define CONFIG_SB_VALIDATION_INFO_CRYPTO_ID 1
#define CONFIG_SB_VALIDATION_INFO_VERSION 2
#define CONFIG_SB_VALIDATION_METADATA_OFFSET 0
#define CONFIG_SB_VALIDATE_FW_SIGNATURE 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_IS_SPM 1
#define CONFIG_PM_PARTITION_SIZE_SPM 0xc000
#define CONFIG_SPM_SECURE_SERVICES 1
#define CONFIG_SPM_SERVICE_RNG 1
#define CONFIG_SPM_SERVICE_READ 1
#define CONFIG_SPM_SERVICE_FIND_FIRMWARE_INFO 1
#define CONFIG_SPM_NRF_CLOCK_NS 1
#define CONFIG_SPM_NRF_RTC0_NS 1
#define CONFIG_SPM_NRF_RTC1_NS 1
#define CONFIG_SPM_NRF_IPC_NS 1
#define CONFIG_SPM_NRF_NVMC_NS 1
#define CONFIG_SPM_NRF_VMC_NS 1
#define CONFIG_SPM_NRF_P0_NS 1
#define CONFIG_SPM_NRF_GPIOTE1_NS 1
#define CONFIG_SPM_NRF_UARTE1_NS 1
#define CONFIG_SPM_NRF_EGU1_NS 1
#define CONFIG_SPM_NRF_EGU2_NS 1
#define CONFIG_SPM_NRF_FPU_NS 1
#define CONFIG_SPM_NRF_TWIM2_NS 1
#define CONFIG_SPM_NRF_SPIM3_NS 1
#define CONFIG_SPM_NRF_TIMER0_NS 1
#define CONFIG_SPM_NRF_TIMER1_NS 1
#define CONFIG_SPM_NRF_TIMER2_NS 1
#define CONFIG_SPM_NRF_SAADC_NS 1
#define CONFIG_SPM_NRF_PWM0_NS 1
#define CONFIG_SPM_NRF_PWM1_NS 1
#define CONFIG_SPM_NRF_PWM2_NS 1
#define CONFIG_SPM_NRF_PWM3_NS 1
#define CONFIG_SPM_NRF_REGULATORS_NS 1
#define CONFIG_SPM_NRF_WDT_NS 1
#define CONFIG_SPM_NRF_DPPIC_NS 1
#define CONFIG_SPM_NRF_DPPIC_PERM_MASK 0x00000000
#define CONFIG_ARM_ENTRY_VENEERS_LIB_NAME "libspmsecureentries.a"
#define CONFIG_FW_INFO 1
#define CONFIG_FW_INFO_OFFSET 0x200
#define CONFIG_FW_INFO_FIRMWARE_VERSION 1
#define CONFIG_FW_INFO_MAGIC_COMMON 0x281ee6de
#define CONFIG_FW_INFO_MAGIC_FIRMWARE_INFO 0x8fcebb4c
#define CONFIG_FW_INFO_MAGIC_EXT_API 0xb845acea
#define CONFIG_FW_INFO_HARDWARE_ID 91
#define CONFIG_FW_INFO_VERSION 2
#define CONFIG_FW_INFO_CRYPTO_ID 0
#define CONFIG_FW_INFO_MAGIC_COMPATIBILITY_ID 0
#define CONFIG_FW_INFO_MAGIC_LEN 12
#define CONFIG_FW_INFO_VALID_VAL 0x9102FFFF
#define CONFIG_EXT_API_PROVIDE_EXT_API_UNUSED 1
#define CONFIG_MPSL_THREAD_COOP_PRIO 8
#define CONFIG_MPSL_SIGNAL_STACK_SIZE 1024
#define CONFIG_MPSL_TIMESLOT_SESSION_COUNT 0
#define CONFIG_NRF_SPU_FLASH_REGION_SIZE 0x8000
#define CONFIG_FPROTECT_BLOCK_SIZE 0x8000
#define CONFIG_RESET_ON_FATAL_ERROR 1
#define CONFIG_HW_CC310 1
#define CONFIG_HW_CC310_NAME "HW_CC310_0"
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL 1
#define CONFIG_BOOT_SIGNATURE_KEY_FILE "root-rsa-2048.pem"
#define CONFIG_DT_FLASH_WRITE_BLOCK_SIZE 4
#define CONFIG_NRFXLIB_CRYPTO 1
#define CONFIG_NRF_CC310_PLATFORM 1
#define CONFIG_NORDIC_SECURITY_BACKEND 1
#define CONFIG_MBEDTLS_CFG_FILE "nrf-config.h"
#define CONFIG_GENERATE_MBEDTLS_CFG_FILE 1
#define CONFIG_CC310_BACKEND 1
#define CONFIG_NRF_SECURITY_RNG 1
#define CONFIG_MBEDTLS_CTR_DRBG_C 1
#define CONFIG_MBEDTLS_HMAC_DRBG_C 1
#define CONFIG_MBEDTLS_AES_ALT 1
#define CONFIG_MBEDTLS_AES_C 1
#define CONFIG_CC310_MBEDTLS_CIPHER_MODE_CBC 1
#define CONFIG_MBEDTLS_CIPHER_MODE_CBC 1
#define CONFIG_MBEDTLS_CIPHER_PADDING_PKCS7 1
#define CONFIG_MBEDTLS_CIPHER_PADDING_ONE_AND_ZEROS 1
#define CONFIG_MBEDTLS_CIPHER_PADDING_ZEROS_AND_LEN 1
#define CONFIG_MBEDTLS_CIPHER_PADDING_ZEROS 1
#define CONFIG_CC310_MBEDTLS_CIPHER_MODE_CTR 1
#define CONFIG_MBEDTLS_CIPHER_MODE_CTR 1
#define CONFIG_MBEDTLS_CMAC_ALT 1
#define CONFIG_MBEDTLS_CMAC_C 1
#define CONFIG_MBEDTLS_CCM_ALT 1
#define CONFIG_MBEDTLS_CCM_C 1
#define CONFIG_MBEDTLS_CHACHA_ALT 1
#define CONFIG_MBEDTLS_CHACHA20_C 1
#define CONFIG_MBEDTLS_POLY1305_ALT 1
#define CONFIG_MBEDTLS_POLY1305_C 1
#define CONFIG_MBEDTLS_CHACHAPOLY_ALT 1
#define CONFIG_MBEDTLS_CHACHAPOLY_C 1
#define CONFIG_MBEDTLS_DHM_ALT 1
#define CONFIG_MBEDTLS_DHM_C 1
#define CONFIG_MBEDTLS_ECP_ALT 1
#define CONFIG_CC310_MBEDTLS_ECP_C 1
#define CONFIG_MBEDTLS_ECP_C 1
#define CONFIG_MBEDTLS_ECDH_GEN_PUBLIC_ALT 1
#define CONFIG_MBEDTLS_ECDH_COMPUTE_SHARED_ALT 1
#define CONFIG_CC310_MBEDTLS_ECDH_C 1
#define CONFIG_MBEDTLS_ECDH_C 1
#define CONFIG_MBEDTLS_ECDSA_GENKEY_ALT 1
#define CONFIG_MBEDTLS_ECDSA_SIGN_ALT 1
#define CONFIG_MBEDTLS_ECDSA_VERIFY_ALT 1
#define CONFIG_CC310_MBEDTLS_ECDSA_C 1
#define CONFIG_MBEDTLS_ECDSA_C 1
#define CONFIG_CC310_MBEDTLS_ECJPAKE_C 1
#define CONFIG_MBEDTLS_ECJPAKE_C 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED 1
#define CONFIG_MBEDTLS_RSA_ALT 1
#define CONFIG_MBEDTLS_RSA_C 1
#define CONFIG_MBEDTLS_PKCS1_V21 1
#define CONFIG_MBEDTLS_SHA1_ALT 1
#define CONFIG_MBEDTLS_SHA1_C 1
#define CONFIG_MBEDTLS_SHA256_ALT 1
#define CONFIG_MBEDTLS_SHA256_C 1
#define CONFIG_MBEDTLS_SHA512_C 1
#define CONFIG_APP_LINK_WITH_MBEDTLS_INCLUDES 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_HAS_NRFX 1
#define CONFIG_NRFX_NVMC 1
#define CONFIG_BOARD "nrf9160dk_nrf9160"
#define CONFIG_FLASH_LOAD_SIZE 0x30000
#define CONFIG_FLASH_LOAD_OFFSET 0x0
#define CONFIG_SOC "nRF9160_SICA"
#define CONFIG_SOC_SERIES "nrf91"
#define CONFIG_NUM_IRQS 65
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_SYS_POWER_MANAGEMENT 1
#define CONFIG_HAS_SYS_POWER_STATE_DEEP_SLEEP_1 1
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 32768
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_FPU 1
#define CONFIG_TEXT_SECTION_OFFSET 0x0
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x0
#define CONFIG_SRAM_SIZE 64
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_SOC_GECKO_EMU 1
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_BOARD_NRF9160DK_NRF9160 1
#define CONFIG_SOC_SERIES_NRF91X 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_CPU_HAS_NRF_IDAU 1
#define CONFIG_NRF_SPU_RAM_REGION_SIZE 0x2000
#define CONFIG_SOC_FAMILY "nordic_nrf"
#define CONFIG_SOC_FAMILY_NRF 1
#define CONFIG_HAS_HW_NRF_CC310 1
#define CONFIG_HAS_HW_NRF_CLOCK 1
#define CONFIG_HAS_HW_NRF_DPPIC 1
#define CONFIG_HAS_HW_NRF_EGU0 1
#define CONFIG_HAS_HW_NRF_EGU1 1
#define CONFIG_HAS_HW_NRF_EGU2 1
#define CONFIG_HAS_HW_NRF_EGU3 1
#define CONFIG_HAS_HW_NRF_EGU4 1
#define CONFIG_HAS_HW_NRF_EGU5 1
#define CONFIG_HAS_HW_NRF_GPIO0 1
#define CONFIG_HAS_HW_NRF_GPIOTE 1
#define CONFIG_HAS_HW_NRF_I2S 1
#define CONFIG_HAS_HW_NRF_IPC 1
#define CONFIG_HAS_HW_NRF_NVMC_PE 1
#define CONFIG_HAS_HW_NRF_PDM 1
#define CONFIG_HAS_HW_NRF_POWER 1
#define CONFIG_HAS_HW_NRF_PWM0 1
#define CONFIG_HAS_HW_NRF_PWM1 1
#define CONFIG_HAS_HW_NRF_PWM2 1
#define CONFIG_HAS_HW_NRF_PWM3 1
#define CONFIG_HAS_HW_NRF_RTC0 1
#define CONFIG_HAS_HW_NRF_RTC1 1
#define CONFIG_HAS_HW_NRF_SAADC 1
#define CONFIG_HAS_HW_NRF_SPIM0 1
#define CONFIG_HAS_HW_NRF_SPIM1 1
#define CONFIG_HAS_HW_NRF_SPIM2 1
#define CONFIG_HAS_HW_NRF_SPIM3 1
#define CONFIG_HAS_HW_NRF_SPIS0 1
#define CONFIG_HAS_HW_NRF_SPIS1 1
#define CONFIG_HAS_HW_NRF_SPIS2 1
#define CONFIG_HAS_HW_NRF_SPIS3 1
#define CONFIG_HAS_HW_NRF_SPU 1
#define CONFIG_HAS_HW_NRF_TIMER0 1
#define CONFIG_HAS_HW_NRF_TIMER1 1
#define CONFIG_HAS_HW_NRF_TIMER2 1
#define CONFIG_HAS_HW_NRF_TWIM0 1
#define CONFIG_HAS_HW_NRF_TWIM1 1
#define CONFIG_HAS_HW_NRF_TWIM2 1
#define CONFIG_HAS_HW_NRF_TWIM3 1
#define CONFIG_HAS_HW_NRF_TWIS0 1
#define CONFIG_HAS_HW_NRF_TWIS1 1
#define CONFIG_HAS_HW_NRF_TWIS2 1
#define CONFIG_HAS_HW_NRF_TWIS3 1
#define CONFIG_HAS_HW_NRF_UARTE0 1
#define CONFIG_HAS_HW_NRF_UARTE1 1
#define CONFIG_HAS_HW_NRF_UARTE2 1
#define CONFIG_HAS_HW_NRF_UARTE3 1
#define CONFIG_HAS_HW_NRF_WDT 1
#define CONFIG_NRF_ENABLE_ICACHE 1
#define CONFIG_SOC_NRF9160 1
#define CONFIG_SOC_NRF9160_SICA 1
#define CONFIG_SOC_COMPATIBLE_NRF 1
#define CONFIG_ARCH "arm"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_PLATFORM_SPECIFIC_INIT 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_ARM_SECURE_FIRMWARE 1
#define CONFIG_FP_HARDABI 1
#define CONFIG_CPU_CORTEX_M33 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_SPLIM 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_CPU_CORTEX_M_HAS_CMSE 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_SE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_ARMV8_M_DSP 1
#define CONFIG_XIP 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_ARM_TRUSTZONE_M 1
#define CONFIG_ARM_SECURE_BUSFAULT_HARDFAULT_NMI 1
#define CONFIG_ARM_FIRMWARE_HAS_SECURE_ENTRY_FUNCS 1
#define CONFIG_ARM_NSC_REGION_BASE_ADDRESS 0x0
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_TEST_EXTRA_STACKSIZE 0
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_TRUSTED_EXECUTION_SECURE 1
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 0
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_TRUSTED_EXECUTION 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_CPU_HAS_TEE 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MEMORY_PROTECTION 1
#define CONFIG_MPU_REQUIRES_NON_OVERLAPPING_REGIONS 1
#define CONFIG_MPU_GAP_FILLING 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING 0
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_ERRNO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_NUM_PIPE_ASYNC_MSGS 10
#define CONFIG_MEM_POOL_HEAP_BACKEND 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_IDLE 1
#define CONFIG_TICKLESS_IDLE_THRESH 3
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_SYS_PM_POLICY_RESIDENCY 1
#define CONFIG_SYS_PM_POLICY_RESIDENCY_DEFAULT 1
#define CONFIG_SYS_PM_MIN_RESIDENCY_DEEP_SLEEP_1 60000
#define CONFIG_HAS_DTS 1
#define CONFIG_UART_CONSOLE_ON_DEV_NAME "UART_0"
#define CONFIG_CONSOLE 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_UART_CONSOLE 1
#define CONFIG_UART_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_MUX_RX_STACK_SIZE 512
#define CONFIG_UART_MUX_RX_PRIORITY 7
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_ASYNC 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_NRFX 1
#define CONFIG_UART_0_NRF_UARTE 1
#define CONFIG_UART_0_NRF_TX_BUFFER_SIZE 32
#define CONFIG_UART_1_NRF_UARTE 1
#define CONFIG_NRF_UARTE_PERIPHERAL 1
#define CONFIG_SYSTEM_CLOCK_DISABLE 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_CLOCK_CONTROL_NRF 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_20PPM 1
#define CONFIG_MINIMAL_LIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_MINIMAL_LIBC_MALLOC 1
#define CONFIG_MINIMAL_LIBC_MALLOC_ARENA_SIZE 0
#define CONFIG_MINIMAL_LIBC_CALLOC 1
#define CONFIG_MINIMAL_LIBC_REALLOCARRAY 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_TEST_ARM_CORTEX_M 1
#define CONFIG_TOOLCHAIN_GNUARMEMB 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_DISASSEMBLY 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_REBOOT 1
#define CONFIG_COMPAT_INCLUDES 1
