/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class PSAccountEnumerator;

@interface PSAccountsLinkSpecifier : PSSpecifier {

	PSAccountEnumerator* _accountEnumerator;

}

@property (nonatomic,retain) PSAccountEnumerator * accountEnumerator;              //@synthesize accountEnumerator=_accountEnumerator - In the implementation block
-(id)_accountsCount:(id)arg1 ;
-(PSAccountEnumerator *)accountEnumerator;
-(id)initWithDetailClass:(Class)arg1 ;
-(void)setAccountEnumerator:(PSAccountEnumerator *)arg1 ;
@end

