#define VK_1 0x31
#define VK_2 0x32
#define VK_3 0x33
#define VK_4 0x34

#define DEF_MAXADMINS				10		// 50 -> 10
#define DEF_MAXMAPS					100
#define DEF_MAXAGRICULTURE			200
#define DEF_MAXNPCTYPES				200
#define DEF_MAXBUILDITEMS			300
#define DEF_SERVERSOCKETBLOCKLIMIT	300
#define DEF_MAXBANNED				500
#define DEF_MAXNPCITEMS				1000
#define DEF_MAXCLIENTS				200		// 2000 -> 200
#define DEF_MAXNPCS					15000 //LifeX Fix Mobs Respawn Limit 01/01
#define DEF_MAXITEMTYPES			5000
#define DEF_CLIENTTIMEOUT			10000
#define DEF_SPUPTIME				10000 //LifeX Regen Time to 10 sec 01/01
#define DEF_POISONTIME				12000
#define DEF_HPUPTIME				10000 //LifeX Regen Time to 10 sec 01/01
#define DEF_MPUPTIME				10000 //LifeX Regen Time to 10 sec 01/01
#define DEF_HUNGERTIME				60000
#define DEF_NOTICETIME				80000
#define DEF_SUMMONTIME				300000
#define DEF_AUTOSAVETIME			600000 // original: 1800000
#define MAX_HELDENIANTOWER			200
#define DEF_MAXTELEPORTDESTINATION	20

#define DEF_EXPSTOCKTIME		10000		// ExpStock�� ����ϴ� �ð� ���� 
#define DEF_MSGQUENESIZE		100000		// �޽��� ť ������ 10���� 
#define DEF_AUTOEXPTIME			360000	// �ڵ����� ����ġ�� �ö󰡴� �ð����� 
#define DEF_TOTALLEVELUPPOINT	3			// �������� �Ҵ��ϴ� �� ����Ʈ �� 


#define DEF_MAXDYNAMICOBJECTS	60000
#define DEF_MAXDELAYEVENTS		60000
#define DEF_GUILDSTARTRANK		12

#define DEF_SSN_LIMIT_MULTIPLY_VALUE	2	// SSN-limit ���ϴ� �� 

#define DEF_MAXNOTIFYMSGS		1000
#define DEF_NIGHTTIME			40

#define DEF_CHARPOINTLIMIT		9999		// ������ Ư��ġ�� �ִ밪								m_sCharStatLimit
#define DEF_RAGPROTECTIONTIME	7000		// �� �� �̻� ������ ������ ���� ��ȣ�� �޴��� 


#define DEF_ATTACKAI_NORMAL				1	// ������ ���� 
#define DEF_ATTACKAI_EXCHANGEATTACK		2	// ��ȯ ���� - ���� 
#define DEF_ATTACKAI_TWOBYONEATTACK		3	// 2-1 ����, ���� 

#define DEF_MAXFISHS					200
#define DEF_MAXMINERALS					200
#define	DEF_MAXCROPS					200
#define DEF_MAXENGAGINGFISH				30  // �� ����⿡ ���ø� �õ��� �� �ִ� �ִ� �ο� 
#define DEF_MAXPOTIONTYPES				500 // �ִ� ���� ���� ���� 

#define DEF_SPECIALEVENTTIME			300000 //600000 // 10��
#define DEF_MAXQUESTTYPE				200
#define DEF_DEF_MAXHELDENIANDOOR			10

#define DEF_MAXSUBLOGSOCK				10

#define DEF_ITEMLOG_GIVE				1
#define DEF_ITEMLOG_DROP				2
#define DEF_ITEMLOG_GET					3
#define DEF_ITEMLOG_DEPLETE				4
#define DEF_ITEMLOG_NEWGENDROP			5
#define DEF_ITEMLOG_DUPITEMID			6

// New 07/05/2004
#define DEF_ITEMLOG_BUY					7
#define DEF_ITEMLOG_SELL				8
#define DEF_ITEMLOG_RETRIEVE			9
#define DEF_ITEMLOG_DEPOSIT				10
#define DEF_ITEMLOG_EXCHANGE			11
#define DEF_ITEMLOG_MAKE				13
#define DEF_ITEMLOG_SUMMONMONSTER		14
#define DEF_ITEMLOG_POISONED			15
#define DEF_ITEMLOG_REPAIR				17
#define DEF_ITEMLOG_SKILLLEARN			12
#define DEF_ITEMLOG_MAGICLEARN			16
#define DEF_ITEMLOG_USE					32
#define DEF_ITEMLOG_UPGRADEPOINT		31

