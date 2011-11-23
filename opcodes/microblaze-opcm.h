/* microblaze-opcm.h -- Header used in microblaze-opc.h

   Copyright 2009 Free Software Foundation, Inc.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this file; see the file COPYING.  If not, write to the
   Free Software Foundation, 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */


#ifndef MICROBLAZE_OPCM
#define MICROBLAZE_OPCM

#define INST_WORD_SIZE 4

/* Gen purpose regs go from 0 to 31.  */
/* Mask is reg num - max_reg_num, ie reg_num - 32 in this case.  */

#define REG_PC_MASK	0x0000
#define REG_MSR_MASK	0x0001
#define REG_EAR_MASK	0x0003
#define REG_ESR_MASK	0x0005
#define REG_FSR_MASK	0x0007
#define REG_BTR_MASK	0x000b
#define REG_EDR_MASK	0x000d
#define REG_SLR_MASK	0x0800
#define REG_SHR_MASK	0x0802
#define REG_PID_MASK	0x1000
#define REG_ZPR_MASK	0x1001
#define REG_TLBX_MASK	0x1002
#define REG_TLBLO_MASK	0x1003
#define REG_TLBHI_MASK	0x1004
#define REG_TLBSX_MASK	0x1005
#define REG_PVR_MASK	0x2000


#define MIN_REGNUM 0
#define MAX_REGNUM 31

#define MIN_PVR_REGNUM 0
#define MAX_PVR_REGNUM 15

#define REG_PC  32 /* PC.  */
#define REG_MSR 33 /* Machine status reg.  */
#define REG_EAR 35 /* Exception reg.  */
#define REG_ESR 37 /* Exception reg.  */
#define REG_FSR 39 /* FPU Status reg.  */
#define REG_BTR 43 /* Branch Target reg.  */
#define REG_EDR 45 /* Exception reg.  */
#define REG_SHR 50 /* Stack High reg.  */
#define REG_SLR 51 /* Stack Low reg.  */
#define REG_PVR   0xA000 /* Program Verification reg.  */
#define REG_PID   0x9000 /* MMU: Process ID reg.  */
#define REG_ZPR   0x9001 /* MMU: Zone Protect reg.  */
#define REG_TLBX  0x9002 /* MMU: TLB Index reg.  */
#define REG_TLBLO 0x9003 /* MMU: TLB Low reg.  */
#define REG_TLBHI 0x9004 /* MMU: TLB High reg.  */
#define REG_TLBSX 0x9005 /* MMU: TLB Search Index reg.  */

/* Alternate names for gen purpose regs.  */
#define REG_SP  1 /* stack pointer.  */
#define REG_ROSDP 2 /* read-only small data pointer.  */
#define REG_RWSDP 13 /* read-write small data pointer.  */

/* Assembler Register - Used in Delay Slot Optimization.  */
#define REG_AS    18
#define REG_ZERO  0

#define RD_LOW  21 /* Low bit for RD.  */
#define RA_LOW  16 /* Low bit for RA.  */
#define RB_LOW  11 /* Low bit for RB.  */
#define IMM_LOW  0 /* Low bit for immediate.  */
#define IMM_MBAR 21 /* low bit for mbar instruction.  */

#define RD_MASK 0x03E00000
#define RA_MASK 0x001F0000
#define RB_MASK 0x0000F800
#define IMM_MASK 0x0000FFFF

/* MTS/MFS */
#define IMM14_MASK 0x00003FFF

/* Imm mask for barrel shifts.  */
#define IMM5_MASK 0x0000001F

/* Imm mask for mbar.  */
#define IMM5_MBAR_MASK 0x03E00000

/* FSL imm mask for get, put instructions.  */
#define  RFSL_MASK 0x000000F

/* Imm mask for msrset, msrclr instructions.  */
#define  IMM15_MASK 0x00007FFF

#endif /* MICROBLAZE-OPCM */
