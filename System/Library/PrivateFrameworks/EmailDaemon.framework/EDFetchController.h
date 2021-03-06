/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDAccountsProvider;
@class NSString;

@interface EDFetchController : NSObject <EFLoggable> {

	id<EDAccountsProvider> _accountsProvider;

}

@property (nonatomic,retain) id<EDAccountsProvider> accountsProvider;              //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)initWithAccountsProvider:(id)arg1 ;
-(id<EDAccountsProvider>)accountsProvider;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
@end

