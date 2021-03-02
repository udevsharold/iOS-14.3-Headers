/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCIEndOfTransactionV2Event : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _accessUniversityCode;
	NSData* _aid;
	unsigned _avgRSSIValue;
	unsigned _command;
	unsigned _commandParam1;
	unsigned _commandResult;
	unsigned _currencyCode;
	unsigned _endEventInterface;
	unsigned _expressType;
	unsigned _informative;
	unsigned _issuerCityCode;
	unsigned _localValidation;
	unsigned _maxRSSIValue;
	unsigned _minRSSIValue;
	unsigned _sfiRead;
	unsigned _sfiUpdated;
	unsigned _spid;
	NSData* _stationID;
	NSData* _terminalIdentifier;
	unsigned _totalRSSISamples;
	unsigned _transactionCategory;
	unsigned _transactionExtension;
	NSData* _transactionId;
	unsigned _transactionInProgress;
	unsigned _transactionStatus;
	unsigned _transactionType;
	NSData* _uuidReference;
	unsigned _version;
	BOOL _hasExpiryDate;
	BOOL _isBlacklisted;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) unsigned command;                                       //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasCommandParam1; 
@property (assign,nonatomic) unsigned commandParam1;                                 //@synthesize commandParam1=_commandParam1 - In the implementation block
@property (assign,nonatomic) BOOL hasCommandResult; 
@property (assign,nonatomic) unsigned commandResult;                                 //@synthesize commandResult=_commandResult - In the implementation block
@property (assign,nonatomic) BOOL hasCurrencyCode; 
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasExpressType; 
@property (assign,nonatomic) unsigned expressType;                                   //@synthesize expressType=_expressType - In the implementation block
@property (assign,nonatomic) BOOL hasHasExpiryDate; 
@property (assign,nonatomic) BOOL hasExpiryDate;                                     //@synthesize hasExpiryDate=_hasExpiryDate - In the implementation block
@property (assign,nonatomic) BOOL hasInformative; 
@property (assign,nonatomic) unsigned informative;                                   //@synthesize informative=_informative - In the implementation block
@property (assign,nonatomic) BOOL hasIsBlacklisted; 
@property (assign,nonatomic) BOOL isBlacklisted;                                     //@synthesize isBlacklisted=_isBlacklisted - In the implementation block
@property (assign,nonatomic) BOOL hasSpid; 
@property (assign,nonatomic) unsigned spid;                                          //@synthesize spid=_spid - In the implementation block
@property (nonatomic,readonly) BOOL hasStationID; 
@property (nonatomic,retain) NSData * stationID;                                     //@synthesize stationID=_stationID - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionStatus; 
@property (assign,nonatomic) unsigned transactionStatus;                             //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionCategory; 
@property (assign,nonatomic) unsigned transactionCategory;                           //@synthesize transactionCategory=_transactionCategory - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) unsigned transactionType;                               //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionExtension; 
@property (assign,nonatomic) unsigned transactionExtension;                          //@synthesize transactionExtension=_transactionExtension - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionInProgress; 
@property (assign,nonatomic) unsigned transactionInProgress;                         //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (nonatomic,readonly) BOOL hasTerminalIdentifier; 
@property (nonatomic,retain) NSData * terminalIdentifier;                            //@synthesize terminalIdentifier=_terminalIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTotalRSSISamples; 
@property (assign,nonatomic) unsigned totalRSSISamples;                              //@synthesize totalRSSISamples=_totalRSSISamples - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRSSIValue; 
@property (assign,nonatomic) unsigned avgRSSIValue;                                  //@synthesize avgRSSIValue=_avgRSSIValue - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRSSIValue; 
@property (assign,nonatomic) unsigned maxRSSIValue;                                  //@synthesize maxRSSIValue=_maxRSSIValue - In the implementation block
@property (assign,nonatomic) BOOL hasMinRSSIValue; 
@property (assign,nonatomic) unsigned minRSSIValue;                                  //@synthesize minRSSIValue=_minRSSIValue - In the implementation block
@property (assign,nonatomic) BOOL hasLocalValidation; 
@property (assign,nonatomic) unsigned localValidation;                               //@synthesize localValidation=_localValidation - In the implementation block
@property (assign,nonatomic) BOOL hasAccessUniversityCode; 
@property (assign,nonatomic) unsigned accessUniversityCode;                          //@synthesize accessUniversityCode=_accessUniversityCode - In the implementation block
@property (assign,nonatomic) BOOL hasIssuerCityCode; 
@property (assign,nonatomic) unsigned issuerCityCode;                                //@synthesize issuerCityCode=_issuerCityCode - In the implementation block
@property (assign,nonatomic) BOOL hasEndEventInterface; 
@property (assign,nonatomic) unsigned endEventInterface;                             //@synthesize endEventInterface=_endEventInterface - In the implementation block
@property (assign,nonatomic) BOOL hasSfiRead; 
@property (assign,nonatomic) unsigned sfiRead;                                       //@synthesize sfiRead=_sfiRead - In the implementation block
@property (assign,nonatomic) BOOL hasSfiUpdated; 
@property (assign,nonatomic) unsigned sfiUpdated;                                    //@synthesize sfiUpdated=_sfiUpdated - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSData * transactionId;                                 //@synthesize transactionId=_transactionId - In the implementation block
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned)currencyCode;
-(void)setTransactionInProgress:(unsigned)arg1 ;
-(NSData *)aid;
-(unsigned long long)timestamp;
-(unsigned)transactionType;
-(unsigned)spid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)command;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isBlacklisted;
-(unsigned)transactionInProgress;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsBlacklisted:(BOOL)arg1 ;
-(BOOL)hasAid;
-(unsigned long long)hash;
-(BOOL)hasVersion;
-(unsigned)informative;
-(id)description;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(void)setStationID:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasStationID;
-(id)dictionaryRepresentation;
-(NSData *)stationID;
-(BOOL)hasTimestamp;
-(unsigned)version;
-(void)setAid:(NSData *)arg1 ;
-(BOOL)hasSpid;
-(unsigned)sfiRead;
-(void)setTransactionType:(unsigned)arg1 ;
-(NSData *)transactionId;
-(void)setTransactionStatus:(unsigned)arg1 ;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(BOOL)hasTransactionType;
-(unsigned)transactionStatus;
-(void)setHasTransactionStatus:(BOOL)arg1 ;
-(BOOL)hasTransactionStatus;
-(BOOL)hasTransactionId;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)hasCurrencyCode;
-(void)writeTo:(id)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setTerminalIdentifier:(NSData *)arg1 ;
-(void)setCommandParam1:(unsigned)arg1 ;
-(void)setHasCommandParam1:(BOOL)arg1 ;
-(BOOL)hasCommandParam1;
-(void)setCommandResult:(unsigned)arg1 ;
-(void)setHasCommandResult:(BOOL)arg1 ;
-(BOOL)hasCommandResult;
-(void)setHasCurrencyCode:(BOOL)arg1 ;
-(void)setExpressType:(unsigned)arg1 ;
-(void)setHasExpressType:(BOOL)arg1 ;
-(BOOL)hasExpressType;
-(void)setHasExpiryDate:(BOOL)arg1 ;
-(void)setHasHasExpiryDate:(BOOL)arg1 ;
-(BOOL)hasHasExpiryDate;
-(void)setInformative:(unsigned)arg1 ;
-(void)setHasInformative:(BOOL)arg1 ;
-(BOOL)hasInformative;
-(void)setHasIsBlacklisted:(BOOL)arg1 ;
-(BOOL)hasIsBlacklisted;
-(void)setSpid:(unsigned)arg1 ;
-(void)setHasSpid:(BOOL)arg1 ;
-(void)setTransactionCategory:(unsigned)arg1 ;
-(void)setHasTransactionCategory:(BOOL)arg1 ;
-(BOOL)hasTransactionCategory;
-(void)setTransactionExtension:(unsigned)arg1 ;
-(void)setHasTransactionExtension:(BOOL)arg1 ;
-(BOOL)hasTransactionExtension;
-(void)setHasTransactionInProgress:(BOOL)arg1 ;
-(BOOL)hasTransactionInProgress;
-(BOOL)hasTerminalIdentifier;
-(void)setTotalRSSISamples:(unsigned)arg1 ;
-(void)setHasTotalRSSISamples:(BOOL)arg1 ;
-(BOOL)hasTotalRSSISamples;
-(void)setAvgRSSIValue:(unsigned)arg1 ;
-(void)setHasAvgRSSIValue:(BOOL)arg1 ;
-(BOOL)hasAvgRSSIValue;
-(void)setMaxRSSIValue:(unsigned)arg1 ;
-(void)setHasMaxRSSIValue:(BOOL)arg1 ;
-(BOOL)hasMaxRSSIValue;
-(void)setMinRSSIValue:(unsigned)arg1 ;
-(void)setHasMinRSSIValue:(BOOL)arg1 ;
-(BOOL)hasMinRSSIValue;
-(void)setLocalValidation:(unsigned)arg1 ;
-(void)setHasLocalValidation:(BOOL)arg1 ;
-(BOOL)hasLocalValidation;
-(void)setAccessUniversityCode:(unsigned)arg1 ;
-(void)setHasAccessUniversityCode:(BOOL)arg1 ;
-(BOOL)hasAccessUniversityCode;
-(void)setIssuerCityCode:(unsigned)arg1 ;
-(void)setHasIssuerCityCode:(BOOL)arg1 ;
-(BOOL)hasIssuerCityCode;
-(void)setEndEventInterface:(unsigned)arg1 ;
-(void)setHasEndEventInterface:(BOOL)arg1 ;
-(BOOL)hasEndEventInterface;
-(void)setSfiRead:(unsigned)arg1 ;
-(void)setHasSfiRead:(BOOL)arg1 ;
-(BOOL)hasSfiRead;
-(void)setSfiUpdated:(unsigned)arg1 ;
-(void)setHasSfiUpdated:(BOOL)arg1 ;
-(BOOL)hasSfiUpdated;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(BOOL)hasExpiryDate;
-(unsigned)transactionCategory;
-(unsigned)transactionExtension;
-(NSData *)terminalIdentifier;
-(unsigned)totalRSSISamples;
-(unsigned)avgRSSIValue;
-(unsigned)maxRSSIValue;
-(unsigned)minRSSIValue;
-(unsigned)localValidation;
-(unsigned)accessUniversityCode;
-(unsigned)issuerCityCode;
-(unsigned)endEventInterface;
-(unsigned)sfiUpdated;
@end
