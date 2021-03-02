/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString;

@interface ASPasswordCredential : NSObject <ASAuthorizationCredential> {

	NSString* _user;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * user;                  //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)credentialWithUser:(id)arg1 password:(id)arg2 ;
-(NSString *)user;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)password;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUser:(id)arg1 password:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
