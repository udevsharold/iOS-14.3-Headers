/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ApplePushService/APSMessage.h>

@class APSIncomingMessageCheckpointTrace, NSDate, NSData;

@interface APSIncomingMessage : APSMessage {

	APSIncomingMessageCheckpointTrace* _checkpointTrace;

}

@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSData * token; 
@property (assign,getter=wasFromStorage,nonatomic) BOOL fromStorage; 
@property (assign,getter=wasLastMessageFromStorage,nonatomic) BOOL lastMessageFromStorage; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,retain) APSIncomingMessageCheckpointTrace * checkpointTrace;                       //@synthesize checkpointTrace=_checkpointTrace - In the implementation block
@property (assign,getter=isTracingEnabled,nonatomic) BOOL tracingEnabled; 
@property (nonatomic,copy) NSData * tracingUUID; 
@property (assign,nonatomic) unsigned long long pushType; 
@property (assign,nonatomic) unsigned pushFlags; 
-(void)setToken:(NSData *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)token;
-(BOOL)isTracingEnabled;
-(NSData *)tracingUUID;
-(void)setPushType:(unsigned long long)arg1 ;
-(unsigned)pushFlags;
-(void)setPushFlags:(unsigned)arg1 ;
-(BOOL)wasFromStorage;
-(void)setFromStorage:(BOOL)arg1 ;
-(BOOL)wasLastMessageFromStorage;
-(void)setLastMessageFromStorage:(BOOL)arg1 ;
-(void)setTracingUUID:(NSData *)arg1 ;
-(void)setTracingEnabled:(BOOL)arg1 ;
-(APSIncomingMessageCheckpointTrace *)checkpointTrace;
-(unsigned long long)pushType;
-(long long)priority;
-(void)setCheckpointTrace:(APSIncomingMessageCheckpointTrace *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
