/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSNumber, NSError;

@interface ASDAccountLookupResponse : ASDRequestResponse {

	BOOL _askToBuyEnabled;
	NSNumber* _accountID;

}

@property (copy) NSNumber * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (assign) BOOL askToBuyEnabled;              //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (copy) NSError * error; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSNumber *)accountID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccountID:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)askToBuyEnabled;
-(void)setAskToBuyEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
@end