#define DEF_MAXDUPITEMID				100

#define DEF_MAXGUILDS					1000 // ���ÿ� ������ �� �ִ� ���� 
#define DEF_MAXONESERVERUSERS			800	// 800 // �� �������� ����� �� �ִ� �ִ� ����ڼ�. �ʰ��� ��� ��Ȱ�� Ȥ�� ���� ����, ������� ��������.

#define DEF_MAXGATESERVERSTOCKMSGSIZE	30000

#define DEF_MAXCONSTRUCTNUM				10
#define DEF_MAXSCHEDULE					10
#define DEF_MAXAPOCALYPSE				7
#define DEF_MAXHELDENIAN				10

//v1.4311-3  �������� �ִ� ����
#define DEF_MAXFIGHTZONE 10 

//============================
#define DEF_LEVELLIMIT		20				// ü���� ���� ����ġ!!!			
//============================

//============================
#define DEF_MINIMUMHITRATIO 15				// ���� ���� Ȯ�� 
//============================		

//============================
#define DEF_MAXIMUMHITRATIO	100				// �ִ� ���� Ȯ��
//============================

//============================
// New Changed 12/05/2004
#define DEF_GMGMANACONSUMEUNIT	15			// Grand Magic Generator ���� ��� ����.
//============================


#define DEF_MAXEXPTABLE			3500


#define DEF_STR 0x01 //Correct
#define DEF_DEX 0x02 //Correct
#define DEF_INT	0x03 //Correct
#define DEF_VIT 0x04 //Correct
#define DEF_MAG	0x05 //Correct
#define DEF_CHR 0x06 //Correct

#define DEF_TEST 0xFFFF0000



#define DEF_MAXCRUSADESTRUCTURES		300

#define ANTI_HAX

//#define DEF_DBGAMESERVER				// SQL Server Mode

//#define TEXTOUT

#define NO_MSGSPEEDCHECK


#define DEF_CLIENTSOCKETBLOCKLIMIT	15

#define DEF_MSGBUFFERSIZE	30000
#define DEF_MAXITEMS		50
#define DEF_MAXBANKITEMS	240 // 120 -> 240
#define DEF_MAXGUILDSMAN	128 // �ִ� ���� �� 

#define	DEF_MAXMAGICTYPE	100	// �����Ϸ��� �α׼������뵵 �ٲپ�� �Ѵ�.
#define DEF_MAXSKILLTYPE	60

#define DEF_MAXPARTYMEMBERS	8

#define DEF_SPECABLTYTIMESEC	1200

#define DEF_DELAYEVENTTYPE_DAMAGEOBJECT				1
#define DEF_DELAYEVENTTYPE_MAGICRELEASE				2
#define DEF_DELAYEVENTTYPE_USEITEM_SKILL			3
#define DEF_DELAYEVENTTYPE_METEORSTRIKE				4
#define DEF_DELAYEVENTTYPE_DOMETEORSTRIKEDAMAGE		5
#define DEF_DELAYEVENTTYPE_CALCMETEORSTRIKEEFFECT	6
#define DEF_DELAYEVENTTYPE_ANCIENT_TABLET			7

#define DEF_DELAYEVENTTYPE_END_APOCALYPSE			8
#define DEF_DELAYEVENTTYPE_KILL_ABADDON				9

#define DEF_DELAYEVENTTYPE_TAMING_SKILL				10

#define DEF_MAXITEMEQUIPPOS		15
#define DEF_EQUIPPOS_NONE		0	
#define DEF_EQUIPPOS_HEAD		1	//66Ah	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_HEAD]
#define DEF_EQUIPPOS_BODY		2	//66Ch	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_BODY]
#define DEF_EQUIPPOS_ARMS		3	//66Eh	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_ARMS]
#define DEF_EQUIPPOS_PANTS		4	//670h	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_PANTS]
#define DEF_EQUIPPOS_LEGGINGS	5	//672h	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_LEGGINGS]
#define DEF_EQUIPPOS_NECK		6   //674h	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_NECK]
#define DEF_EQUIPPOS_LHAND		7	//676h  m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_LHAND]
#define DEF_EQUIPPOS_RHAND		8	//678h	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_RHAND]
#define DEF_EQUIPPOS_TWOHAND	9	//67Ah	m_pClientList[]->m_sItemEquipmentStatus[DEF_EQUIPPOS_TWOHAND]
#define DEF_EQUIPPOS_RFINGER	10	//67Ch
#define DEF_EQUIPPOS_LFINGER	11	//67Eh
#define DEF_EQUIPPOS_BACK		12  //680h
#define DEF_EQUIPPOS_RELEASEALL	13	//682h

