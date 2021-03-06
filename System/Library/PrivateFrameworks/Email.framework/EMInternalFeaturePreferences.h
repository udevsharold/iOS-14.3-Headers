/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMInternalFeaturePreferences : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultForFeature:(unsigned long long)arg1 ;
+(id)log;
+(BOOL)_featureEnabled:(unsigned long long)arg1 ;
+(BOOL)_userDefaultEnabledForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(BOOL)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2 ;
+(void)setFeature:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
+(void)_setUserDefaultEnabled:(BOOL)arg1 forKey:(id)arg2 ;
+(void)_registerForDefaultChanges;
+(BOOL)featureEnabled:(unsigned long long)arg1 ;
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
+(id)observeChangesForFeature:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

