
#ifndef MUSIC_H
#define MUSIC_H

#ifdef __cplusplus
extern "C" {
#endif

void MusicProcess( void );
    void Music_Menu_On( void );

extern __IO uint8_t  g_music_enable  ;
extern __IO uint8_t  g_music_flag  ;
#ifdef __cplusplus
}
#endif

#endif /* MUSIC_H */
