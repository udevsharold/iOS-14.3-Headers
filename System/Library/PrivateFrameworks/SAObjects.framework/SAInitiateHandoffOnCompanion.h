/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SARemoteDevice;

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAHandoffPayload> handoffPayload; 
@property (nonatomic,copy) NSString * lockScreenText; 
@property (nonatomic,copy) NSString * lockScreenTextDialogIdentifier; 
@property (nonatomic,copy) NSString * notificationText; 
@property (nonatomic,copy) NSString * notificationTextDialogIdentifier; 
@property (nonatomic,retain) SARemoteDevice * targetDevice; 
+(id)initiateHandoffOnCompanion;
+(id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SARemoteDevice *)targetDevice;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(id<SAHandoffPayload>)handoffPayload;
-(void)setHandoffPayload:(id<SAHandoffPayload>)arg1 ;
-(NSString *)lockScreenText;
-(void)setLockScreenText:(NSString *)arg1 ;
-(NSString *)lockScreenTextDialogIdentifier;
-(void)setLockScreenTextDialogIdentifier:(NSString *)arg1 ;
-(NSString *)notificationText;
-(void)setNotificationText:(NSString *)arg1 ;
-(NSString *)notificationTextDialogIdentifier;
-(void)setNotificationTextDialogIdentifier:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

