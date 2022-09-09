const char *proto_def[NDPI_LAST_IMPLEMENTED_PROTOCOL+1] = {

_P(NDPI_PROTOCOL_UNKNOWN),
_P(NDPI_PROTOCOL_FTP_CONTROL),
_P(NDPI_PROTOCOL_MAIL_POP),
_P(NDPI_PROTOCOL_MAIL_SMTP),
_P(NDPI_PROTOCOL_MAIL_IMAP),
_P(NDPI_PROTOCOL_DNS),
_P(NDPI_PROTOCOL_IPP),
_P(NDPI_PROTOCOL_HTTP),
_P(NDPI_PROTOCOL_MDNS),
_P(NDPI_PROTOCOL_NTP),
_P(NDPI_PROTOCOL_NETBIOS),
_P(NDPI_PROTOCOL_NFS),
_P(NDPI_PROTOCOL_SSDP),
_P(NDPI_PROTOCOL_BGP),
_P(NDPI_PROTOCOL_SNMP),
_P(NDPI_PROTOCOL_XDMCP),
_P(NDPI_PROTOCOL_SMBV1),
_P(NDPI_PROTOCOL_SYSLOG),
_P(NDPI_PROTOCOL_DHCP),
_P(NDPI_PROTOCOL_POSTGRES),
_P(NDPI_PROTOCOL_MYSQL),
_P(NDPI_PROTOCOL_MS_OUTLOOK),
_P(NDPI_PROTOCOL_DIRECT_DOWNLOAD_LINK),
_P(NDPI_PROTOCOL_MAIL_POPS),
_P(NDPI_PROTOCOL_APPLEJUICE),
_P(NDPI_PROTOCOL_DIRECTCONNECT),
_P(NDPI_PROTOCOL_NTOP),
_P(NDPI_PROTOCOL_COAP),
_P(NDPI_PROTOCOL_VMWARE),
_P(NDPI_PROTOCOL_MAIL_SMTPS),
_P(NDPI_PROTOCOL_DTLS),
_P(NDPI_PROTOCOL_UBNTAC2),
_P(NDPI_PROTOCOL_KONTIKI),
_P(NDPI_PROTOCOL_OPENFT),
_P(NDPI_PROTOCOL_FASTTRACK),
_P(NDPI_PROTOCOL_GNUTELLA),
_P(NDPI_PROTOCOL_EDONKEY),
_P(NDPI_PROTOCOL_BITTORRENT),
_P(NDPI_PROTOCOL_SKYPE_TEAMS_CALL),
_P(NDPI_PROTOCOL_SIGNAL),
_P(NDPI_PROTOCOL_MEMCACHED),
_P(NDPI_PROTOCOL_SMBV23),
_P(NDPI_PROTOCOL_MINING),
_P(NDPI_PROTOCOL_NEST_LOG_SINK),
_P(NDPI_PROTOCOL_MODBUS),
_P(NDPI_PROTOCOL_WHATSAPP_CALL),
_P(NDPI_PROTOCOL_DATASAVER),
_P(NDPI_PROTOCOL_XBOX),
_P(NDPI_PROTOCOL_QQ),
_P(NDPI_PROTOCOL_TIKTOK),
_P(NDPI_PROTOCOL_RTSP),
_P(NDPI_PROTOCOL_MAIL_IMAPS),
_P(NDPI_PROTOCOL_ICECAST),
_P(NDPI_PROTOCOL_CPHA),
_P(NDPI_PROTOCOL_PPSTREAM),
_P(NDPI_PROTOCOL_ZATTOO),
_P(NDPI_PROTOCOL_SHOUTCAST),
_P(NDPI_PROTOCOL_SOPCAST),
_P(NDPI_PROTOCOL_DISCORD),
_P(NDPI_PROTOCOL_TVUPLAYER),
_P(NDPI_PROTOCOL_MONGODB),
_P(NDPI_PROTOCOL_PLURALSIGHT),
_P(NDPI_PROTOCOL_THUNDER),
_P(NDPI_PROTOCOL_OCSP),
_P(NDPI_PROTOCOL_VXLAN),
_P(NDPI_PROTOCOL_IRC),
_P(NDPI_PROTOCOL_AYIYA),
_P(NDPI_PROTOCOL_JABBER),
_P(NDPI_PROTOCOL_NATS),
_P(NDPI_PROTOCOL_AMONG_US),
_P(NDPI_PROTOCOL_YAHOO),
_P(NDPI_PROTOCOL_DISNEYPLUS),
_P(NDPI_PROTOCOL_GOOGLE_PLUS),
_P(NDPI_PROTOCOL_IP_VRRP),
_P(NDPI_PROTOCOL_STEAM),
_P(NDPI_PROTOCOL_HALFLIFE2),
_P(NDPI_PROTOCOL_WORLDOFWARCRAFT),
_P(NDPI_PROTOCOL_TELNET),
_P(NDPI_PROTOCOL_STUN),
_P(NDPI_PROTOCOL_IPSEC),
_P(NDPI_PROTOCOL_IP_GRE),
_P(NDPI_PROTOCOL_IP_ICMP),
_P(NDPI_PROTOCOL_IP_IGMP),
_P(NDPI_PROTOCOL_IP_EGP),
_P(NDPI_PROTOCOL_IP_SCTP),
_P(NDPI_PROTOCOL_IP_OSPF),
_P(NDPI_PROTOCOL_IP_IP_IN_IP),
_P(NDPI_PROTOCOL_RTP),
_P(NDPI_PROTOCOL_RDP),
_P(NDPI_PROTOCOL_VNC),
_P(NDPI_PROTOCOL_TUMBLR),
_P(NDPI_PROTOCOL_TLS),
_P(NDPI_PROTOCOL_SSH),
_P(NDPI_PROTOCOL_USENET),
_P(NDPI_PROTOCOL_MGCP),
_P(NDPI_PROTOCOL_IAX),
_P(NDPI_PROTOCOL_TFTP),
_P(NDPI_PROTOCOL_AFP),
_P(NDPI_PROTOCOL_STEALTHNET),
_P(NDPI_PROTOCOL_AIMINI),
_P(NDPI_PROTOCOL_SIP),
_P(NDPI_PROTOCOL_TRUPHONE),
_P(NDPI_PROTOCOL_IP_ICMPV6),
_P(NDPI_PROTOCOL_DHCPV6),
_P(NDPI_PROTOCOL_ARMAGETRON),
_P(NDPI_PROTOCOL_CROSSFIRE),
_P(NDPI_PROTOCOL_DOFUS),
_P(NDPI_PROTOCOL_FIESTA),
_P(NDPI_PROTOCOL_FLORENSIA),
_P(NDPI_PROTOCOL_GUILDWARS),
_P(NDPI_PROTOCOL_AMAZON_ALEXA),
_P(NDPI_PROTOCOL_KERBEROS),
_P(NDPI_PROTOCOL_LDAP),
_P(NDPI_PROTOCOL_MAPLESTORY),
_P(NDPI_PROTOCOL_MSSQL_TDS),
_P(NDPI_PROTOCOL_PPTP),
_P(NDPI_PROTOCOL_WARCRAFT3),
_P(NDPI_PROTOCOL_WORLD_OF_KUNG_FU),
_P(NDPI_PROTOCOL_SLACK),
_P(NDPI_PROTOCOL_FACEBOOK),
_P(NDPI_PROTOCOL_TWITTER),
_P(NDPI_PROTOCOL_DROPBOX),
_P(NDPI_PROTOCOL_GMAIL),
_P(NDPI_PROTOCOL_GOOGLE_MAPS),
_P(NDPI_PROTOCOL_YOUTUBE),
_P(NDPI_PROTOCOL_SKYPE_TEAMS),
_P(NDPI_PROTOCOL_GOOGLE),
_P(NDPI_PROTOCOL_RPC),
_P(NDPI_PROTOCOL_NETFLOW),
_P(NDPI_PROTOCOL_SFLOW),
_P(NDPI_PROTOCOL_HTTP_CONNECT),
_P(NDPI_PROTOCOL_HTTP_PROXY),
_P(NDPI_PROTOCOL_CITRIX),
_P(NDPI_PROTOCOL_NETFLIX),
_P(NDPI_PROTOCOL_LASTFM),
_P(NDPI_PROTOCOL_WAZE),
_P(NDPI_PROTOCOL_YOUTUBE_UPLOAD),
_P(NDPI_PROTOCOL_HULU),
_P(NDPI_PROTOCOL_CHECKMK),
_P(NDPI_PROTOCOL_AJP),
_P(NDPI_PROTOCOL_APPLE),
_P(NDPI_PROTOCOL_WEBEX),
_P(NDPI_PROTOCOL_WHATSAPP),
_P(NDPI_PROTOCOL_APPLE_ICLOUD),
_P(NDPI_PROTOCOL_VIBER),
_P(NDPI_PROTOCOL_APPLE_ITUNES),
_P(NDPI_PROTOCOL_RADIUS),
_P(NDPI_PROTOCOL_WINDOWS_UPDATE),
_P(NDPI_PROTOCOL_TEAMVIEWER),
_P(NDPI_PROTOCOL_TUENTI),
_P(NDPI_PROTOCOL_LOTUS_NOTES),
_P(NDPI_PROTOCOL_SAP),
_P(NDPI_PROTOCOL_GTP),
_P(NDPI_PROTOCOL_WSD),
_P(NDPI_PROTOCOL_LLMNR),
_P(NDPI_PROTOCOL_TOCA_BOCA),
_P(NDPI_PROTOCOL_SPOTIFY),
_P(NDPI_PROTOCOL_MESSENGER),
_P(NDPI_PROTOCOL_H323),
_P(NDPI_PROTOCOL_OPENVPN),
_P(NDPI_PROTOCOL_NOE),
_P(NDPI_PROTOCOL_CISCOVPN),
_P(NDPI_PROTOCOL_TEAMSPEAK),
_P(NDPI_PROTOCOL_TOR),
_P(NDPI_PROTOCOL_SKINNY),
_P(NDPI_PROTOCOL_RTCP),
_P(NDPI_PROTOCOL_RSYNC),
_P(NDPI_PROTOCOL_ORACLE),
_P(NDPI_PROTOCOL_CORBA),
_P(NDPI_PROTOCOL_UBUNTUONE),
_P(NDPI_PROTOCOL_WHOIS_DAS),
_P(NDPI_PROTOCOL_SD_RTN),
_P(NDPI_PROTOCOL_SOCKS),
_P(NDPI_PROTOCOL_NINTENDO),
_P(NDPI_PROTOCOL_RTMP),
_P(NDPI_PROTOCOL_FTP_DATA),
_P(NDPI_PROTOCOL_WIKIPEDIA),
_P(NDPI_PROTOCOL_ZMQ),
_P(NDPI_PROTOCOL_AMAZON),
_P(NDPI_PROTOCOL_EBAY),
_P(NDPI_PROTOCOL_CNN),
_P(NDPI_PROTOCOL_MEGACO),
_P(NDPI_PROTOCOL_REDIS),
_P(NDPI_PROTOCOL_PINTEREST),
_P(NDPI_PROTOCOL_VHUA),
_P(NDPI_PROTOCOL_TELEGRAM),
_P(NDPI_PROTOCOL_VEVO),
_P(NDPI_PROTOCOL_PANDORA),
_P(NDPI_PROTOCOL_QUIC),
_P(NDPI_PROTOCOL_ZOOM),
_P(NDPI_PROTOCOL_EAQ),
_P(NDPI_PROTOCOL_OOKLA),
_P(NDPI_PROTOCOL_AMQP),
_P(NDPI_PROTOCOL_KAKAOTALK),
_P(NDPI_PROTOCOL_KAKAOTALK_VOICE),
_P(NDPI_PROTOCOL_TWITCH),
_P(NDPI_PROTOCOL_DOH_DOT),
_P(NDPI_PROTOCOL_WECHAT),
_P(NDPI_PROTOCOL_MPEGTS),
_P(NDPI_PROTOCOL_SNAPCHAT),
_P(NDPI_PROTOCOL_SINA),
_P(NDPI_PROTOCOL_HANGOUT_DUO),
_P(NDPI_PROTOCOL_IFLIX),
_P(NDPI_PROTOCOL_GITHUB),
_P(NDPI_PROTOCOL_BJNP),
_P(NDPI_PROTOCOL_REDDIT),
_P(NDPI_PROTOCOL_WIREGUARD),
_P(NDPI_PROTOCOL_SMPP),
_P(NDPI_PROTOCOL_DNSCRYPT),
_P(NDPI_PROTOCOL_TINC),
_P(NDPI_PROTOCOL_DEEZER),
_P(NDPI_PROTOCOL_INSTAGRAM),
_P(NDPI_PROTOCOL_MICROSOFT),
_P(NDPI_PROTOCOL_STARCRAFT),
_P(NDPI_PROTOCOL_TEREDO),
_P(NDPI_PROTOCOL_HOTSPOT_SHIELD),
_P(NDPI_PROTOCOL_IMO),
_P(NDPI_PROTOCOL_GOOGLE_DRIVE),
_P(NDPI_PROTOCOL_OCS),
_P(NDPI_PROTOCOL_MICROSOFT_365),
_P(NDPI_PROTOCOL_CLOUDFLARE),
_P(NDPI_PROTOCOL_MS_ONE_DRIVE),
_P(NDPI_PROTOCOL_MQTT),
_P(NDPI_PROTOCOL_RX),
_P(NDPI_PROTOCOL_APPLESTORE),
_P(NDPI_PROTOCOL_OPENDNS),
_P(NDPI_PROTOCOL_GIT),
_P(NDPI_PROTOCOL_DRDA),
_P(NDPI_PROTOCOL_PLAYSTORE),
_P(NDPI_PROTOCOL_SOMEIP),
_P(NDPI_PROTOCOL_FIX),
_P(NDPI_PROTOCOL_PLAYSTATION),
_P(NDPI_PROTOCOL_PASTEBIN),
_P(NDPI_PROTOCOL_LINKEDIN),
_P(NDPI_PROTOCOL_SOUNDCLOUD),
_P(NDPI_PROTOCOL_CSGO),
_P(NDPI_PROTOCOL_LISP),
_P(NDPI_PROTOCOL_DIAMETER),
_P(NDPI_PROTOCOL_APPLE_PUSH),
_P(NDPI_PROTOCOL_GOOGLE_SERVICES),
_P(NDPI_PROTOCOL_AMAZON_VIDEO),
_P(NDPI_PROTOCOL_GOOGLE_DOCS),
_P(NDPI_PROTOCOL_WHATSAPP_FILES),
_P(NDPI_PROTOCOL_TARGUS_GETDATA),
_P(NDPI_PROTOCOL_DNP3),
_P(NDPI_PROTOCOL_IEC60870),
_P(NDPI_PROTOCOL_BLOOMBERG),
_P(NDPI_PROTOCOL_CAPWAP),
_P(NDPI_PROTOCOL_ZABBIX),
_P(NDPI_PROTOCOL_S7COMM),
_P(NDPI_PROTOCOL_MSTEAMS),
_P(NDPI_PROTOCOL_WEBSOCKET),
_P(NDPI_PROTOCOL_ANYDESK),
_P(NDPI_PROTOCOL_SOAP),
_P(NDPI_PROTOCOL_APPLE_SIRI),
_P(NDPI_PROTOCOL_SNAPCHAT_CALL),
_P(NDPI_PROTOCOL_HPVIRTGRP),
_P(NDPI_PROTOCOL_GENSHIN_IMPACT),
_P(NDPI_PROTOCOL_ACTIVISION),
_P(NDPI_PROTOCOL_FORTICLIENT),
_P(NDPI_PROTOCOL_Z3950),
_P(NDPI_PROTOCOL_LIKEE),
_P(NDPI_PROTOCOL_GITLAB),
_P(NDPI_PROTOCOL_AVAST_SECUREDNS),
_P(NDPI_PROTOCOL_CASSANDRA),
_P(NDPI_PROTOCOL_AMAZON_AWS),
_P(NDPI_PROTOCOL_SALESFORCE),
_P(NDPI_PROTOCOL_VIMEO),
_P(NDPI_PROTOCOL_FACEBOOK_VOIP),
_P(NDPI_PROTOCOL_SIGNAL_VOIP),
_P(NDPI_PROTOCOL_FUZE),
_P(NDPI_PROTOCOL_GTP_U),
_P(NDPI_PROTOCOL_GTP_C),
_P(NDPI_PROTOCOL_GTP_PRIME),
_P(NDPI_PROTOCOL_ALIBABA),
_P(NDPI_PROTOCOL_CRASHLYSTICS),
_P(NDPI_PROTOCOL_MICROSOFT_AZURE),
_P(NDPI_PROTOCOL_ICLOUD_PRIVATE_RELAY),
_P(NDPI_PROTOCOL_ETHERNET_IP),
_P(NDPI_PROTOCOL_BADOO),
_P(NDPI_PROTOCOL_ACCUWEATHER),
_P(NDPI_PROTOCOL_GOOGLE_CLASSROOM),
_P(NDPI_PROTOCOL_HSRP),
_P(NDPI_PROTOCOL_CYBERSECURITY),
_P(NDPI_PROTOCOL_GOOGLE_CLOUD),
_P(NDPI_PROTOCOL_TENCENT),
_P(NDPI_PROTOCOL_RAKNET),
_P(NDPI_PROTOCOL_XIAOMI),
_P(NDPI_PROTOCOL_EDGECAST),
_P(NDPI_PROTOCOL_CACHEFLY),
_P(NDPI_PROTOCOL_SOFTETHER),
_P(NDPI_PROTOCOL_MPEGDASH),
_P(NDPI_PROTOCOL_DAZN),
_P(NDPI_PROTOCOL_GOTO),
_P(NDPI_PROTOCOL_RSH),
_P(NDPI_PROTOCOL_1KXUN),
_P(NDPI_PROTOCOL_IP_PGM),
_P(NDPI_PROTOCOL_IP_PIM),
_P(NDPI_PROTOCOL_COLLECTD),
_P(NDPI_PROTOCOL_TUNNELBEAR),
_P(NDPI_PROTOCOL_CLOUDFLARE_WARP),
_P(NDPI_PROTOCOL_I3D),
_P(NDPI_PROTOCOL_RIOTGAMES),
_P(NDPI_PROTOCOL_PSIPHON),
_P(NDPI_PROTOCOL_ULTRASURF),
_P(NDPI_PROTOCOL_THREEMA),
_P(NDPI_PROTOCOL_ALICLOUD),
_P(NDPI_PROTOCOL_AVAST),
_P(NDPI_PROTOCOL_TIVOCONNECT),
_P(NDPI_PROTOCOL_KISMET),
_P(NDPI_PROTOCOL_FASTCGI),
_P(NDPI_PROTOCOL_FTPS)

};
