/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSString;

@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {

	NSString* _user;

}

@property (nonatomic,copy) NSString * user;              //@synthesize user=_user - In the implementation block
-(void)setUser:(NSString *)arg1 ;
-(NSString *)user;
@end

