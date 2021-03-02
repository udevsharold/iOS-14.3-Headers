/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface ASCodableCloudKitRelationship : PBCodable <NSCopying> {

	long long _eventCount;
	NSMutableArray* _addresses;
	NSString* _cloudKitAddress;
	NSMutableArray* _events;
	NSString* _incomingHandshakeToken;
	NSString* _outgoingHandshakeToken;
	NSString* _preferredReachableAddress;
	NSString* _preferredReachableService;
	unsigned _supportedPhoneFeatures;
	unsigned _supportedWatchFeatures;
	NSData* _uuid;
	SCD_Struct_AS7 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasIncomingHandshakeToken; 
@property (nonatomic,retain) NSString * incomingHandshakeToken;                 //@synthesize incomingHandshakeToken=_incomingHandshakeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasOutgoingHandshakeToken; 
@property (nonatomic,retain) NSString * outgoingHandshakeToken;                 //@synthesize outgoingHandshakeToken=_outgoingHandshakeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudKitAddress; 
@property (nonatomic,retain) NSString * cloudKitAddress;                        //@synthesize cloudKitAddress=_cloudKitAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * addresses;                        //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredReachableAddress; 
@property (nonatomic,retain) NSString * preferredReachableAddress;              //@synthesize preferredReachableAddress=_preferredReachableAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredReachableService; 
@property (nonatomic,retain) NSString * preferredReachableService;              //@synthesize preferredReachableService=_preferredReachableService - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                           //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasEventCount; 
@property (assign,nonatomic) long long eventCount;                              //@synthesize eventCount=_eventCount - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedPhoneFeatures; 
@property (assign,nonatomic) unsigned supportedPhoneFeatures;                   //@synthesize supportedPhoneFeatures=_supportedPhoneFeatures - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedWatchFeatures; 
@property (assign,nonatomic) unsigned supportedWatchFeatures;                   //@synthesize supportedWatchFeatures=_supportedWatchFeatures - In the implementation block
+(Class)eventsType;
+(Class)addressesType;
-(void)setUuid:(NSData *)arg1 ;
-(NSMutableArray *)events;
-(void)addEvents:(id)arg1 ;
-(void)setAddresses:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventCount:(long long)arg1 ;
-(NSMutableArray *)addresses;
-(long long)eventCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasEventCount:(BOOL)arg1 ;
-(BOOL)hasEventCount;
-(unsigned long long)hash;
-(void)clearEvents;
-(NSData *)uuid;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)eventsCount;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)incomingHandshakeToken;
-(void)setIncomingHandshakeToken:(NSString *)arg1 ;
-(NSString *)outgoingHandshakeToken;
-(void)setOutgoingHandshakeToken:(NSString *)arg1 ;
-(NSString *)cloudKitAddress;
-(void)setCloudKitAddress:(NSString *)arg1 ;
-(void)addAddresses:(id)arg1 ;
-(NSString *)preferredReachableAddress;
-(void)setPreferredReachableAddress:(NSString *)arg1 ;
-(NSString *)preferredReachableService;
-(void)setPreferredReachableService:(NSString *)arg1 ;
-(unsigned)supportedPhoneFeatures;
-(void)setSupportedPhoneFeatures:(unsigned)arg1 ;
-(unsigned)supportedWatchFeatures;
-(void)setSupportedWatchFeatures:(unsigned)arg1 ;
-(unsigned long long)addressesCount;
-(void)clearAddresses;
-(id)addressesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIncomingHandshakeToken;
-(BOOL)hasOutgoingHandshakeToken;
-(BOOL)hasCloudKitAddress;
-(BOOL)hasPreferredReachableAddress;
-(BOOL)hasPreferredReachableService;
-(void)setHasSupportedPhoneFeatures:(BOOL)arg1 ;
-(BOOL)hasSupportedPhoneFeatures;
-(void)setHasSupportedWatchFeatures:(BOOL)arg1 ;
-(BOOL)hasSupportedWatchFeatures;
@end
