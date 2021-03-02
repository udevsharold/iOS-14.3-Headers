/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject {

	/*^block*/id _contactObserver;
	id _userDictionaryObserver;
	unsigned long long _observerAssertionCount;
	NSSet* _addressBookTokens;
	NSSet* _userDictionaryTokens;
	NSUUID* _userDictionaryUUID;

}

@property (nonatomic,retain) NSSet * addressBookTokens;                 //@synthesize addressBookTokens=_addressBookTokens - In the implementation block
@property (nonatomic,retain) NSSet * userDictionaryTokens;              //@synthesize userDictionaryTokens=_userDictionaryTokens - In the implementation block
@property (nonatomic,copy) NSUUID * userDictionaryUUID;                 //@synthesize userDictionaryUUID=_userDictionaryUUID - In the implementation block
+(id)sharedTextCheckerExemptionsImpl;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
-(void)setUserDictionaryTokens:(NSSet *)arg1 ;
-(void)dealloc;
-(void)addObserverAssertion;
-(NSSet *)addressBookTokens;
-(NSSet *)userDictionaryTokens;
-(BOOL)stringIsExemptFromChecker:(id)arg1 ;
-(NSUUID *)userDictionaryUUID;
-(void)setAddressBookTokens:(NSSet *)arg1 ;
-(void)removeObserverAssertion;
@end