#define DEF_ITEMTYPE_NOTUSED	-1	// v1.4 ������ ���Ǿ����� ����μ��� ������ �ʴ� ������: ��������� ��ü�ȴ�.
#define DEF_ITEMTYPE_NONE		 0
#define DEF_ITEMTYPE_EQUIP		 1
#define DEF_ITEMTYPE_APPLY		 2
#define DEF_ITEMTYPE_USE_DEPLETE 3       
#define DEF_ITEMTYPE_INSTALL	 4
#define DEF_ITEMTYPE_CONSUME	 5
#define DEF_ITEMTYPE_ARROW		 6
#define DEF_ITEMTYPE_EAT		 7
#define DEF_ITEMTYPE_USE_SKILL   8
#define DEF_ITEMTYPE_USE_PERM    9
#define DEF_ITEMTYPE_USE_SKILL_ENABLEDIALOGBOX	10
#define DEF_ITEMTYPE_USE_DEPLETE_DEST			11
#define DEF_ITEMTYPE_MATERIAL					12


#define DEF_ITEMEFFECTTYPE_NONE				0
#define DEF_ITEMEFFECTTYPE_ATTACK			1		// ����ġ: value1 D value2 + value3
#define DEF_ITEMEFFECTTYPE_DEFENSE			2		// ���ɷ� 
#define DEF_ITEMEFFECTTYPE_ATTACK_ARROW		3		// ȭ���� ����ϴ� ���ݹ���. ���� ��ü�� ���ݷ��� ����.		
#define DEF_ITEMEFFECTTYPE_HP   		    4		// HP���� ȿ�� 
#define DEF_ITEMEFFECTTYPE_MP   		    5		// MP���� ȿ�� 
#define DEF_ITEMEFFECTTYPE_SP   		    6		// SP���� ȿ�� 
#define DEF_ITEMEFFECTTYPE_HPSTOCK 		    7		// HP���� ȿ��. �ﰢ������ ������ ��Ÿ������ �ʴ´�. 
#define DEF_ITEMEFFECTTYPE_GET			    8		// ��´�. ����⳪ ������ 
#define DEF_ITEMEFFECTTYPE_STUDYSKILL		9		// ����� ���� �������̴�.
#define DEF_ITEMEFFECTTYPE_SHOWLOCATION		10		// ��ġ�� ǥ���ϴ� ������. 
#define DEF_ITEMEFFECTTYPE_MAGIC			11		// ����ϸ� ���� ȿ���� ��� ������ 
#define DEF_ITEMEFFECTTYPE_CHANGEATTR		12		// �÷��̾��� �Ӽ��� ��ȯ��Ų��. ����, �Ӹ����, �Ǻλ�, ��Ÿ�� 
#define DEF_ITEMEFFECTTYPE_ATTACK_MANASAVE	13		// ����ȿ���� ���Ҿ� ������ ���� ȿ���� �ִ�.(�������)
#define DEF_ITEMEFFECTTYPE_ADDEFFECT	    14		// �߰� ȿ��
#define DEF_ITEMEFFECTTYPE_MAGICDAMAGESAVE	15		// �������� ���� ������ ������� �����Ѵ�. ������ ����̷� 
#define DEF_ITEMEFFECTTYPE_OCCUPYFLAG		16		// ���� ��� 
#define DEF_ITEMEFFECTTYPE_DYE				17		// ������. 
#define DEF_ITEMEFFECTTYPE_STUDYMAGIC		18		// ������ ���� �������̴�.
#define DEF_ITEMEFFECTTYPE_ATTACK_MAXHPDOWN	19		// ���� ȿ���� �Բ� �ִ�  HP �� HP ȸ������ �������� ������ 
#define DEF_ITEMEFFECTTYPE_ATTACK_DEFENSE	20		// ���� ȿ���� �Բ� ���ʰ� ���� ���� �� ȿ���� �ִ� ������ 
#define DEF_ITEMEFFECTTYPE_MATERIAL_ATTR	21		// ���� ���� ��� �Ӽ� 
#define DEF_ITEMEFFECTTYPE_FIRMSTAMINAR		22		// ���¹̳� ���� ������ 
#define DEF_ITEMEFFECTTYPE_LOTTERY			23		// ���� ������
#define DEF_ITEMEFFECTTYPE_ATTACK_SPECABLTY		24	// ���� ������ Ư�� ȿ�� 
#define DEF_ITEMEFFECTTYPE_DEFENSE_SPECABLTY	25	// �� ������ Ư�� ȿ�� 
#define DEF_ITEMEFFECTTYPE_ALTERITEMDROP		26	// �ٸ� ������ ������ �� ��� �� �������� ��������.
#define DEF_ITEMEFFECTTYPE_CONSTRUCTIONKIT		27	// ���� ŰƮ
#define DEF_ITEMEFFECTTYPE_WARM				28		// Unfreeze pot ?
#define DEF_ITEMEFFECTTYPE_FARMING			30
#define DEF_ITEMEFFECTTYPE_SLATES			31
#define DEF_ITEMEFFECTTYPE_ARMORDYE			32

