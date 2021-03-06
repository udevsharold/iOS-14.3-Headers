/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCharacteristic, NSString;

@interface HMDCharacteristicRequest : HMFObject <HMFLogging> {

	HMDCharacteristic* _characteristic;
	id _previousValue;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id previousValue;                                //@synthesize previousValue=_previousValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)requestWithCharacteristic:(id)arg1 ;
-(id)attributeDescriptions;
-(BOOL)isEqual:(id)arg1 ;
-(HMDCharacteristic *)characteristic;
-(id)previousValue;
-(id)initWithCharacteristic:(id)arg1 ;
@end

