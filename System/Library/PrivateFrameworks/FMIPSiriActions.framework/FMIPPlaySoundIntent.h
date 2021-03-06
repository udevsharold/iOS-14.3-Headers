/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <FMIPSiriActions/FMIPIdentifiable.h>

@class INObject;

@interface FMIPPlaySoundIntent : INIntent <FMIPIdentifiable>

@property (nonatomic,copy) INObject * deviceId; 
@property (assign,nonatomic) long long playSoundDeviceClass; 
+(id)identityTag;
+(long long)playSoundDeviceClassForDeviceType:(long long)arg1 ;
+(id)playSoundIntentWithDeviceId:(id)arg1 deviceType:(long long)arg2 deviceDisplayName:(id)arg3 ;
-(id)rootAggregateKey;
@end

