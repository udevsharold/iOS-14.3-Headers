/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding> {

	BOOL _requiresAuthentication;
	BOOL _passEntriesAvailable;
	BOOL _remotePassEntriesAvailable;

}

@property (assign,nonatomic) BOOL requiresAuthentication;                  //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign,nonatomic) BOOL passEntriesAvailable;                    //@synthesize passEntriesAvailable=_passEntriesAvailable - In the implementation block
@property (assign,nonatomic) BOOL remotePassEntriesAvailable;              //@synthesize remotePassEntriesAvailable=_remotePassEntriesAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)passEntriesAvailable;
-(BOOL)remotePassEntriesAvailable;
-(void)setPassEntriesAvailable:(BOOL)arg1 ;
-(void)setRemotePassEntriesAvailable:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
