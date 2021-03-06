/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {

	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
-(id)init;
-(id)keychainItemsForAccounts:(id)arg1 ;
-(BOOL)migrateKeychainItem:(id)arg1 toKeybag:(BOOL)arg2 ;
-(void)migrateAllKeychainItems;
-(id)allKeychainItems;
-(void)_validateKeychainItemClass:(id)arg1 ;
-(void)_migrateUUIDKeychainItems:(id)arg1 ;
-(id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2 ;
-(id)_keychainItemFromAttributesArray:(id)arg1 ;
-(id)_keychainItemFromAttributes:(id)arg1 ;
@end

