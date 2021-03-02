/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKCredentialRequestProtocol, AKCredential;
@interface AKAuthorization : NSObject <NSSecureCoding> {

	id<AKCredentialRequestProtocol> _authorizedRequest;
	id<AKCredential> _credential;

}

@property (nonatomic,retain) id<AKCredentialRequestProtocol> authorizedRequest;              //@synthesize authorizedRequest=_authorizedRequest - In the implementation block
@property (nonatomic,retain) id<AKCredential> credential;                                    //@synthesize credential=_credential - In the implementation block
+(BOOL)supportsSecureCoding;
-(id<AKCredential>)credential;
-(void)setCredential:(id<AKCredential>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id<AKCredentialRequestProtocol>)authorizedRequest;
-(void)setAuthorizedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
