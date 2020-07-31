#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "Menú principal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "Configuracións"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES_TAB,
   "Favoritos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_TAB,
   "Historial"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_IMAGES_TAB,
   "Imaxes"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MUSIC_TAB,
   "Música"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_TAB,
   "Vídeos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TAB,
   "Xogo en liña"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_TAB,
   "Explorar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "Importar o contido"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "Menú rápido"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "Acceso rápido ás configuracións relevantes durante o xogo."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST,
   "Cargar un núcleo"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST,
   "Escoller que núcleo empregar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_LIST,
   "Cargar contido"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_LIST,
   "Escoller que contido executar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_DISC,
   "Cargar un disco"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_DISC,
   "Cargar un disco de medio físico. Primeiro escolla o núcleo (Cargar un núcleo) a empregar co disco."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMP_DISC,
   "Facer unha copia do disco"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMP_DISC,
   "Copiar o disco de medio físico ó almacenamento interno. Gardarase como un arquivo de imaxe."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "Listaxes de reprodución"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "O contido atopado coincidente coa base de datos aparecerá aquí."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "Procurar contido"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_CONTENT_LIST,
   "Procurar contido e engadilo á base de datos."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_WIMP,
   "Amosar o menú do escritorio"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_WIMP,
   "Abre a vista de escritorio tradicional."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DISABLE_KIOSK_MODE,
   "Desactivar modo quiosco"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DISABLE_KIOSK_MODE,
   "Desactiva o modo quiosco. (Precisa de se reiniciar)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE_UPDATER,
   "Actualizador en liña"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "Descargar módulos de extensión, compoñentes e contido para RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY,
   "Xogo en liña"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY,
   "Unirse ou hospedar unha sesión de xogo en rede."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS,
   "Configuración"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS,
   "Configurar o programa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION_LIST,
   "Información"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION_LIST_LIST,
   "Amosar á información do sistema."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS_LIST,
   "Ficheiro de configuración"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS_LIST,
   "Xestionar e crear os ficheiros de configuración."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LIST,
   "Axuda"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_LIST,
   "Saiba máis sobre o funcionamento do programa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_RETROARCH,
   "Reiniciar RetroArch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_RETROARCH,
   "Reiniciar o programa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "Pechar RetroArch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "Pechar o programa."
   )

