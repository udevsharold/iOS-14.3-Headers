/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStore, NSPersistentStoreCache, NSMutableDictionary;

@interface NSGenerationalRowCache : NSObject {

	NSPersistentStore* _store;
	NSPersistentStoreCache* _primaryCache;
	NSMutableDictionary* _rowCachesByGenerationToken;
	os_unfair_lock_s _lock;

}
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
@end
