/*
 * SSD_private.h
 *
 *  Created on: Feb 4, 2016
 *      Author: Ahmed
 */

#ifndef _SSD_PRIVATE_H_
#define _SSD_PRIVATE_H_
/***********************************************************************/
/**************************Common Macros********************************/
/***********************************************************************/
#define SSD_u8SEGON_COMMAND         DIO_u8LOW
#define SSD_u8SEGOFF_COMMAND        DIO_u8HIGH
#define SSD_u8SEGON_COMMCATH        DIO_u8HIGH
#define SSD_u8SEGOFF_COMMCATH       DIO_u8LOW
#define SSD_u8NUM_TYPES             2
#define SSD_u8NUM_STATES            2
#define SSD_u8NUM_DISPLAYED_NUMBERS 10
#define SSD_u8SEGA                  0
#define SSD_u8SEGB                  1
#define SSD_u8SEGC                  2
#define SSD_u8SEGD                  3
#define SSD_u8SEGE                  4
#define SSD_u8SEGF                  5
#define SSD_u8SEGG                  6
#define SSD_u8SEGCOMMON             7
/***********************************************************************/
/*****************************Arrays************************************/
/***********************************************************************/
/*Comment!:Look up table of numbers(0~9) for common anode and common cathode */
/*Range!  : First cell range [SSD_u8COMMAND-SSD_u8COMMCATH]*/
/*Range!  : Second cell range [SSD_u8NUM0~SSD_u8NUM9]*/
/*Range!  : Third cell range [SSD_u8DISPX_SEGA-SSD_u8DISPX_SEGG]*/
const static u8 SSD_u8Numbers_Array[SSD_u8NUM_TYPES][SSD_u8NUM_DISPLAYED_NUMBERS][7] =
		{ { { SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGOFF_COMMAND }, { SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGOFF_COMMAND }, {
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND }, {
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND }, { SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND }, { SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND }, {
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND }, {
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND }, { SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND }, { SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND } }, { { SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGOFF_COMMCATH }, { SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGOFF_COMMCATH }, {
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH }, {
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH }, { SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH }, { SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH }, {
		SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH }, {
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH }, { SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH }, { SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH,
		SSD_u8SEGON_COMMCATH,
		SSD_u8SEGON_COMMCATH } } };

/*Comment!:DIO map for each 7 segment pin including control pin*/
/*Comment!:array of types of each 7 segment */
#if SSD_u8DISPCOUNT==1
const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=
{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE};

#elif SSD_u8DISPCOUNT==2
const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE};

#elif SSD_u8DISPCOUNT==3
const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=
{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE};

#elif SSD_u8DISPCOUNT==4
const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=
{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}
	, {	SSD_u8DISP4_SEGA,SSD_u8DISP4_SEGB,SSD_u8DISP4_SEGC,SSD_u8DISP4_SEGD,SSD_u8DISP4_SEGE,SSD_u8DISP4_SEGF,SSD_u8DISP4_SEGG,SSD_u8DISP4_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE};

#elif SSD_u8DISPCOUNT==5

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}
	, {	SSD_u8DISP4_SEGA,SSD_u8DISP4_SEGB,SSD_u8DISP4_SEGC,SSD_u8DISP4_SEGD,SSD_u8DISP4_SEGE,SSD_u8DISP4_SEGF,SSD_u8DISP4_SEGG,SSD_u8DISP4_INITCOM}
	, {	SSD_u8DISP5_SEGA,SSD_u8DISP5_SEGB,SSD_u8DISP5_SEGC,SSD_u8DISP5_SEGD,SSD_u8DISP5_SEGE,SSD_u8DISP5_SEGF,SSD_u8DISP5_SEGG,SSD_u8DISP5_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE};

#elif SSD_u8DISPCOUNT==6

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}
	, {	SSD_u8DISP4_SEGA,SSD_u8DISP4_SEGB,SSD_u8DISP4_SEGC,SSD_u8DISP4_SEGD,SSD_u8DISP4_SEGE,SSD_u8DISP4_SEGF,SSD_u8DISP4_SEGG,SSD_u8DISP4_INITCOM}
	, {	SSD_u8DISP5_SEGA,SSD_u8DISP5_SEGB,SSD_u8DISP5_SEGC,SSD_u8DISP5_SEGD,SSD_u8DISP5_SEGE,SSD_u8DISP5_SEGF,SSD_u8DISP5_SEGG,SSD_u8DISP5_INITCOM}
	, {	SSD_u8DISP6_SEGA,SSD_u8DISP6_SEGB,SSD_u8DISP6_SEGC,SSD_u8DISP6_SEGD,SSD_u8DISP6_SEGE,SSD_u8DISP6_SEGF,SSD_u8DISP6_SEGG,SSD_u8DISP6_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE,SSD_u8DISP6TYPE};

#else

#error "Number of displays is out of range"

#endif

/*Comment!:Control signals array (SIGNALS OF COMMON PIN AT EACH 7 SEGMENT)*/
/* Type [COMMONANODE-COMMONCATH]    ACTIVE[ON-OFF]    CONTROL_SIGNAL[DIO_u8LOW- DIO_u8HIGH]  */
/*         COMMONANODE                        ON                       DIO_u8HIGH            */
/*         COMMONCATH                         ON                       DIO_u8LOW             */
/*         COMMONCATH                         OFF                      DIO_u8HIGH            */
/*         COMMONANODE                        OFF                      DIO_u8LOW             */
/*Range!  : First cell range [SSD_u8COMMAND-SSD_u8COMMCATH]*/
/*Range!  : Second cell range [SSD_u8OFFSTATE-SSD_u8OFFSTATE]*/
const static u8 SSD_u8Control_Signals_Map[SSD_u8NUM_TYPES][SSD_u8NUM_STATES] = {
		{ DIO_u8LOW, DIO_u8HIGH }, { DIO_u8HIGH, DIO_u8LOW } };

/*Comment!:Array of control values for common pins*/
/*Comment!:initial state of the array is an xor relation between SSD_u8DISPX_INITSTATE and  SSD_u8DISPXTYPE*/
static u8 SSD_u8Control_Signals_Array[6] = { SSD_u8DISP1_INITSTATE
		^ SSD_u8DISP1TYPE, SSD_u8DISP2_INITSTATE ^ SSD_u8DISP2TYPE,
		SSD_u8DISP3_INITSTATE ^ SSD_u8DISP3TYPE, SSD_u8DISP4_INITSTATE
				^ SSD_u8DISP4TYPE, SSD_u8DISP5_INITSTATE ^ SSD_u8DISP5TYPE,
		SSD_u8DISP6_INITSTATE ^ SSD_u8DISP6TYPE };

/*Comment!:Array of display values*/
static u8 SSD_u8Values_Array[6] = { SSD_u8DISP1_INITVAL, SSD_u8DISP2_INITVAL,
		SSD_u8DISP3_INITVAL, SSD_u8DISP4_INITVAL, SSD_u8DISP5_INITVAL,
		SSD_u8DISP6_INITVAL };

#endif /* SSD_PRIVATE_H_ */
