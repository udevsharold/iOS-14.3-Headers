/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSArray, VSAccountStore;

@interface VSCredentialSaveOperation : VSAsyncOperation {

	VSOptional* _result;
	NSArray* _unsavedAccounts;
	VSAccountStore* _accountStore;

}

@property (nonatomic,copy) NSArray * unsavedAccounts;                    //@synthesize unsavedAccounts=_unsavedAccounts - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) VSOptional * result;                        //@synthesize result=_result - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(VSOptional *)result;
-(VSAccountStore *)accountStore;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(id)init;
-(void)executionDidBegin;
-(NSArray *)unsavedAccounts;
-(void)_didSaveAccounts:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2 ;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
@end
