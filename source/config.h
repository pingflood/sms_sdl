#ifndef CONFIG_H__
#define CONFIG_H__

typedef struct {
	int32_t fullscreen;
	int32_t fullspeed;
	int32_t nosound;
	int32_t joystick;
	int32_t sndrate;
	int32_t country;
	int32_t console;
	int32_t fm;
	int32_t ntsc;
	int32_t spritelimit;
	int32_t extra_gg;
	int32_t tms_pal;
	char game_name[0x100];
	uint8_t use_bios;
	uint8_t soundlevel;
	/* For input remapping */
	uint32_t config_buttons[19];
} t_config;
extern t_config option;

#endif
