/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSHashTable, NSMapTable, NSPointerArray;

@interface __NSBundleTables : NSObject {

	NSLock* _lock;
	NSHashTable* _staticFrameworks;
	NSHashTable* _loadedBundles;
	NSHashTable* _loadedFrameworks;
	NSMapTable* _resolvedPathToBundles;
	NSMapTable* _bundleForClassMap;
	NSPointerArray* _immortalBundles;

}
-(id)init;
-(void)dealloc;
@end
