/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccount;

}

@property (nonatomic,readonly) NSString * fmfToken; 
@property (nonatomic,readonly) NSString * fmfAppToken; 
@property (nonatomic,readonly) NSString * fmipToken; 
@property (nonatomic,readonly) NSString * authToken; 
@property (nonatomic,readonly) NSString * mapsToken; 
@property (nonatomic,readonly) NSString * cloudKitToken; 
@property (nonatomic,readonly) NSString * fmipLostModeToken; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * altDSID; 
@property (nonatomic,readonly) NSString * mdmServerToken; 
-(NSString *)personID;
-(NSString *)altDSID;
-(NSString *)mdmServerToken;
-(NSString *)authToken;
-(NSString *)fmfToken;
-(NSString *)fmipLostModeToken;
-(NSString *)fmfAppToken;
-(NSString *)cloudKitToken;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)mapsToken;
-(NSString *)fmipToken;
@end

