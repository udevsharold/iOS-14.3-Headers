/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSSearchDelegate.h>

@class MSSearch, NSOperationQueue, ACAccount, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {

	MSSearch* _search;
	NSOperationQueue* _requesterQueue;
	ACAccount* _account;
	/*^block*/id _handler;
	int _attempts;
	BOOL _canceled;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccount:(ACAccount *)arg1 ;
-(id)init;
-(ACAccount *)account;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(/*^block*/id)arg1 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_validateToken:(id)arg1 ;
-(void)_resendVerificationEmailForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)_verify;
-(id)initWithAccount:(id)arg1 ;
-(void)cancel;
@end

