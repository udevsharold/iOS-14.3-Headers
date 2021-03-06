/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreBrightness/CoreBrightness-Structs.h>
@interface CBPreferencesHandler : NSObject
+(id)copyPreferenceForAllUsersForKey:(id)arg1 ;
+(BOOL)storePreferenceForAllUsersForKey:(id)arg1 andValue:(id)arg2 ;
+(BOOL)migrateNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 toKey:(id)arg3 ;
+(id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 ;
+(BOOL)storeNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 andValue:(id)arg4 ;
+(CFDictionaryRef)copyPreferenceDictionaryForUser:(id)arg1 ;
+(BOOL)storePreferenceForUser:(id)arg1 withKey:(id)arg2 andValue:(id)arg3 ;
+(BOOL)storePreferenceForAllUsersMultiple:(id)arg1 ;
+(id)copyPreferenceForUser:(id)arg1 forKey:(id)arg2 ;
+(id)copyPreferenceForAllUsersMultiple:(id)arg1 ;
+(void)consistencyCheckForUser:(id)arg1 ;
+(id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2 ;
@end

