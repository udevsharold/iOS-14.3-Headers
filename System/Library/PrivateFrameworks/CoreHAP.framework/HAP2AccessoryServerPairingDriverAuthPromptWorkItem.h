/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem {

	unsigned long long _permissionType;
	NSError* _cancelError;

}

@property (nonatomic,readonly) unsigned long long permissionType;              //@synthesize permissionType=_permissionType - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                            //@synthesize cancelError=_cancelError - In the implementation block
+(id)promptForType:(unsigned long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(NSError *)cancelError;
-(id)description;
-(void)setCancelError:(NSError *)arg1 ;
-(unsigned long long)permissionType;
-(void)runForPairingDriver:(id)arg1 ;
-(id)initWithPermissionType:(unsigned long long)arg1 ;
@end
