/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, CKServerChangeToken;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _lastSyncDownDate;
	long long _lastSyncDownStatus;
	CKServerChangeToken* _changeToken;
	unsigned long long _clientRequestID;

}

@property (retain) NSDate * lastSyncDownDate;                                 //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (assign,nonatomic) long long lastSyncDownStatus;                    //@synthesize lastSyncDownStatus=_lastSyncDownStatus - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * changeToken;               //@synthesize changeToken=_changeToken - In the implementation block
@property (assign,nonatomic) unsigned long long clientRequestID;              //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,readonly) BOOL hasNeverSyncedDown; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientRequestID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKServerChangeToken *)changeToken;
-(id)description;
-(unsigned long long)clientRequestID;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3 ;
-(NSDate *)lastSyncDownDate;
-(long long)lastSyncDownStatus;
-(void)setLastSyncDownDate:(NSDate *)arg1 ;
-(void)setLastSyncDownStatus:(long long)arg1 ;
-(void)forgetChangeTokens;
-(void)forgetClientRequestID;
-(BOOL)hasNeverSyncedDown;
-(id)initWithServerSyncState:(id)arg1 ;
@end

