/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBKPreferences : NSObject
+(id)storeBookkeeperPreferences;
-(id)init;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(/*^block*/id)arg2 ;
-(void)_preferencesDidChange;
@end
