/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLWebOAuth2TokenResponse.h>

@class NSDictionary, NSString, NSDate, NSError;

@interface SLGoogleOAuth2TokenResponse : NSObject <SLWebOAuth2TokenResponse> {

	NSDictionary* _data;
	NSError* _error;
	NSString* _errorMessage;
	NSDate* _expiryDate;
	NSString* _GUID;
	NSString* _refreshToken;
	long long _statusCode;
	NSString* _token;
	NSString* _idToken;

}

@property (readonly) long long statusCode;                          //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * data;                           //@synthesize data=_data - In the implementation block
@property (readonly) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (readonly) NSString * refreshToken;                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSString * idToken;                            //@synthesize idToken=_idToken - In the implementation block
@property (readonly) NSDate * expiryDate;                           //@synthesize expiryDate=_expiryDate - In the implementation block
@property (readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;                       //@synthesize errorMessage=_errorMessage - In the implementation block
@property (getter=UID,readonly) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)expiryDate;
-(long long)statusCode;
-(NSError *)error;
-(NSDictionary *)data;
-(NSString *)errorMessage;
-(NSString *)refreshToken;
-(NSString *)token;
-(NSString *)GUID;
-(NSString *)idToken;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

