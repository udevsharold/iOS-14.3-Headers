/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSUserDefaults : NSObject {

	id _kvo_;
	CFStringRef _identifier_;
	CFStringRef _container_;
	void** _reserved[2];

}
+(id)standardUserDefaults;
+(id)_copyStandardUserDefaultsIfPresent;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(id)_web_preferredLanguageCode;
+(void)resetStandardUserDefaults;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)_web_defaultsDidChange;
-(id)objectForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(BOOL)synchronize;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)searchList;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)initWithUser:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)_willBeginKeyValueObserving;
-(id)URLForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)removePersistentDomainForName:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)_didEndKeyValueObserving;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)setSearchList:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(void)addSuiteNamed:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(BOOL)objectIsForcedForKey:(id)arg1 ;
-(id)volatileDomainForName:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)longForKey:(id)arg1 ;
-(id)stringArrayForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)finalize;
-(oneway void)release;
-(id)initWithSuiteName:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(id)volatileDomainNames;
-(id)valueForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(CFStringRef)_container;
-(BOOL)_observingCFPreferences;
-(CFStringRef)_identifier;
-(void)_setIdentifier:(CFStringRef)arg1 ;
-(void)_setContainer:(CFURLRef)arg1 ;
@end

