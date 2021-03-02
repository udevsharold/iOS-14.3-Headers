/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject {

	NSMutableDictionary* _cache;

}

@property (retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
+(id)preferencesFileUrl;
+(id)preferencesFilePath;
+(BOOL)preferencesFileExists;
-(void)reload;
-(id)objectForKey:(id)arg1 ;
-(BOOL)removeObjectsForKeys:(id)arg1 ;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)removeObjectForKey:(id)arg1 ;
-(void)populateCache;
-(void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1 ;
-(BOOL)saveCache;
@end
