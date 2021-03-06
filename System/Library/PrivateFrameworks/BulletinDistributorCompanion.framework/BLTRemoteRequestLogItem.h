/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSNumber, NSUUID;

@interface BLTRemoteRequestLogItem : NSObject {

	NSString* _idsTransmitIdentifier;
	NSString* _idsResponseIdentifier;
	id _requestDescription;
	NSDate* _cacheDate;
	NSNumber* _sequenceNumber;
	NSUUID* _sessionIdentifier;
	unsigned long long _sessionState;

}

@property (nonatomic,copy) NSString * idsTransmitIdentifier;               //@synthesize idsTransmitIdentifier=_idsTransmitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsResponseIdentifier;               //@synthesize idsResponseIdentifier=_idsResponseIdentifier - In the implementation block
@property (nonatomic,copy) id requestDescription;                          //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,retain) NSDate * cacheDate;                           //@synthesize cacheDate=_cacheDate - In the implementation block
@property (nonatomic,retain) NSNumber * sequenceNumber;                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                   //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
+(id)remoteRequestLogItemWithIDSTransmitIdentifier:(id)arg1 IDSResponseIdentifier:(id)arg2 requestDescription:(id)arg3 sequenceNumber:(id)arg4 sessionIdentifier:(id)arg5 sessionState:(unsigned long long)arg6 ;
-(void)setSequenceNumber:(NSNumber *)arg1 ;
-(NSNumber *)sequenceNumber;
-(NSUUID *)sessionIdentifier;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)sessionState;
-(id)description;
-(id)requestDescription;
-(void)setSessionState:(unsigned long long)arg1 ;
-(void)setRequestDescription:(id)arg1 ;
-(void)setIdsTransmitIdentifier:(NSString *)arg1 ;
-(void)setIdsResponseIdentifier:(NSString *)arg1 ;
-(void)setCacheDate:(NSDate *)arg1 ;
-(NSString *)idsTransmitIdentifier;
-(NSString *)idsResponseIdentifier;
-(NSDate *)cacheDate;
@end

