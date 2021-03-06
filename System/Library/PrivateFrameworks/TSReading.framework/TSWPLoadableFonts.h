/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class NSOperationQueue, NSMutableDictionary;

@interface TSWPLoadableFonts : NSObject {

	NSOperationQueue* _fontQueue;
	NSMutableDictionary* _loadableFonts;
	NSMutableDictionary* _loadableFontFamilies;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(id)_singletonAlloc;
-(id)init;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(void)loadAll;
-(void)backgroundLoadAll;
-(void)loadFontWithName:(id)arg1 ;
-(void)p_loadFontWithInfo:(id)arg1 ;
-(void)pauseBackgroundLoading;
-(void)resumeBackgroundLoading;
-(void)loadFontsForGroup:(id)arg1 ;
-(void)registerFontName:(id)arg1 forPath:(id)arg2 forGroup:(id)arg3 isObfuscated:(BOOL)arg4 backgroundLoad:(BOOL)arg5 ;
-(void)unregisterFontsForGroup:(id)arg1 ;
@end

