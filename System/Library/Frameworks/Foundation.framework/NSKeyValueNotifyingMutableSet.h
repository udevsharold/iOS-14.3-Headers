/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyValueMutableSet.h>

@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {

	NSMutableSet* _mutableSet;

}
+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)intersectSet:(id)arg1 ;
-(void)_proxyNonGCFinalize;
-(void)setSet:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObjectsFromArray:(id)arg1 ;
@end