/* Main Menu > Load Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE,
   "Descargar un núcleo"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE,
   "Descargar e instalar un núcleo dende o actualizador en liña."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_LIST,
   "Instalar ou restaurar un núcleo"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SIDELOAD_CORE_LIST,
   "Instalar ou restaurar un núcleo dende o directorio de Descargas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_VIDEO_PROCESSOR,
   "Iniciar o procesador de vídeo"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_NET_RETROPAD,
   "Iniciar RetroPad remoto"
   )

/* Main Menu > Load Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES,
   "Directorio inicial"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOADED_FILE_DETECT_CORE_LIST,
   "Descargas"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPEN_ARCHIVE,
   "Abrir un arquivo"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_ARCHIVE,
   "Cargar arquivo"
   )

/* Main Menu > Load Content > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_FAVORITES,
   "Favoritos"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_FAVORITES,
   "O contido engadido a \"Favoritos\" aparecerá aquí."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_MUSIC,
   "Música"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_MUSIC,
   "A musíca reproducida anteriormente aparecerá aquí."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_IMAGES,
   "Imaxes"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_IMAGES,
   "As imaxes visualizadas anteriormente aparecerán aquí."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_VIDEO,
   "Vídeos"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_VIDEO,
   "Os vídeos reproducidos anteriormente aparecerán aquí."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_EXPLORE,
   "Explorar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_EXPLORE,
   "Follear todos os contidos coincidentes ca base de datos mediante unha interface de búsqueda categorizada."
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_LIST,
   "Descargador de núcleos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_INSTALLED_CORES,
   "Actualizar os núcleos instalados"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATE_INSTALLED_CORES,
   "Anovar todos os núcleos instalados á última versión dispoñible."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_UPDATER_LIST,
   "Anovador de miniaturas"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_UPDATER_LIST,
   "Descargar o paquete completo de miniaturas para o sistema escollido."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PL_THUMBNAILS_UPDATER_LIST,
   "Anovador das miniaturas das listas de reprodución"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PL_THUMBNAILS_UPDATER_LIST,
   "Descargar miniaturas para as entradas da playlist escollida."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_CONTENT,
   "Descargador de contido"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CORE_INFO_FILES,
   "Anovar os ficheiros de información sobre os núcleos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_ASSETS,
   "Anovar os recursos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_AUTOCONFIG_PROFILES,
   "Anovar os perfís de controladores"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CHEATS,
   "Anovar as trampas"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_DATABASES,
   "Anovar as bases de datos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "Anovar as superposicións"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_GLSL_SHADERS,
   "Anovar os sombreadores GLSL"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CG_SHADERS,
   "Anovar os sombreadores Cg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_SLANG_SHADERS,
   "Anovar os sombreadores Slang"
   )

/* Main Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFORMATION,
   "Información do núcleo"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISC_INFORMATION,
   "Imformación sobre o disco"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISC_INFORMATION,
   "Mostra información sobre os discos inseridos."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_INFORMATION,
   "Información da rede"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_INFORMATION,
   "Amosar a(s) interface(s) de rede e IPs asociadas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFORMATION,
   "Información do sistema"
   )

/* Main Menu > Information > Core Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_NAME,
   "Nome do núcleo"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_LABEL,
   "Etiqueta do núcleo"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_NAME,
   "Nome do sistema"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER,
   "Fabricante do sistema"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CATEGORIES,
   "Categorías"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_AUTHORS,
   "Autor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_PERMISSIONS,
   "Permisos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_LICENSES,
   "Licenza"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS,
   "Extensións soportadas"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_REQUIRED_HW_API,
   "Interfaces de programación de aplicacións gráficas requiridas"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_FIRMWARE,
   "Microprograma"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING,
   "Ausente"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT,
   "Presente"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPTIONAL,
   "Opcional"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REQUIRED,
   "Requirido"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE,
   "Borrar núcleo"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE,
   "Borrar este núcleo do disco."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CREATE_BACKUP,
   "Facer unha copia de seguridade do núcleo"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CREATE_BACKUP,
   "Crear unha copia de seguridade arquivada do núcleo instalado actualmente."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_RESTORE_BACKUP_LIST,
   "Restaurar unha copia de seguridade"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE_BACKUP_LIST,
   "Borrar unha copia de seguridade"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_BACKUP_MODE_AUTO,
   "[Automático]"
   )

/* Main Menu > Information > System Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_BUILD_DATE,
   "Data de compilación"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GIT_VERSION,
   "Versión de Git"
   )
MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_COMPILER,
   "Compilador"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_MODEL,
   "Modelo de CPU"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_FEATURES,
   "Características da CPU"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_ARCHITECTURE,
   "Arquitectura da CPU:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_CORES,
   "Núcleos da CPU:"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CPU_CORES,
   "Cantidade de núcleos que ten a CPU."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_IDENTIFIER,
   "Indentificador da interface"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_OS,
   "Sistema operativo da interface"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE,
   "Fonte de alimentación"
   )

/* Main Menu > Information > Database Manager */


/* Main Menu > Information > Database Manager > Information */


/* Main Menu > Configuration File */


/* Main Menu > Help */


/* Main Menu > Help > Basic Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_QUIT,
   "Saír"
   )

/* Settings */


/* Settings > Drivers */


/* Settings > Video */


/* Settings > Video > CRT SwitchRes */


/* Settings > Video > Output */


/* Settings > Video > Fullscreen Mode */


/* Settings > Video > Windowed Mode */


/* Settings > Video > Scaling */


/* Settings > Video > Synchronization */


/* Settings > Audio */


/* Settings > Audio > Output */


/* Settings > Audio > Resampler */


/* Settings > Audio > Synchronization */


/* Settings > Audio > MIDI */


