/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSNumber, NSDate;

@interface MCCertificatePayload : MCPayload {

	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;
	NSNumber* _isIdentity;
	NSNumber* _isRoot;
	NSNumber* _expiryInterval;
	NSString* _certSubject;
	NSString* _certIssuer;

}

@property (nonatomic,copy) NSString * installedOnDeviceID;                  //@synthesize installedOnDeviceID=_installedOnDeviceID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;              //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) BOOL isFullyTrustedRootCert; 
@property (nonatomic,readonly) BOOL isIdentity; 
@property (nonatomic,retain,readonly) NSDate * expiry; 
@property (nonatomic,readonly) BOOL isSigned; 
-(BOOL)isSigned;
-(id)verboseDescription;
-(BOOL)isRoot;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)issuer;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(SecCertificateRef)copyCertificate;
-(NSData *)certificatePersistentID;
-(BOOL)isIdentity;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(SecIdentityRef)copyIdentityFromKeychain;
-(id)certificateSubject;
-(NSString *)installedOnDeviceID;
-(BOOL)isFullyTrustedRootCert;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(void)setInstalledOnDeviceID:(NSString *)arg1 ;
-(NSDate *)expiry;
-(id)title;
@end

