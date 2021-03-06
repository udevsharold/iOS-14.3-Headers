/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDFHIRSession.h>
#import <libobjc.A.dylib/HDFHIRCredentialVendorDelegate.h>

@class HDFHIRCredentialVendor, NSString;

@interface HDFHIRCredentialedSession : HDFHIRSession <HDFHIRCredentialVendorDelegate> {

	HDFHIRCredentialVendor* _credentialVendor;

}

@property (nonatomic,readonly) HDFHIRCredentialVendor * credentialVendor;              //@synthesize credentialVendor=_credentialVendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDFHIRCredentialVendor *)credentialVendor;
-(void)credentialVendor:(id)arg1 refreshCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSpecification:(id)arg1 credentialVendor:(id)arg2 ;
@end

