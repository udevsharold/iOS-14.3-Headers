/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class SFPasswordCredentialIdentity, NSExtension, SFSafariCredential;

@interface WBSCredentialIdentityMatch : WBSFormAutoFillItem {

	SFPasswordCredentialIdentity* _credentialIdentity;
	NSExtension* _extension;
	SFSafariCredential* _resolvedCredential;

}

@property (nonatomic,readonly) SFPasswordCredentialIdentity * credentialIdentity;              //@synthesize credentialIdentity=_credentialIdentity - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) SFSafariCredential * resolvedCredential;                        //@synthesize resolvedCredential=_resolvedCredential - In the implementation block
-(NSExtension *)extension;
-(SFPasswordCredentialIdentity *)credentialIdentity;
-(id)initWithCredentialIdentity:(id)arg1 extension:(id)arg2 ;
-(id)resolvedMatchWithCredential:(id)arg1 ;
-(SFSafariCredential *)resolvedCredential;
-(id)completion;
@end