#define DEF_ITEMEFFECTTYPE_PANDORA   34

#define DEF_ITEMEFFECTTYPE_WEAPONDYE   41 // WeaponDye

#define DEF_ITET_UNIQUE_OWNER				1		// ItemTouchEffect: ������ ���� ������ 
#define DEF_ITET_ID							2		// �׳� ������ ���̵�
#define DEF_ITET_DATE						3		// ��밡���� ��¥�� ������ ������ 

#define DEF_MAGICTYPE_DAMAGE_SPOT				1
#define DEF_MAGICTYPE_HPUP_SPOT					2
#define DEF_MAGICTYPE_DAMAGE_AREA				3
#define DEF_MAGICTYPE_SPDOWN_SPOT				4
#define DEF_MAGICTYPE_SPDOWN_AREA				5
#define DEF_MAGICTYPE_SPUP_SPOT					6
#define DEF_MAGICTYPE_SPUP_AREA					7
#define DEF_MAGICTYPE_TELEPORT					8
#define DEF_MAGICTYPE_SUMMON					9 
#define DEF_MAGICTYPE_CREATE					10
#define DEF_MAGICTYPE_PROTECT					11	
#define DEF_MAGICTYPE_HOLDOBJECT				12
#define DEF_MAGICTYPE_INVISIBILITY				13
#define DEF_MAGICTYPE_CREATE_DYNAMIC			14
#define DEF_MAGICTYPE_POSSESSION				15
#define DEF_MAGICTYPE_CONFUSE					16 // Mass-Illusion, Illusion, Illusion-Movement, Mass-Illusion-Movement
#define DEF_MAGICTYPE_POISON					17
#define DEF_MAGICTYPE_BERSERK					18
#define DEF_MAGICTYPE_DAMAGE_LINEAR				19
#define DEF_MAGICTYPE_POLYMORPH					20
#define DEF_MAGICTYPE_DAMAGE_AREA_NOSPOT		21 // Meteor-Strike, Mass-Magic-Missile
#define DEF_MAGICTYPE_TREMOR					22
#define DEF_MAGICTYPE_ICE						23
// 24 
#define DEF_MAGICTYPE_DAMAGE_AREA_NOSPOT_SPDOWN	25
#define DEF_MAGICTYPE_ICE_LINEAR				26 // Blizzard
// 27
#define DEF_MAGICTYPE_DAMAGE_AREA_ARMOR_BREAK   28
#define DEF_MAGICTYPE_CANCELLATION				29
#define DEF_MAGICTYPE_DAMAGE_LINEAR_SPDOWN		30 // Earth-Shock-Wave
#define DEF_MAGICTYPE_INHIBITION				31 // Inhibition-Casting	
#define DEF_MAGICTYPE_RESURRECTION				32 // Resurrection
#define DEF_MAGICTYPE_SCAN						33 // Scan

#define DEF_MAGICTYPE_CREATEPOTION                34

#define DEF_MAGICTYPE_HELLFIRE 44
#define DEF_MAGICTYPE_FURYOFTHOR 24

#define DEF_MAXMAGICEFFECTS			100

#define DEF_OWNERTYPE_PLAYER			1
#define DEF_OWNERTYPE_NPC				2
#define DEF_OWNERTYPE_PLAYER_INDIRECT	3

#define DEF_OWNERTYPE_PLAYER_WAITING	8 // Snoopy: added to wait for the player connecting again...
#define DEF_OWNERTYPE_PLAYER_FREE		9 // Snoopy: added for every player to take over this summon

