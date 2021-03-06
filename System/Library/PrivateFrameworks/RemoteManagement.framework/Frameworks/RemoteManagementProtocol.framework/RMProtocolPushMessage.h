/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolSynchronizationTokens;

@interface RMProtocolPushMessage : RMModelPayloadBase {

	NSString* _messageEnrollmentToken;
	RMProtocolSynchronizationTokens* _messageSyncTokens;

}

@property (nonatomic,copy) NSString * messageEnrollmentToken;                                //@synthesize messageEnrollmentToken=_messageEnrollmentToken - In the implementation block
@property (nonatomic,copy) RMProtocolSynchronizationTokens * messageSyncTokens;              //@synthesize messageSyncTokens=_messageSyncTokens - In the implementation block
+(id)requestWithEnrollmentToken:(id)arg1 syncTokens:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setMessageEnrollmentToken:(NSString *)arg1 ;
-(void)setMessageSyncTokens:(RMProtocolSynchronizationTokens *)arg1 ;
-(NSString *)messageEnrollmentToken;
-(RMProtocolSynchronizationTokens *)messageSyncTokens;
@end

