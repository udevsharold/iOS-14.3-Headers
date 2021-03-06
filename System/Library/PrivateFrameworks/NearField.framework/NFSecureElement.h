/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFHardwareSecureElementInfo, NSString, NSNumber;

@interface NFSecureElement : NSObject {

	NFHardwareSecureElementInfo* _info;
	BOOL _isDirty;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * rsaCertificate; 
@property (readonly) NSString * eccCertificate; 
@property (readonly) NSString * eckaCertificate; 
@property (readonly) BOOL isProductionSigned; 
@property (readonly) BOOL isInRestrictedMode; 
@property (readonly) unsigned long long OSVersion; 
@property (readonly) unsigned long long fullOSVersion; 
@property (readonly) NSNumber * sequenceCounter; 
@property (readonly) unsigned supportedTechnologies; 
@property (readonly) BOOL available; 
+(unsigned)supportedTechnologies;
+(id)embeddedSecureElement;
+(id)icefallSecureElement;
-(unsigned long long)OSVersion;
-(BOOL)available;
-(NSString *)serialNumber;
-(id)manifestQueryBlob;
-(unsigned)supportedTechnologies;
-(id)info;
-(NSString *)eckaCertificate;
-(NSString *)eccCertificate;
-(void)_markDirty;
-(BOOL)isInRestrictedMode;
-(BOOL)isSeshatAvailabledInRestrictedMode;
-(id)identifier;
-(BOOL)isProductionSigned;
-(unsigned long long)fullOSVersion;
-(NSString *)rsaCertificate;
-(NSNumber *)sequenceCounter;
-(id)_initWithInfo:(id)arg1 ;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg1 ;
-(void)_updateIfDirty;
-(void)_updateSecureElementInfo:(id)arg1 ;
-(unsigned)hwType;
@end

