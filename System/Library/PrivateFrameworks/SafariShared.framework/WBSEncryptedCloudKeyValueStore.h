/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {

	id _accountUpdateObserver;
	NSString* _dsid;
	RetainPtr<_PCSIdentitySetData *>* _pcsIdentitySet;
	RetainPtr<_OpaquePCSShareProtection *>* _pcsShareProtection;
	RetainPtr<const __CFData *>* _serializedPCSObject;
	NSUbiquitousKeyValueStore* _backingStore;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(id)defaultStore;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)backingStore;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(id)_dsidForPrimaryAccount;
-(id)dictionaryForKey:(id)arg1 ;
-(id)encryptPropertyList:(id)arg1 ;
-(void)dealloc;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(int)_currentPCSConfiguration;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)dictionaryRepresentation;
-(id)decryptEntry:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
@end

