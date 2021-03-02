/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface _UILazyMapTable : NSObject {

	/*^block*/id _mappingBlock;
	NSMapTable* _keysToClientTables;
	NSMapTable* _keysToValues;
	NSMapTable* _valuesToKeys;

}
-(id)objectForKey:(id)arg1 ;
-(id)keys;
-(id)cachedObjectEnumerable;
-(id)initWithMappingBlock:(/*^block*/id)arg1 ;
-(id)keyEnumerable;
-(id)description;
-(void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(BOOL)hasCachedObjectForKey:(id)arg1 ;
-(void)registerClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(unsigned long long)count;
-(id)cachedObjects;
@end
