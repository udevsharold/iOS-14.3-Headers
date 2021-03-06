/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase {

	NSString* _statusActivationLockBypassCode;

}

@property (nonatomic,copy) NSString * statusActivationLockBypassCode;              //@synthesize statusActivationLockBypassCode=_statusActivationLockBypassCode - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithActivationLockBypassCode:(id)arg1 ;
+(id)buildRequiredOnlyWithActivationLockBypassCode:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusActivationLockBypassCode:(NSString *)arg1 ;
-(NSString *)statusActivationLockBypassCode;
@end

