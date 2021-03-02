/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDeviceHandle, HMDAccountIdentifier, HMDAccountHandle, HMDHomeKitVersion, NSString, NSArray;

@interface HMDRemoteMessageSenderContext : HMFObject <HMFObject, NSCopying> {

	HMDDeviceHandle* _deviceHandle;
	HMDAccountIdentifier* _accountIdentifier;
	HMDAccountHandle* _accountHandle;
	HMDHomeKitVersion* _deviceVersion;

}

@property (copy,readonly) HMDDeviceHandle * deviceHandle;                         //@synthesize deviceHandle=_deviceHandle - In the implementation block
@property (copy,readonly) HMDAccountIdentifier * accountIdentifier;               //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle;                       //@synthesize accountHandle=_accountHandle - In the implementation block
@property (copy,readonly) HMDHomeKitVersion * deviceVersion;                      //@synthesize deviceVersion=_deviceVersion - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDAccountIdentifier *)accountIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDHomeKitVersion *)deviceVersion;
-(NSString *)propertyDescription;
-(HMDDeviceHandle *)deviceHandle;
-(HMDAccountHandle *)accountHandle;
-(id)initWithDeviceHandle:(id)arg1 accountHandle:(id)arg2 accountIdentifier:(id)arg3 deviceVersion:(id)arg4 ;
@end
