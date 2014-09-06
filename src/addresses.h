/*****************************************************************************
 * Copyright (c) 2014 Ted John, Kevin Burke, Matthias Lanzinger
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 * 
 * This file is part of OpenRCT2.
 * 
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _ADDRESSES_H_
#define _ADDRESSES_H_

#pragma warning(disable : 4731)

#define RCT2_ADDRESS(address, type)				((type*)(address))
#define RCT2_GLOBAL(address, type)				(*((type*)(address)))
#define RCT2_CALLPROC(address)					(((void(*)())(address))())
#define RCT2_CALLFUNC(address, returnType)		(((returnType(*)())(address))())

#define RCT2_CALLFUNC_1(address, returnType, a1, v1)							(((returnType(*)(a1))(address))(v1))
#define RCT2_CALLFUNC_2(address, returnType, a1, a2, v1, v2)					(((returnType(*)(a1, a2))(address))(v1, v2))
#define RCT2_CALLFUNC_3(address, returnType, a1, a2, a3, v1, v2, v3)			(((returnType(*)(a1, a2, a3))(address))(v1, v2, v3))
#define RCT2_CALLFUNC_4(address, returnType, a1, a2, a3, a4, v1, v2, v3, v4)	(((returnType(*)(a1, a2, a3, a4))(address))(v1, v2, v3, v4))
#define RCT2_CALLFUNC_5(address, returnType, a1, a2, a3, a4, a5, v1, v2, v3, v4, v5)	(((returnType(*)(a1, a2, a3, a4, a5))(address))(v1, v2, v3, v4, v5))
#define RCT2_CALLFUNC_6(address, returnType, a1, a2, a3, a4, a5, a6, v1, v2, v3, v4, v5, v6)	(((returnType(*)(a1, a2, a3, a4, a5, a6))(address))(v1, v2, v3, v4, v5, v6))

#define RCT2_CALLPROC_1(address, a1, v1)									RCT2_CALLFUNC_1(address, void, a1, v1)
#define RCT2_CALLPROC_2(address, a1, a2, v1, v2)							RCT2_CALLFUNC_2(address, void, a1, a2, v1, v2)
#define RCT2_CALLPROC_3(address, a1, a2, a3, v1, v2, v3)					RCT2_CALLFUNC_3(address, void, a1, a2, a3, v1, v2, v3)
#define RCT2_CALLPROC_4(address, a1, a2, a3, a4, v1, v2, v3, v4)			RCT2_CALLFUNC_4(address, void, a1, a2, a3, a4, v1, v2, v3, v4)
#define RCT2_CALLPROC_5(address, a1, a2, a3, a4, a5, v1, v2, v3, v4, v5)	RCT2_CALLFUNC_5(address, void, a1, a2, a3, a4, a5, v1, v2, v3, v4, v5)

#define RCT2_ADDRESS_RIDE_PROPERTIES				0x00997C9D
#define RCT2_ADDRESS_LAND_TOOL_SIZE					0x009A9800
#define RCT2_ADDRESS_SAVE_PROMPT_MODE				0x009A9802

// #define RCT2_ADDRESS_SCENARIO_LIST				0x009A9FF4
// #define RCT2_ADDRESS_NUM_SCENARIOS				0x009AA008

#define RCT2_ADDRESS_APP_PATH						0x009AA214

#define RCT2_ADDRESS_CONFIG_SOUND_SW_BUFFER			0x009AAC6E
#define RCT2_ADDRESS_CONFIG_MUSIC					0x009AAC72

#define RCT2_ADDRESS_CONFIG_FLAGS					0x009AAC74
#define RCT2_ADDRESS_CONFIG_SOUND_QUALITY			0x009AAC77
#define RCT2_ADDRESS_CONFIG_METRIC					0x009AAC78
#define RCT2_ADDRESS_CONFIG_TEMPERATURE				0x009AAC79
#define RCT2_ADDRESS_CONFIG_KEYBOARD_SHORTCUTS		0x009AAC7A
#define RCT2_ADDRESS_CONFIG_EDGE_SCROLLING			0x009AACBA
#define RCT2_ADDRESS_CONFIG_CURRENCY				0x009AACBB
#define RCT2_ADDRESS_CONFIG_HEIGHT_MARKERS			0x009AACBD
#define RCT2_ADDRESS_CONFIG_CONSTRUCTION_MARKER		0x009AACBF

#define RCT2_ADDRESS_EXPANSION_NAMES				0x009AACC0
#define RCT2_ADDRESS_EXPANSION_FLAGS				0x009AB4C0
#define RCT2_ADDRESS_CONFIG_RESOLUTION_WIDTH		0x009AB4C2
#define RCT2_ADDRESS_CONFIG_RESOLUTION_HEIGHT		0x009AB4C4

#define RCT2_ADDRESS_APP_PATH_SLASH					0x009AB4D9
#define RCT2_ADDRESS_SAVED_GAMES_PATH				0x009AB5DA
#define RCT2_ADDRESS_SCENARIOS_PATH					0x009AB6E9
#define RCT2_ADDRESS_LANDSCAPES_PATH				0x009AB7FB
#define RCT2_ADDRESS_OBJECT_DATA_PATH				0x009AB90E
#define RCT2_ADDRESS_TRACKS_PATH					0x009ABA1E
#define RCT2_ADDRESS_SAVED_GAMES_PATH_2				0x009ABB37

#define RCT2_ADDRESS_SCREEN_DPI						0x009ABDC8
#define RCT2_ADDRESS_SCREEN_WIDTH					0x009ABDD8
#define RCT2_ADDRESS_SCREEN_HEIGHT					0x009ABDDA

#define RCT2_ADDRESS_DIRTY_BLOCK_WIDTH				0x009ABDE4
#define RCT2_ADDRESS_DIRTY_BLOCK_HEIGHT				0x009ABDE6
#define RCT2_ADDRESS_DIRTY_BLOCK_COLUMNS			0x009ABDE8
#define RCT2_ADDRESS_DIRTY_BLOCK_ROWS				0x009ABDEC

//This is the number of pixels that are in the
//rain_pixel_store
#define RCT2_ADDRESS_NO_RAIN_PIXELS					0x009AC00C
#define RCT2_ADDRESS_RAIN_PATTERN					0x009AC010

#define RCT2_ADDRESS_LIGHTNING_ACTIVE				0x009AC068

#define RCT2_ADDRESS_VIEWPORT_PAINT_BITS_PTR		0x009AC118
#define RCT2_ADDRESS_VIEWPORT_PAINT_X				0x009AC11C
#define RCT2_ADDRESS_VIEWPORT_PAINT_Y				0x009AC11E
#define RCT2_ADDRESS_VIEWPORT_PAINT_WIDTH			0x009AC120
#define RCT2_ADDRESS_VIEWPORT_PAINT_HEIGHT			0x009AC122
#define RCT2_ADDRESS_VIEWPORT_PAINT_PITCH			0x009AC124

#define RCT2_ADDRESS_VIEWPORT_DPI					0x009AC128

#define RCT2_ADDRESS_VIEWPORT_ZOOM					0x009AC126

#define RCT2_ADDRESS_RUN_INTRO_TICK_PART			0x009AC319

#define RCT2_ADDRESS_INSTALLED_OBJECT_LIST			0x009ADAE8

#define RCT2_ADDRESS_CURRENT_SOUND_DEVICE			0x009AF280

#define RCT2_ADDRESS_VEHICLE_SOUND_LIST				0x009AF288

#define RCT2_ADDRESS_CURENT_CURSOR					0x009DE51C
#define RCT2_ADDRESS_INPUT_STATE					0x009DE51D
#define RCT2_ADDRESS_CURSOR_DOWN_WINDOWCLASS		0x009DE51F
#define RCT2_ADDRESS_CURSOR_DOWN_WINDOWNUMBER		0x009DE520
#define RCT2_ADDRESS_CURSOR_DOWN_WIDGETINDEX		0x009DE524

#define RCT2_ADDRESS_CURSOR_DRAG_LAST_X				0x009DE52A
#define RCT2_ADDRESS_CURSOR_DRAG_LAST_Y				0x009DE52C
#define RCT2_ADDRESS_CURSOR_DRAG_WINDOWNUMBER		0x009DE52E
#define RCT2_ADDRESS_CURSOR_DRAG_WINDOWCLASS		0x009DE530

#define RCT2_ADDRESS_TOOLTIP_WINDOW_CLASS			0x009DE533
#define RCT2_ADDRESS_TOOLTIP_WINDOW_NUMBER			0x009DE534
#define RCT2_ADDRESS_TOOLTIP_WIDGET_INDEX			0x009DE536
#define RCT2_ADDRESS_TOOLTIP_CURSOR_X				0x009DE538
#define RCT2_ADDRESS_TOOLTIP_CURSOR_Y				0x009DE53A
#define RCT2_ADDRESS_TOOLTIP_TIMEOUT				0x009DE53C
#define RCT2_ADDRESS_TOOLTIP_NOT_SHOWN_TICKS		0x009DE53E

#define RCT2_ADDRESS_TOOL_WINDOWNUMBER				0x009DE542
#define RCT2_ADDRESS_TOOL_WINDOWCLASS				0x009DE544
#define RCT2_ADDRESS_CURRENT_TOOL					0x009DE545
#define RCT2_ADDRESS_TOOL_WIDGETINDEX				0x009DE546
#define RCT2_ADDRESS_CURRENT_SCROLL_AREA			0x009DE548
#define RCT2_ADDRESS_CURRENT_SCROLL_ID				0x009DE54C

#define RCT2_ADDRESS_PICKEDUP_PEEP_SPRITE			0x009DE550
#define RCT2_ADDRESS_PICKEDUP_PEEP_X				0x009DE554
#define RCT2_ADDRESS_PICKEDUP_PEEP_Y				0x009DE556

#define RCT2_ADDRESS_CURSOR_OVER_WINDOWCLASS		0x009DE55C
#define RCT2_ADDRESS_CURSOR_OVER_WINDOWNUMBER		0x009DE55E
#define RCT2_ADDRESS_CURSOR_OVER_WIDGETINDEX		0x009DE560

#define RCT2_ADDRESS_MAP_SELECTION_FLAGS			0x009DE58A
#define RCT2_ADDRESS_MAP_SELECTION_A_X				0x009DE58C
#define RCT2_ADDRESS_MAP_SELECTION_B_X				0x009DE58E
#define RCT2_ADDRESS_MAP_SELECTION_A_Y				0x009DE590
#define RCT2_ADDRESS_MAP_SELECTION_B_Y				0x009DE592
#define RCT2_ADDRESS_MAP_SELECTION_TYPE				0x009DE594

#define RCT2_ADDRESS_SCREEN_FLAGS					0x009DEA68
#define RCT2_ADDRESS_SCREENSHOT_COUNTDOWN			0x009DEA6D
#define RCT2_ADDRESS_PLACE_OBJECT_MODIFIER			0x009DEA70
#define RCT2_ADDRESS_ON_TUTORIAL					0x009DEA71

#define RCT2_ADDRESS_WINDOW_DPI						0x009DEA74

#define RCT2_ADDRESS_DSOUND_BUFFERS					0x009E1AB0
#define RCT2_ADDRESS_NUM_DSOUND_DEVICES				0x009E2B88
#define RCT2_ADDRESS_DSOUND_DEVICES					0x009E2B8C
#define RCT2_ADDRESS_SOUND_INFO_LIST_MAPPING		0x009E2B94
#define RCT2_ADDRESS_SOUNDLIST_BEGIN				0x009E2B98
#define RCT2_ADDRESS_SOUNDLIST_END					0x009E2B9C
#define RCT2_ADDRESS_DIRECTSOUND					0x009E2BA0
#define RCT2_ADDRESS_DSOUND_DEVICES_COUNTER			0x009E2BAC

#define RCT2_ADDRESS_CMDLINE						0x009E2D98

#define RCT2_ADDRESS_MOUSE_WRITE_INDEX				0x009E2DE4
#define RCT2_ADDRESS_MOUSE_READ_INDEX				0x009E2DE8
#define RCT2_ADDRESS_HFONT							0x009E2DEC
#define RCT2_ADDRESS_PROGRESSBAR_HWND				0x009E2DF8


#define RCT2_ADDRESS_LAND_RAISE_COST				0x009E2E1C
#define RCT2_ADDRESS_LAND_LOWER_COST				0x009E2E20
#define RCT2_ADDRESS_SELECTED_TERRAIN_EDGE			0x009E2E24
#define RCT2_ADDRESS_SELECTED_TERRAIN_SURFACE		0x009E2E25

#define RCT2_ADDRESS_G1_ELEMENTS					0x009EBD28

#define RCT2_ADDRESS_PATH_TYPES						0x009ADA14
														
#define RCT2_ADDRESS_SMALL_SCENERY_ENTRIES			0x009AD1A4
#define RCT2_ADDRESS_LARGE_SCENERY_ENTRIES			0x009AD594
#define RCT2_ADDRESS_WALL_SCENERY_ENTRIES			0x009AD794
#define RCT2_ADDRESS_BANNER_SCENERY_ENTRIES			0x009AD994
#define RCT2_ADDRESS_PATH_BIT_SCENERY_ENTRIES		0x009ADA54
#define RCT2_ADDRESS_SCENERY_SET_ENTRIES			0x009ADA90

//Every pixel changed by rain is stored.
//32bit (pixel_offset 24 bit)(pixel_colour 8 bit)
#define RCT2_ADDRESS_RAIN_PIXEL_STORE				0x00EDF850

#define RCT2_ADDRESS_UNCOMPLETED_RESEARCH_TYPES		0x00EE787C

#define RCT2_ADDRESS_MAP_IMAGE_DATA					0x00F1AD68

#define RCT2_ADDRESS_PROVISIONAL_PATH_FLAGS			0x00F3EF92
#define RCT2_ADDRESS_PROVISIONAL_PATH_X				0x00F3EF94
#define RCT2_ADDRESS_PROVISIONAL_PATH_Y				0x00F3EF96
#define RCT2_ADDRESS_PROVISIONAL_PATH_Z				0x00F3EF98
#define RCT2_ADDRESS_PATH_CONSTRUCTION_MODE			0x00F3EF99
#define RCT2_ADDRESS_PATH_ERROR_OCCURED				0x00F3EF9F
#define RCT2_ADDRESS_SELECTED_PATH_ID				0x00F3EFA0
#define RCT2_ADDRESS_SELECTED_PATH_TYPE				0x00F3EFA2
#define RCT2_ADDRESS_CONSTRUCT_PATH_FROM_X			0x00F3EF8A
#define RCT2_ADDRESS_CONSTRUCT_PATH_FROM_Y			0x00F3EF8C
#define RCT2_ADDRESS_CONSTRUCT_PATH_FROM_Z			0x00F3EF8E
#define RCT2_ADDRESS_CONSTRUCT_PATH_DIRECTION		0x00F3EF90

#define RCT2_ADDRESS_STAFF_HIGHLIGHTED_INDEX		0x00F43908

#define RCT2_ADDRESS_CURRENT_MONTH_YEAR				0x00F663A8
#define RCT2_ADDRESS_CURRENT_MONTH_TICKS			0x00F663AA
#define RCT2_ADDRESS_SCENARIO_TICKS					0x00F663AC

#define RCT2_ADDRESS_SCENARIO_SRAND_0				0x00F663B0
#define RCT2_ADDRESS_SCENARIO_SRAND_1				0x00F663B4
#define RCT2_ADDRESS_MAP_ELEMENTS					0x00F663B8

#define RCT2_ADDRESS_SPRITE_LIST					0x010E63BC
#define RCT2_ADDRESS_SPRITES_NEXT_INDEX				0x013573BC
#define RCT2_ADDRESS_SPRITES_START_VEHICLE			0x013573BE
#define RCT2_ADDRESS_SPRITES_START_PEEP				0x013573C0
#define RCT2_ADDRESS_SPRITES_START_TEXTFX			0x013573C2
#define RCT2_ADDRESS_SPRITES_START_LITTER			0x013573C4

#define RCT2_ADDRESS_CURRENT_LOAN					0x013573E0
#define RCT2_ADDRESS_MAXIMUM_LOAN					0x013580F0
#define RCT2_ADDRESS_PARK_FLAGS						0x013573E4
#define RCT2_ADDRESS_PARK_ENTRANCE_FEE				0x013573E8
#define RCT2_ADDRESS_GUESTS_IN_PARK					0x01357844
#define RCT2_ADDRESS_GUESTS_HEADING_FOR_PARK		0x01357846
#define RCT2_ADDRESS_MONTHLY_RIDE_INCOME			0x01357894
#define RCT2_ADDRESS_CURRENT_PARK_RATING			0x01357CB0
#define RCT2_ADDRESS_PARK_RATING_HISTORY			0x01357CB2
#define RCT2_ADDRESS_GUESTS_IN_PARK_HISTORY			0x01357CD2
#define RCT2_ADDRESS_LAST_RESEARCHED_ITEM_SUBJECT	0x01357CF4
#define RCT2_ADDRESS_OBJECTIVE_TYPE					0x013580F8
#define RCT2_ADDRESS_OBJECTIVE_YEAR					0x013580F9
#define RCT2_ADDRESS_OBJECTIVE_CURRENCY				0x013580FC
#define RCT2_ADDRESS_OBJECTIVE_NUM_GUESTS			0x01358100
#define RCT2_ADDRESS_BALANCE_HISTORY				0x0135812C
#define RCT2_ADDRESS_CURRENT_EXPENDITURE			0x0135832C
#define RCT2_ADDRESS_CURRENT_PROFIT					0x01358330
#define RCT2_ADDRESS_WEEKLY_PROFIT_HISTORY			0x0135833C
#define RCT2_ADDRESS_CURRENT_PARK_VALUE				0x0135853C
#define RCT2_ADDRESS_PARK_VALUE_HISTORY				0x01358540
#define RCT2_ADDRESS_COMPLETED_COMPANY_VALUE		0x01358740
#define RCT2_ADDRESS_TOTAL_ADMISSIONS				0x01358744
#define RCT2_ADDRESS_INCOME_FROM_ADMISSIONS			0x01358748
#define RCT2_ADDRESS_CURRENT_COMPANY_VALUE			0x0135874C
#define RCT2_ADDRESS_AWARD_LIST						0x01358760
#define RCT2_ADDRESS_CURRENT_MONEY_ENCRYPTED		0x013587F8
#define RCT2_ADDRESS_CURRENT_INTEREST_RATE			0x0135934A

#define RCT2_ADDRESS_GUEST_INITIAL_CASH				0x013580F4
#define RCT2_ADDRESS_GUEST_INITIAL_HAPPINESS		0x013580E9
#define RCT2_ADDRESS_GUEST_INITIAL_HUNGER			0x013580F6
#define RCT2_ADDRESS_GUEST_INITIAL_THIRST			0x013580F7

#define RCT2_ADDRESS_LAND_COST						0x01358770
#define RCT2_ADDRESS_CONSTRUCTION_RIGHTS_COST		0x01358772

#define RCT2_ADDRESS_PEEP_SPAWNS					0x013573F2

#define RCT2_ADDRESS_CURRENT_RESEARCH_LEVEL			0x013573FF
#define RCT2_ADDRESS_EXPENDITURE_TABLE				0x01357848

#define RCT2_ADDRESS_HANDYMAN_COLOUR				0x01357BCD
#define RCT2_ADDRESS_MECHANIC_COLOUR				0x01357BCE
#define RCT2_ADDRESS_SECURITY_COLOUR				0x01357BCF

#define RCT2_ADDRESS_ACTIVE_RESEARCH_TYPES			0x01357CF2
#define RCT2_ADDRESS_NEXT_RESEARCH_EXPECTED_DAY		0x013580E7
#define RCT2_ADDRESS_NEXT_RESEARCH_EXPECTED_MONTH	0x013580E8

#define RCT2_ADDRESS_MAP_MAXIMUM_X_Y				0x01358832
#define RCT2_ADDRESS_MAP_SIZE						0x01358834
#define RCT2_ADDRESS_PARK_SIZE						0x013580EA

#define RCT2_TOTAL_RIDE_VALUE						0x013580EE

#define RCT2_ADDRESS_SCENARIO_NAME					0x0135920A
#define RCT2_ADDRESS_SCENARIO_DETAILS				0x0135924A

#define RCT2_ADDRESS_PARK_ENTRANCE_X				0x01359350
#define RCT2_ADDRESS_PARK_ENTRANCE_Y				0x01359358
#define RCT2_ADDRESS_PARK_ENTRANCE_Z				0x01359360

#define RCT2_ADDRESS_CURRENT_TICKS					0x013628F4
#define RCT2_ADDRESS_RIDE_LIST						0x013628F8
#define RCT2_ADDRESS_RIDE_COUNT						0x013587C8
#define RCT2_ADDRESS_RIDE_FLAGS						0x0097CF40
#define RCT2_ADDRESS_SAVED_VIEW_X					0x0138869A
#define RCT2_ADDRESS_SAVED_VIEW_Y					0x0138869C
#define RCT2_ADDRESS_RIDE_MEASUREMENTS				0x0138B60C

#define RCT2_ADDRESS_CLIMATE						0x013CA746
#define RCT2_ADDRESS_CURRENT_WEATHER				0x013CA74A
#define RCT2_ADDRESS_NEXT_WEATHER					0x013CA74B
#define RCT2_ADDRESS_CURRENT_TEMPERATURE			0x013CA74C
#define RCT2_ADDRESS_NEXT_TEMPERATURE				0x013CA74D
#define RCT2_ADDRESS_CLIMATE_UPDATE_TIMER			0x013CA748
#define RCT2_ADDRESS_CURRENT_WEATHER_EFFECT			0x013CA74E
#define RCT2_ADDRESS_NEXT_WEATHER_EFFECT			0x013CA74F
#define RCT2_ADDRESS_CURRENT_WEATHER_GLOOM			0x013CA750
#define RCT2_ADDRESS_NEXT_WEATHER_GLOOM				0x013CA751
#define RCT2_ADDRESS_CURRENT_RAIN_LEVEL				0x013CA752
#define RCT2_ADDRESS_NEXT_RAIN_LEVEL				0x013CA753

#define RCT2_ADDRESS_NEWS_ITEM_LIST					0x013CA754

#define RCT2_ADDRESS_CURRENT_FONT_SPRITE_BASE		0x013CE950
#define RCT2_ADDRESS_CURRENT_FONT_FLAGS				0x013CE9A2

#define RCT2_ADDRESS_TILE_MAP_ELEMENT_POINTERS		0x013CE9A4
#define RCT2_ADDRESS_GAME_COMMAND_ERROR_TEXT		0x0141E9AC
#define RCT2_ADDRESS_GAME_COMMAND_ERROR_TITLE		0x0141E9AE

#define RCT2_ADDRESS_GAME_COMMAND_ERROR_STRING_ID	0x0141E9AE
#define RCT2_ADDRESS_CURRENT_ROTATION				0x0141E9E0

#define RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS			0x0141E9E4

#define RCT2_ADDRESS_FONT_CHAR_WIDTH				0x0141E9E8

#define RCT2_ADDRESS_COMMON_STRING_FORMAT_BUFFER	0x0141ED68

#define RCT2_ADDRESS_CUSTOM_STRINGS					0x0135A8F4

#define RCT2_ADDRESS_AUDIO_INFO						0x01425B40

#define RCT2_ADDRESS_SOUND_CHANNEL_LIST				0x014262E0

#define RCT2_ADDRESS_WATER_RAISE_COST			0x0141F738
#define RCT2_ADDRESS_WATER_LOWER_COST			0x0141F73C

#define RCT2_ADDRESS_CURRENT_WINDOW_COLOUR_1		0x0141F740
#define RCT2_ADDRESS_CURRENT_WINDOW_COLOUR_2		0x0141F741
#define RCT2_ADDRESS_CURRENT_WINDOW_COLOUR_3		0x0141F742
#define RCT2_ADDRESS_CURRENT_WINDOW_COLOUR_4		0x0141F743

#define RCT2_ADDRESS_WINDOW_LIST					0x01420078
#define RCT2_ADDRESS_NEW_WINDOW_PTR					0x014234B8
#define RCT2_ADDRESS_VIEWPORT_LIST					0x014234BC
#define RCT2_ADDRESS_NEW_VIEWPORT_PTR				0x01423570

#define RCT2_ADDRESS_HCURSOR_START					0x01423598
#define RCT2_ADDRESS_HCURSOR_ARROW					0x01423598
#define RCT2_ADDRESS_HCURSOR_BLANK					0x0142359C
#define RCT2_ADDRESS_HCURSOR_UP_ARROW				0x014235A0
#define RCT2_ADDRESS_HCURSOR_UP_DOWN_ARROW			0x014235A4
#define RCT2_ADDRESS_HCURSOR_HAND_POINT				0x014235A8
#define RCT2_ADDRESS_HCURSOR_ZZZ					0x014235AC
#define RCT2_ADDRESS_HCURSOR_DIAGONAL_ARROWS		0x014235B0
#define RCT2_ADDRESS_HCURSOR_PICKER					0x014235B4
#define RCT2_ADDRESS_HCURSOR_TREE_DOWN				0x014235B8
#define RCT2_ADDRESS_HCURSOR_FOUNTAIN_DOWN			0x014235BC
#define RCT2_ADDRESS_HCURSOR_STATUE_DOWN			0x014235C0
#define RCT2_ADDRESS_HCURSOR_BENCH_DOWN				0x014235C4
#define RCT2_ADDRESS_HCURSOR_CROSS_HAIR				0x014235C8
#define RCT2_ADDRESS_HCURSOR_BIN_DOWN				0x014235CC
#define RCT2_ADDRESS_HCURSOR_LAMPPOST_DOWN			0x014235D0
#define RCT2_ADDRESS_HCURSOR_FENCE_DOWN				0x014235D4
#define RCT2_ADDRESS_HCURSOR_FLOWER_DOWN			0x014235D8
#define RCT2_ADDRESS_HCURSOR_PATH_DOWN				0x014235DC
#define RCT2_ADDRESS_HCURSOR_DIG_DOWN				0x014235E0
#define RCT2_ADDRESS_HCURSOR_WATER_DOWN				0x014235E4
#define RCT2_ADDRESS_HCURSOR_HOUSE_DOWN				0x014235E8
#define RCT2_ADDRESS_HCURSOR_VOLCANO_DOWN			0x014235EC
#define RCT2_ADDRESS_HCURSOR_WALK_DOWN				0x014235F0
#define RCT2_ADDRESS_HCURSOR_PAINT_DOWN				0x014235F4
#define RCT2_ADDRESS_HCURSOR_ENTRANCE_DOWN			0x014235F8
#define RCT2_ADDRESS_HCURSOR_HAND_OPEN				0x014235FC
#define RCT2_ADDRESS_HCURSOR_HAND_CLOSED			0x01423600
#define RCT2_ADDRESS_HCURSOR_END					0x01423600

#define RCT2_ADDRESS_HINSTANCE						0x01423A08

#define RCT2_ADDRESS_WINDOW_GUEST_LIST_SELECTED_FILTER	0x00F1EE06
#define RCT2_ADDRESS_WINDOW_GUEST_LIST_SELECTED_TAB		0x00F1EE12
#define RCT2_ADDRESS_WINDOW_GUEST_LIST_SELECTED_VIEW	0x00F1EE13

#define RCT2_ADDRESS_WINDOW_RIDE_LIST_INFORMATION_TYPE	0x00F43833
#define RCT2_ADDRESS_WINDOW_RIDE_LIST_SELECTED_TAB		0x00F43824
#define RCT2_ADDRESS_WINDOW_RIDE_LIST_HIGHLIGHTED_ITEM	0x00F43825

#define RCT2_ADDRESS_WINDOW_STAFF_LIST_SELECTED_TAB		0x00F4390A

#define RCT2_ADDRESS_WINDOW_MAP_SELECTED_TAB		0x014209E4

#define RCT2_ADDRESS_OS_TIME_MINUTE					0x01424654
#define RCT2_ADDRESS_OS_TIME_HOUR					0x01424656
#define RCT2_ADDRESS_OS_TIME_DAY					0x01424304
#define RCT2_ADDRESS_OS_TIME_MONTH					0x01423A04
#define RCT2_ADDRESS_OS_TIME_YEAR					0x01424320
#define RCT2_ADDRESS_OS_TIME_DAYOFWEEK				0x01423B20

#define RCT2_ADDRESS_OS_PLATFORM_ID					0x01423B40
#define RCT2_ADDRESS_OS_MAJOR_VERSION				0x01423B44
#define RCT2_ADDRESS_OS_MINOR_VERSION				0x01423B48
#define RCT2_ADDRESS_OS_BUILD_NUMBER				0x01423B4C
#define RCT2_ADDRESS_OS_USER_NAME					0x01423B68
#define RCT2_ADDRESS_OS_COMPUTER_NAME				0x01423BB8

#define RCT2_ADDRESS_SYS_OEM_ID						0x01423B50
#define RCT2_ADDRESS_SYS_CPU_LEVEL					0x01423B52
#define RCT2_ADDRESS_SYS_CPU_REVISION				0x01423B54
#define RCT2_ADDRESS_SYS_CPU_NUMBER					0x01423B58

#define RCT2_ADDRESS_MEM_TOTAL_PHYSICAL				0x01423B5C
#define RCT2_ADDRESS_MEM_TOTAL_PAGEFILE				0x01423B60
#define RCT2_ADDRESS_MEM_TOTAL_VIRTUAL				0x01423B64

#define RCT2_ADDRESS_SCREEN_CAP_BPP					0x01423C10
#define RCT2_ADDRESS_SCREEN_CAP_RASTER_STRETCH		0x01423C14

#define RCT2_ADDRESS_INPUT_QUEUE					0x01424340

static void RCT2_CALLPROC_EBPSAFE(int address)
{
	#ifdef _MSC_VER
	__asm push ebp
	__asm call address
	__asm pop ebp
	#else
	__asm__ ( "\
		push ebp \n\
		call %[address] \n\
		pop ebp \n\
		" : [address] "+m" (address) );
	#endif
}

static void RCT2_CALLPROC_X(int address, int _eax, int _ebx, int _ecx, int _edx, int _esi, int _edi, int _ebp)
{
	#ifdef _MSC_VER
	__asm {
		push address
		mov eax, _eax
		mov ebx, _ebx
		mov ecx, _ecx
		mov edx, _edx
		mov esi, _esi
		mov edi, _edi
		mov ebp, _ebp
		call [esp]
		add esp, 4
	}
	#else
	__asm__ ( "\
	\n\
		push ebx \n\
		push ebp \n\
		push %[address] 	\n\
		mov eax, %[_eax] 	\n\
		mov ebx, %[_ebx] 	\n\
		mov ecx, %[_ecx] 	\n\
		mov edx, %[_edx] 	\n\
		mov esi, %[_esi] 	\n\
		mov edi, %[_edi] 	\n\
		mov ebp, %[_ebp] 	\n\
		call [esp] 	\n\
		add esp, 4 	\n\
		pop ebp \n\
		pop ebx \n\
	 " : [address] "+m" (address), [_eax] "+m" (_eax), [_ebx] "+m" (_ebx), [_ecx] "+m" (_ecx), [_edx] "+m" (_edx), [_esi] "+m" (_esi), [_edi] "+m" (_edi), [_ebp] "+m" (_ebp) 
		:
		: "eax","ecx","edx","esi","edi"
	);
	#endif
}

static void RCT2_CALLPROC_X_EBPSAFE(int address, int _eax, int _ebx, int _ecx, int _edx, int _esi, int _edi, int _ebp)
{
	#ifdef _MSC_VER
	__asm {
		push ebp
		push address
		mov eax, _eax
		mov ebx, _ebx
		mov ecx, _ecx
		mov edx, _edx
		mov esi, _esi
		mov edi, _edi
		mov ebp, _ebp
		call[esp]
		add esp, 4
		pop ebp
	}
	#else
	__asm__ ( "\
	\n\
	push ebx \n\
	push ebp \n\
	push %[address] 	\n\
	mov eax, %[_eax] 	\n\
	mov ebx, %[_ebx] 	\n\
	mov ecx, %[_ecx] 	\n\
	mov edx, %[_edx] 	\n\
	mov esi, %[_esi] 	\n\
	mov edi, %[_edi] 	\n\
	mov ebp, %[_ebp] 	\n\
	call [esp] 	\n\
	add esp, 4 	\n\
	pop ebp \n\
	pop ebx \n\
	" : [address] "+m" (address), [_eax] "+m" (_eax), [_ebx] "+m" (_ebx), [_ecx] "+m" (_ecx), [_edx] "+m" (_edx), [_esi] "+m" (_esi), [_edi] "+m" (_edi), [_ebp] "+m" (_ebp) 
	:
	: "eax","ecx","edx","esi","edi"
	);
	#endif
}

static void RCT2_CALLFUNC_X(int address, int *_eax, int *_ebx, int *_ecx, int *_edx, int *_esi, int *_edi, int *_ebp)
{
	#ifdef _MSC_VER
	__asm {
		// Store C's base pointer
		push ebp

		// Store address to call
		push address

		// Set all registers to the input values
		mov eax, [_eax]
		mov eax, [eax]
		mov ebx, [_ebx]
		mov ebx, [ebx]
		mov ecx, [_ecx]
		mov ecx, [ecx]
		mov edx, [_edx]
		mov edx, [edx]
		mov esi, [_esi]
		mov esi, [esi]
		mov edi, [_edi]
		mov edi, [edi]
		mov ebp, [_ebp]
		mov ebp, [ebp]

		// Call function
		call [esp]
		add esp, 4

		// Store output eax
		push eax
		
		// Put original C base pointer into eax
		mov eax, [esp+4]

		// Store output ebp
		push ebp

		// Set ebp to the original C base pointer
		mov ebp, eax

		// Put output ebp into ebp parameter
		mov eax, [esp]
		push ebx
		mov ebx, [_ebp]
		mov [ebx], eax
		pop ebx
		add esp, 4

		// Get resulting ebx, ecx, edx, esi, edi registers
		mov eax, [_edi]
		mov [eax], edi
		mov eax, [_esi]
		mov [eax], esi
		mov eax, [_edx]
		mov [eax], edx
		mov eax, [_ecx]
		mov [eax], ecx
		mov eax, [_ebx]
		mov [eax], ebx
		pop eax

		// Get resulting eax register
		mov ebx, [_eax]
		mov [ebx], eax

		add esp, 4
	}
	#else
	__asm__ ( "\
	\n\
		/* Store C's base pointer*/ 	\n\
		push ebx 	\n\
		push ebp 	\n\
	\n\
		/* Store %[address] to call*/ 	\n\
		push %[address] 	\n\
	\n\
		/* Set all registers to the input values*/ 	\n\
		mov eax, [%[_eax]] 	\n\
		mov eax, [eax] 	\n\
		mov ebx, [%[_ebx]] 	\n\
		mov ebx, [ebx] 	\n\
		mov ecx, [%[_ecx]] 	\n\
		mov ecx, [ecx] 	\n\
		mov edx, [%[_edx]] 	\n\
		mov edx, [edx] 	\n\
		mov esi, [%[_esi]] 	\n\
		mov esi, [esi] 	\n\
		mov edi, [%[_edi]] 	\n\
		mov edi, [edi] 	\n\
		mov ebp, [%[_ebp]] 	\n\
		mov ebp, [ebp] 	\n\
	\n\
		/* Call function*/ 	\n\
		call [esp] 	\n\
		add esp, 4 	\n\
	\n\
		/* Store output eax*/ 	\n\
		push eax 	\n\
			\n\
		/* Put original C base pointer into eax*/ 	\n\
		mov eax, [esp+4] 	\n\
	\n\
		/* Store output ebp*/ 	\n\
		push ebp 	\n\
	\n\
		/* Set ebp to the original C base pointer*/ 	\n\
		mov ebp, eax 	\n\
	\n\
		/* Put output ebp into ebp parameter*/ 	\n\
		mov eax, [esp] 	\n\
		push ebx 	\n\
		mov ebx, [%[_ebp]] 	\n\
		mov [ebx], eax 	\n\
		pop ebx 	\n\
		add esp, 4 	\n\
	\n\
		/* Get resulting ebx, ecx, edx, esi, edi registers*/ 	\n\
		mov eax, [%[_edi]] 	\n\
		mov [eax], edi 	\n\
		mov eax, [%[_esi]] 	\n\
		mov [eax], esi 	\n\
		mov eax, [%[_edx]] 	\n\
		mov [eax], edx 	\n\
		mov eax, [%[_ecx]] 	\n\
		mov [eax], ecx 	\n\
		mov eax, [%[_ebx]] 	\n\
		mov [eax], ebx 	\n\
		pop eax 	\n\
	\n\
		/* Get resulting eax register*/ 	\n\
		mov ebx, [%[_eax]] 	\n\
		mov [ebx], eax 	\n\
	\n\
		add esp, 4 	\n\
		pop ebx 	\n\
	 " : [address] "+m" (address), [_eax] "+m" (_eax), [_ebx] "+m" (_ebx), [_ecx] "+m" (_ecx), [_edx] "+m" (_edx), [_esi] "+m" (_esi), [_edi] "+m" (_edi), [_ebp] "+m" (_ebp) 
		:
		: "eax","ecx","edx","esi","edi"
	);
	#endif
}

#endif
