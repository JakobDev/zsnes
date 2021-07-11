#include "c_regsw.h"
#include "../asm_call.h"
#include "../chips/7110proc.h"
#include "../chips/c_sa1regs.h"
#include "../chips/c_sfxproc.h"
#include "../gblvars.h"
#include "../initc.h"
#include "../macros.h"
#include "../ui.h"
#include "regsw.h"

void initregw(void)
{
    // Fill register pointer with invalid register accesses
    for (eop** i = regptwa; i != endof(regptwa); ++i)
        *i = regINVALIDw;

    // Set all valid register accesses
    REGPTW(0x2100) = reg2100w;
    REGPTW(0x2101) = reg2101w;
    REGPTW(0x2102) = reg2102w;
    REGPTW(0x2103) = reg2103w;
    REGPTW(0x2104) = reg2104w;
    REGPTW(0x2105) = reg2105w;
    REGPTW(0x2106) = reg2106w;
    REGPTW(0x2107) = reg2107w;
    REGPTW(0x2108) = reg2108w;
    REGPTW(0x2109) = reg2109w;
    REGPTW(0x210A) = reg210Aw;
    REGPTW(0x210B) = reg210Bw;
    REGPTW(0x210C) = reg210Cw;
    REGPTW(0x210D) = reg210Dw;
    REGPTW(0x210E) = reg210Ew;
    REGPTW(0x210F) = reg210Fw;
    REGPTW(0x2110) = reg2110w;
    REGPTW(0x2111) = reg2111w;
    REGPTW(0x2112) = reg2112w;
    REGPTW(0x2113) = reg2113w;
    REGPTW(0x2114) = reg2114w;
    REGPTW(0x2115) = reg2115w;
    REGPTW(0x2116) = reg2116w;
    REGPTW(0x2117) = reg2117w;
    REGPTW(0x2118) = reg2118;
    REGPTW(0x2119) = reg2119inc;
    REGPTW(0x211A) = reg211Aw;
    REGPTW(0x211B) = reg211Bw;
    REGPTW(0x211C) = reg211Cw;
    REGPTW(0x211D) = reg211Dw;
    REGPTW(0x211E) = reg211Ew;
    REGPTW(0x211F) = reg211Fw;
    REGPTW(0x2120) = reg2120w;
    REGPTW(0x2121) = reg2121w;
    REGPTW(0x2122) = reg2122w;
    REGPTW(0x2123) = reg2123w;
    REGPTW(0x2124) = reg2124w;
    REGPTW(0x2125) = reg2125w;
    REGPTW(0x2126) = reg2126w;
    REGPTW(0x2127) = reg2127w;
    REGPTW(0x2128) = reg2128w;
    REGPTW(0x2129) = reg2129w;
    REGPTW(0x212A) = reg212Aw;
    REGPTW(0x212B) = reg212Bw;
    REGPTW(0x212C) = reg212Cw;
    REGPTW(0x212D) = reg212Dw;
    REGPTW(0x212E) = reg212Ew;
    REGPTW(0x212F) = reg212Fw;
    REGPTW(0x2130) = reg2130w;
    REGPTW(0x2131) = reg2131w;
    REGPTW(0x2132) = reg2132w;
    REGPTW(0x2133) = reg2133w;
    REGPTW(0x2140) = reg2140w;
    REGPTW(0x2141) = reg2141w;
    REGPTW(0x2142) = reg2142w;
    REGPTW(0x2143) = reg2143w;
    REGPTW(0x2144) = reg2140w;
    REGPTW(0x2145) = reg2141w;
    REGPTW(0x2146) = reg2142w;
    REGPTW(0x2147) = reg2143w;
    REGPTW(0x2148) = reg2140w;
    REGPTW(0x2149) = reg2141w;
    REGPTW(0x214A) = reg2142w;
    REGPTW(0x214B) = reg2143w;
    REGPTW(0x214C) = reg2140w;
    REGPTW(0x214D) = reg2141w;
    REGPTW(0x214E) = reg2142w;
    REGPTW(0x214F) = reg2143w;
    REGPTW(0x2150) = reg2140w;
    REGPTW(0x2151) = reg2141w;
    REGPTW(0x2152) = reg2142w;
    REGPTW(0x2153) = reg2143w;
    REGPTW(0x2154) = reg2140w;
    REGPTW(0x2155) = reg2141w;
    REGPTW(0x2156) = reg2142w;
    REGPTW(0x2157) = reg2143w;
    REGPTW(0x2158) = reg2140w;
    REGPTW(0x2159) = reg2141w;
    REGPTW(0x215A) = reg2142w;
    REGPTW(0x215B) = reg2143w;
    REGPTW(0x215C) = reg2140w;
    REGPTW(0x215D) = reg2141w;
    REGPTW(0x215E) = reg2142w;
    REGPTW(0x215F) = reg2143w;
    REGPTW(0x2160) = reg2140w;
    REGPTW(0x2161) = reg2141w;
    REGPTW(0x2162) = reg2142w;
    REGPTW(0x2163) = reg2143w;
    REGPTW(0x2164) = reg2140w;
    REGPTW(0x2165) = reg2141w;
    REGPTW(0x2166) = reg2142w;
    REGPTW(0x2167) = reg2143w;
    REGPTW(0x2168) = reg2140w;
    REGPTW(0x2169) = reg2141w;
    REGPTW(0x216A) = reg2142w;
    REGPTW(0x216B) = reg2143w;
    REGPTW(0x216C) = reg2140w;
    REGPTW(0x216D) = reg2141w;
    REGPTW(0x216E) = reg2142w;
    REGPTW(0x216F) = reg2143w;
    REGPTW(0x2170) = reg2140w;
    REGPTW(0x2171) = reg2141w;
    REGPTW(0x2172) = reg2142w;
    REGPTW(0x2173) = reg2143w;
    REGPTW(0x2174) = reg2140w;
    REGPTW(0x2175) = reg2141w;
    REGPTW(0x2176) = reg2142w;
    REGPTW(0x2177) = reg2143w;
    REGPTW(0x2178) = reg2140w;
    REGPTW(0x2179) = reg2141w;
    REGPTW(0x217A) = reg2142w;
    REGPTW(0x217B) = reg2143w;
    REGPTW(0x217C) = reg2140w;
    REGPTW(0x217D) = reg2141w;
    REGPTW(0x217E) = reg2142w;
    REGPTW(0x217F) = reg2143w;
    REGPTW(0x2180) = reg2180w;
    REGPTW(0x2181) = reg2181w;
    REGPTW(0x2182) = reg2182w;
    REGPTW(0x2183) = reg2183w;
    REGPTW(0x4016) = reg4016w;
    REGPTW(0x4200) = reg4200w;
    REGPTW(0x4201) = reg4201w;
    REGPTW(0x4202) = reg4202w;
    REGPTW(0x4203) = reg4203w;
    REGPTW(0x4204) = reg4204w;
    REGPTW(0x4205) = reg4205w;
    REGPTW(0x4206) = reg4206w;
    REGPTW(0x4207) = reg4207w;
    REGPTW(0x4208) = reg4208w;
    REGPTW(0x4209) = reg4209w;
    REGPTW(0x420A) = reg420Aw;
    REGPTW(0x420B) = reg420Bw;
    REGPTW(0x420C) = reg420Cw;
    REGPTW(0x420D) = reg420Dw;
    REGPTW(0x4300) = reg43X0w;
    REGPTW(0x4301) = reg43X1w;
    REGPTW(0x4302) = reg43x2w;
    REGPTW(0x4303) = reg43x3w;
    REGPTW(0x4304) = reg43x4w;
    REGPTW(0x4305) = reg43x5w;
    REGPTW(0x4306) = reg43x6w;
    REGPTW(0x4307) = reg43x7w;
    REGPTW(0x4308) = reg43x8w;
    REGPTW(0x4309) = reg43x9w;
    REGPTW(0x430A) = reg43XAw;
    REGPTW(0x430B) = reg43XBw;
    REGPTW(0x430F) = reg43XBw;
    REGPTW(0x4310) = reg43X0w;
    REGPTW(0x4311) = reg43X1w;
    REGPTW(0x4312) = reg43x2w;
    REGPTW(0x4313) = reg43x3w;
    REGPTW(0x4314) = reg43x4w;
    REGPTW(0x4315) = reg43x5w;
    REGPTW(0x4316) = reg43x6w;
    REGPTW(0x4317) = reg43x7w;
    REGPTW(0x4318) = reg43x8w;
    REGPTW(0x4319) = reg43x9w;
    REGPTW(0x431A) = reg43XAw;
    REGPTW(0x431B) = reg43XBw;
    REGPTW(0x431F) = reg43XBw;
    REGPTW(0x4320) = reg43X0w;
    REGPTW(0x4321) = reg43X1w;
    REGPTW(0x4322) = reg43x2w;
    REGPTW(0x4323) = reg43x3w;
    REGPTW(0x4324) = reg43x4w;
    REGPTW(0x4325) = reg43x5w;
    REGPTW(0x4326) = reg43x6w;
    REGPTW(0x4327) = reg43x7w;
    REGPTW(0x4328) = reg43x8w;
    REGPTW(0x4329) = reg43x9w;
    REGPTW(0x432A) = reg43XAw;
    REGPTW(0x432B) = reg43XBw;
    REGPTW(0x432F) = reg43XBw;
    REGPTW(0x4330) = reg43X0w;
    REGPTW(0x4331) = reg43X1w;
    REGPTW(0x4332) = reg43x2w;
    REGPTW(0x4333) = reg43x3w;
    REGPTW(0x4334) = reg43x4w;
    REGPTW(0x4335) = reg43x5w;
    REGPTW(0x4336) = reg43x6w;
    REGPTW(0x4337) = reg43x7w;
    REGPTW(0x4338) = reg43x8w;
    REGPTW(0x4339) = reg43x9w;
    REGPTW(0x433A) = reg43XAw;
    REGPTW(0x433B) = reg43XBw;
    REGPTW(0x433F) = reg43XBw;
    REGPTW(0x4340) = reg43X0w;
    REGPTW(0x4341) = reg43X1w;
    REGPTW(0x4342) = reg43x2w;
    REGPTW(0x4343) = reg43x3w;
    REGPTW(0x4344) = reg43x4w;
    REGPTW(0x4345) = reg43x5w;
    REGPTW(0x4346) = reg43x6w;
    REGPTW(0x4347) = reg43x7w;
    REGPTW(0x4348) = reg43x8w;
    REGPTW(0x4349) = reg43x9w;
    REGPTW(0x434A) = reg43XAw;
    REGPTW(0x434B) = reg43XBw;
    REGPTW(0x434F) = reg43XBw;
    REGPTW(0x4350) = reg43X0w;
    REGPTW(0x4351) = reg43X1w;
    REGPTW(0x4352) = reg43x2w;
    REGPTW(0x4353) = reg43x3w;
    REGPTW(0x4354) = reg43x4w;
    REGPTW(0x4355) = reg43x5w;
    REGPTW(0x4356) = reg43x6w;
    REGPTW(0x4357) = reg43x7w;
    REGPTW(0x4358) = reg43x8w;
    REGPTW(0x4359) = reg43x9w;
    REGPTW(0x435A) = reg43XAw;
    REGPTW(0x435B) = reg43XBw;
    REGPTW(0x435F) = reg43XBw;
    REGPTW(0x4360) = reg43X0w;
    REGPTW(0x4361) = reg43X1w;
    REGPTW(0x4362) = reg43x2w;
    REGPTW(0x4363) = reg43x3w;
    REGPTW(0x4364) = reg43x4w;
    REGPTW(0x4365) = reg43x5w;
    REGPTW(0x4366) = reg43x6w;
    REGPTW(0x4367) = reg43x7w;
    REGPTW(0x4368) = reg43x8w;
    REGPTW(0x4369) = reg43x9w;
    REGPTW(0x436A) = reg43XAw;
    REGPTW(0x436B) = reg43XBw;
    REGPTW(0x436F) = reg43XBw;
    REGPTW(0x4370) = reg43X0w;
    REGPTW(0x4371) = reg43X1w;
    REGPTW(0x4372) = reg43x2w;
    REGPTW(0x4373) = reg43x3w;
    REGPTW(0x4374) = reg43x4w;
    REGPTW(0x4375) = reg43x5w;
    REGPTW(0x4376) = reg43x6w;
    REGPTW(0x4377) = reg43x7w;
    REGPTW(0x4378) = reg43x8w;
    REGPTW(0x4379) = reg43x9w;
    REGPTW(0x437A) = reg43XAw;
    REGPTW(0x437B) = reg43XBw;
    REGPTW(0x437F) = reg43XBw;

    if (SFXEnable)
        initsfxregsw();
    if (SA1Enable)
        initSA1regsw();
    if (SDD1Enable)
        SDD1Reset();
    if (SPC7110Enable)
        asm_call(SPC7110Reset);
    if (RTCEnable)
        RTCReset2();
}
