/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AADeviceProvisioningSession : NSObject {

	NSString* _dsid;
	unsigned long long _dsidNumber;
	OpaqueCFHTTPCookieStorageRef _cookieStorageRef;

}
-(id)init;
-(void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2 ;
-(id)deviceProvisioningInfo;
-(void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2 ;
-(id)initWithDSID:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)addProvisioningInfoToAARequest:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(int)eraseProvisioning;
-(int)provisionDeviceWithData:(id)arg1 ;
-(int)synchronizeProvisioningWithData:(id)arg1 ;
@end

