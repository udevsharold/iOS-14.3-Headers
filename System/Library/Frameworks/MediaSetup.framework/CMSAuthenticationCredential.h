/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface CMSAuthenticationCredential : NSObject <NSSecureCoding, NSCopying> {

	NSString* _authHeader;
	NSString* _authToken;
	NSString* _tokenType;
	NSDate* _authTokenExpiration;
	NSString* _scope;
	NSString* _refreshToken;

}

@property (readonly) NSString * authToken;                      //@synthesize authToken=_authToken - In the implementation block
@property (readonly) NSString * tokenType;                      //@synthesize tokenType=_tokenType - In the implementation block
@property (readonly) NSDate * authTokenExpiration;              //@synthesize authTokenExpiration=_authTokenExpiration - In the implementation block
@property (readonly) NSString * scope;                          //@synthesize scope=_scope - In the implementation block
@property (readonly) NSString * refreshToken;                   //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSString * authHeader; 
+(BOOL)supportsSecureCoding;
+(id)authCredentialWithToken:(id)arg1 tokenType:(id)arg2 expirationDate:(id)arg3 scope:(id)arg4 refreshToken:(id)arg5 ;
+(id)authCredentialFromMSAuthData:(id)arg1 ;
-(NSString *)scope;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)authToken;
-(NSString *)tokenType;
-(NSString *)refreshToken;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithToken:(id)arg1 tokenType:(id)arg2 expirationDate:(id)arg3 scope:(id)arg4 refreshToken:(id)arg5 ;
-(NSString *)authHeader;
-(NSDate *)authTokenExpiration;
@end
