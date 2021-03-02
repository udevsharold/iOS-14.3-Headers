/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

@class NSError;

@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem : HAP2AccessoryServerPairingDriverWorkItem {

	NSError* _cancelError;

}

@property (nonatomic,retain) NSError * cancelError;              //@synthesize cancelError=_cancelError - In the implementation block
+(id)checkCertificate;
-(void)cancelWithError:(id)arg1 ;
-(NSError *)cancelError;
-(void)setCancelError:(NSError *)arg1 ;
-(void)runForPairingDriver:(id)arg1 ;
@end