// for Client Data

#define DEF_MAPDATASIZEX		60 // 30
#define DEF_MAPDATASIZEY		55 // 25

#define DEF_MAXTELEPORTLOC		200
#define DEF_MAXWAYPOINTCFG		200
#define DEF_MAXMGAR				50
#define DEF_MAXNMR				50
#define DEF_MAXSPOTMOBGENERATOR	100
#define DEF_MAXFISHPOINT		200
#define DEF_MAXITEMEVENTS		200
#define DEF_MAXMINERALPOINT		200
#define DEF_MAXHELDENIANDOOR	200
#define DEF_MAXOCCUPYFLAG		20001 //3001
#define	DEF_MAXINITIALPOINT		20
#define DEF_MAXAGRICULTURE		200
#define DEF_MAXHELDENIANTOWER	200
#define DEF_MAXDYNAMICGATE		10

#define DEF_MAPTYPE_NORMAL				0
#define DEF_MAPTYPE_NOPENALTY_NOREWARD	1
#define DEF_MAXENERGYSPHERES			10

#define DEF_MAXSTRATEGICPOINTS			200
#define DEF_MAXSECTORS					60
#define DEF_MAXSTRIKEPOINTS				20

#define DEF_INDEX4_MSGID			0
#define DEF_INDEX2_MSGTYPE			4

#define DEF_MSGFROM_CLIENT		1
#define DEF_MSGFROM_LOGSERVER	2
#define DEF_MSGFROM_GATESERVER	3
#define DEF_MSGFROM_BOT			4

#define DEF_MAXWAYPOINTS			10

#define DEF_MOVETYPE_STOP			0		// ������ �ִ´�. �ʱ�ȭ�� NPC�� �⺻ �ൿ.
#define DEF_MOVETYPE_SEQWAYPOINT	1		// �̵���θ� ���������� �̵�. �� ������ �̵���ο��� �ش� �ൿ�� ����Ѵ�.
#define DEF_MOVETYPE_RANDOMWAYPOINT	2		// �̵���θ� �����ϰ� �����Ͽ� �����δ�.
#define DEF_MOVETYPE_FOLLOW			3		// Ư�� ����� ���� �����δ�. 
#define DEF_MOVETYPE_RANDOMAREA		4		// ������ ���� �ȿ��� ������ ������ �����δ�.
#define DEF_MOVETYPE_RANDOM			5		// �� ���� �ƹ��������γ� �����δ�.
#define DEF_MOVETYPE_GUARD			6		// ó�� ������ ����� ��ġ�� ������ ������ ��ǥ�� �߽߰ô� �߰��Ѵ�.

#define DEF_BEHAVIOR_STOP			0
#define DEF_BEHAVIOR_MOVE			1
#define DEF_BEHAVIOR_ATTACK			2
#define DEF_BEHAVIOR_FLEE			3
#define DEF_BEHAVIOR_DEAD			4

#define DEF_QUESTTYPE_MONSTERHUNT				1		// �Ϲ����� ���� ���� 
#define DEF_QUESTTYPE_MONSTERHUNT_TIMELIMIT		2		// �ð� ������ �ɷ��ִ� ���� ���� 
#define DEF_QUESTTYPE_ASSASSINATION 			3		// �ϻ� 
#define DEF_QUESTTYPE_DELIVERY					4		// ���: Ư�� ��ҷ� �������� ����Ѵ�.
#define DEF_QUESTTYPE_ESCORT					5		// ��ȣ: Ư�� ĳ���͸� ��ȣ�Ѵ�.
#define DEF_QUESTTYPE_GUARD						6		// Ư�� ������ ���� �������κ��� ����Ѵ�. 
#define DEF_QUESTTYPE_GOPLACE					7		// Ư�� ��ҷ� ����. ���� ħ�� 
#define DEF_QUESTTYPE_BUILDSTRUCTURE			8		// ������ ��ġ �ӹ�
#define DEF_QUESTTYPE_SUPPLYBUILDSTRUCTURE		9		// ������ ��ġ ���� �ӹ�
#define DEF_QUESTTYPE_STRATEGICSTRIKE			10		// ������ �����ӹ� 
#define DEF_QUESTTYPE_SENDTOBATTLE				11		// ��ٷ� ������� �����ϴ� �ӹ�
#define DEF_QUESTTYPE_SETOCCUPYFLAG				12		// ���� ���� ����� ��ġ�ϴ� �ӹ� 