/* Settings > Audio > Mixer Settings > Mixer Stream */


/* Settings > Audio > Menu Sounds */


/* Settings > Input */


/* Settings > Input > Haptic Feedback/Vibration */


/* Settings > Input > Menu Controls */


/* Settings > Input > Hotkey Binds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_PRESS_TWICE,
   "Confirmar peche"
   )

/* Settings > Input > Port # Binds */


/* Settings > Latency */


/* Settings > Core */

#ifndef HAVE_DYNAMIC
#endif

/* Settings > Configuration */


/* Settings > Saving */


/* Settings > Logging */


/* Settings > File Browser */


/* Settings > Frame Throttle */


/* Settings > Frame Throttle > Rewind */


/* Settings > Frame Throttle > Frame Time Counter */


/* Settings > Recording */


/* Settings > On-Screen Display */


/* Settings > On-Screen Display > On-Screen Overlay */




/* Settings > On-Screen Display > Video Layout */


/* Settings > On-Screen Display > On-Screen Notifications */


/* Settings > User Interface */


/* Settings > User Interface > Views */


/* Settings > User Interface > Views > Quick Menu */


/* Settings > User Interface > Views > Settings */


/* Settings > User Interface > Appearance */


/* Settings > AI Service */


/* Settings > Accessibility */


/* Settings > Power Management */

/* Settings > Achievements */


/* Settings > Network */


/* Settings > Network > Updater */


/* Settings > Playlists */


/* Settings > Playlists > Playlist Management */


/* Settings > User */


/* Settings > User > Privacy */


/* Settings > User > Accounts */


/* Settings > User > Accounts > RetroAchievements */


/* Settings > User > Accounts > YouTube */


/* Settings > User > Accounts > Twitch */


/* Settings > Directory */


/* Music */

/* Music > Quick Menu */


/* Netplay */


/* Netplay > Host */


/* Import content */


/* Import content > Scan File */


/* Import content > Manual Scan */


/* Explore tab */

/* Playlist > Playlist Item */


/* Playlist Item > Set Core Association */


/* Playlist Item > Information */


/* Quick Menu */


/* Quick Menu > Options */


/* Quick Menu > Controls */


/* Quick Menu > Controls > Load Remap File */


/* Quick Menu > Cheats */


/* Quick Menu > Cheats > Start or Continue Cheat Search */


/* Quick Menu > Cheats > Load Cheat File (Replace) */


/* Quick Menu > Cheats > Load Cheat File (Append) */


/* Quick Menu > Cheats > Cheat Details */


/* Quick Menu > Disc Control */


/* Quick Menu > Shaders */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE,
   "Borrar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_APPLY_CHANGES,
   "Aplicar os cambios"
   )

/* Quick Menu > Shaders > Save */


/* Quick Menu > Shaders > Remove */


/* Quick Menu > Shaders > Shader Parameters */


/* Quick Menu > Overrides */


/* Quick Menu > Achievements */


/* Quick Menu > Information */


/* Miscellaneous UI Items */


/* Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_AFRIKAANS,
   "Afrikaans"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ALBANIAN,
   "Albanian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ARABIC,
   "Arabic - عربى (Restart Required)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ASTURIAN,
   "Asturian - Asturianu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_AZERBAIJANI,
   "Azerbaijani"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_BASQUE,
   "Basque"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_BENGALI,
   "Bengali"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_BULGARIAN,
   "Bulgarian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_CATALAN,
   "Catalan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_CHINESE_SIMPLIFIED,
   "Chinese (Simplified) - 简体中文 (Restart Required)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_CHINESE_TRADITIONAL,
   "Chinese (Traditional) - 繁體中文 (Restart Required)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_CROATIAN,
   "Croatian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_CZECH,
   "Czech"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_DANISH,
   "Danish"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_DUTCH,
   "Dutch - Nederlands"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ENGLISH,
   "English"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ESPERANTO,
   "Esperanto - Esperanto"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ESTONIAN,
   "Estonian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_FILIPINO,
   "Filipino"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_FINNISH,
   "Finnish"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_FRENCH,
   "French - Français"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_GALICIAN,
   "Galician"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_GEORGIAN,
   "Georgian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_GERMAN,
   "German - Deutsch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_GREEK,
   "Greek - Ελληνικά"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_GUJARATI,
   "Gujarati"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_HAITIAN_CREOLE,
   "Haitian Creole"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_HEBREW,
   "Hebrew"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_HINDI,
   "Hindi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_HUNGARIAN,
   "Hungarian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ICELANDIC,
   "Icelandic"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_INDONESIAN,
   "Indonesian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_IRISH,
   "Irish"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ITALIAN,
   "Italian - Italiano"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_JAPANESE,
   "Japanese - 日本語"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_KANNADA,
   "Kannada"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_KOREAN,
   "Korean - 한국어 (Restart Required)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_LATIN,
   "Latin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_LATVIAN,
   "Latvian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_LITHUANIAN,
   "Lithuanian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_MACEDONIAN,
   "Macedonian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_MALAY,
   "Malay"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_MALTESE,
   "Maltese"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_NORWEGIAN,
   "Norwegian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_PERSIAN,
   "Persian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_POLISH,
   "Polish - Polski"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_PORTUGUESE_BRAZIL,
   "Portuguese (Brazil) - Português (Brasil)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_PORTUGUESE_PORTUGAL,
   "Portuguese (Portugal) - Português (Portugal)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_ROMANIAN,
   "Romanian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_RUSSIAN,
   "Russian - Русский"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_SERBIAN,
   "Serbian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_SLOVAK,
   "Slovak - Slovenský"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_SLOVENIAN,
   "Slovenian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_SPANISH,
   "Spanish - Español"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_SWAHILI,
   "Swahili"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_SWEDISH,
   "Swedish"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_TAMIL,
   "Tamil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_TELUGU,
   "Telugu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_THAI,
   "Thai"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_TURKISH,
   "Turkish - Türkçe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_UKRAINIAN,
   "Ukrainian"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_URDU,
   "Urdu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_VIETNAMESE,
   "Vietnamese - Tiếng Việt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_WELSH,
   "Welsh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LANG_YIDDISH,
   "Yiddish"
   )

/* RGUI: Settings > User Interface > Appearance */


/* RGUI: Settings Options */


/* XMB: Settings > User Interface > Appearance */


/* XMB: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON,
   "Fita"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON_SIMPLIFIED,
   "Fita (simplificado)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SIMPLE_SNOW,
   "Neve sinxela"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOW,
   "Neve"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOWFLAKE,
   "Folerpa"
   )

/* Ozone: Settings > User Interface > Appearance */


/* MaterialUI: Settings > User Interface > Appearance */


/* MaterialUI: Settings Options */


/* Qt (Desktop Menu) */


/* Unsorted */


/* Unused (Only Exist in Translation Files) */


/* Unused (Needs Confirmation) */


/* Discord Status */


/* Notifications */


/* Lakka */


/* Environment Specific Settings */


#ifdef HAVE_LAKKA_SWITCH
#endif
#if defined(HAVE_LAKKA_SWITCH) || defined(HAVE_LIBNX)
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "Compartir cartafoles na rede empregando o protocolo SMB."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "Empregar SSH para acceder á liña de comandos de forma remota."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCALAP_ENABLE,
   "Punto de acceso wifi"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCALAP_ENABLE,
   "Activar ou desactivar o punto de acceso wifi."
   )
MSG_HASH(
   MSG_LOCALAP_SWITCHING_OFF,
   "Apagando o punto de acceso wifi."
   )
MSG_HASH(
   MSG_WIFI_DISCONNECT_FROM,
   "Desconectando da wifi \"%s\""
   )
#endif
#ifdef GEKKO
#endif
#ifdef HAVE_ODROIDGO2
#else
#endif
#if defined(_3DS)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "Pantalla inferior da 3DS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_800X240,
   "2D (Alta definición)"
   )
#endif
#ifdef HAVE_QT
#endif
