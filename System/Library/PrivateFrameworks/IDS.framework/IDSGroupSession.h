/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSGroupSession, NSString;

@interface IDSGroupSession : NSObject {

	_IDSGroupSession* _internal;

}

@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
+(void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setPreferences:(id)arg1 ;
-(NSString *)sessionID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)destination;
-(void)dealloc;
-(unsigned)state;
-(id)_internal;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(unsigned)sessionEndedReason;
-(void)joinWithOptions:(id)arg1 ;
-(id)_internal_sessionWithValidityCheck;
-(void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(void)leaveGroupSession;
-(void)updateParticipantData:(id)arg1 withContext:(id)arg2 ;
-(void)setParticipantInfo:(id)arg1 ;
-(void)requestActiveParticipants;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3 ;
-(void)invalidate;
@end