#define DEF_SKILLEFFECTTYPE_GET			    1		// ��´�. ����⳪ ������ 
#define DEF_SKILLEFFECTTYPE_PRETEND			2		// ...�� ü �ϴ� 
#define DEF_SKILLEFFECTTYPE_TAMING			3		//  ����̱� �迭	


#define WM_USER_STARTGAMESIGNAL	WM_USER + 10

#define WM_USER_ACCEPT			WM_USER + 100
#define WM_USER_BOT_ACCEPT		WM_USER + 300
#define WM_ONLOGSOCKETEVENT		WM_USER + 200
#define WM_ONGATESOCKETEVENT	WM_USER + 1000
#define WM_ONBOTSOCKETEVENT		WM_USER + 2000

// Ŭ���̾�Ʈ�� 1100�� ���ϸ� �����ϹǷ� �� ���ķ� �޽����� ���ǵǾ�� �ȵȴ�. 
#define WM_ONCLIENTSOCKETEVENT	WM_USER + 1100


#define DEF_UPPERVERSION		"3"
#define DEF_LOWERVERSION 		"00"



// Those versions are hidden the client version
// they are used to change some MSGID (Anti-hgack)
#define DEF_HIDDEN_LOWERVERSION		95

#define DEF_VERSIONPLUSMODIFIER     1+(DEF_HIDDEN_LOWERVERSION % 9) 
//that can be whatever number you wish, 1 byte-sized numbers will work fine

//NB: The version check is with the MainLog server, not the gserver!

#define DEF_XSOCK_LISTENSOCK			1
#define DEF_XSOCK_NORMALSOCK			2				
#define DEF_XSOCK_SHUTDOWNEDSOCK		3				

#define DEF_XSOCKSTATUS_READINGHEADER	11
#define DEF_XSOCKSTATUS_READINGBODY		12

#define DEF_XSOCKEVENT_SOCKETMISMATCH			-121	// ���� �̺�Ʈ�� ������ ���� �ٸ���. (�̷� ��찡?)
#define DEF_XSOCKEVENT_CONNECTIONESTABLISH		-122	// ������ �̷�� ����.
#define DEF_XSOCKEVENT_RETRYINGCONNECTION		-123	// ������ �ٽ� �õ��ϴ� ���̴�.
#define DEF_XSOCKEVENT_ONREAD					-124	// �޽����� �д� ���̴�. 
#define DEF_XSOCKEVENT_READCOMPLETE				-125	// �ϳ��� �޽����� ������ �����ߴ�.
#define DEF_XSOCKEVENT_UNKNOWN					-126	// �˼����� �̺�Ʈ�̴�.
#define DEF_XSOCKEVENT_SOCKETCLOSED				-127	// ������ ������. 
#define DEF_XSOCKEVENT_BLOCK					-128	// �޽����� �����ٰ� ������ ���� �����̴�.
#define DEF_XSOCKEVENT_SOCKETERROR				-129	// ���Ͽ� ������ �߻��ߴ�. �̰�� Ŭ������ �����Ͽ��� �Ѵ�.
#define DEF_XSOCKEVENT_CRITICALERROR			-130    // ġ������ ������ ���α׷� ��ü�� ����� �Ѵ�.
#define DEF_XSOCKEVENT_NOTINITIALIZED			-131	// Ŭ������ �ʱ�ȭ ���� ���� ���·� ���ƴ�.
#define DEF_XSOCKEVENT_MSGSIZETOOLARGE			-132	// �������� �ϴ� �޽����� ����� �ʹ� ũ��.
#define DEF_XSOCKEVENT_CONFIRMCODENOTMATCH		-133	// Ȯ���ڵ尡 ��ġ���� �ʴ´�. �����Ǿ�� �Ѵ�.
#define DEF_XSOCKEVENT_QUENEFULL                -134    // ��� ť�� ������ ����.
#define DEF_XSOCKEVENT_UNSENTDATASENDBLOCK		-135    // ť�� �ִ� �����͸� �����ٰ� �� ����� �ɷȴ�. 
#define DEF_XSOCKEVENT_UNSENTDATASENDCOMPLETE	-136	// ť�� �ִ� ��� �����͸� ���´�.

#define DEF_XSOCKBLOCKLIMIT						300		// �� Ŭ���� ������ ?���̻� ��ϵǸ� ���̻� �����͸� ������ �� ����. 	