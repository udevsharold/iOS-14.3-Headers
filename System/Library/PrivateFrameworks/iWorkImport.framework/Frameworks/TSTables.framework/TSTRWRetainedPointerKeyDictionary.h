/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSURetainedPointerKeyDictionary;

@interface TSTRWRetainedPointerKeyDictionary : NSObject {

	opaque_pthread_rwlock_t mRWLock;
	TSURetainedPointerKeyDictionary* mRetainedPointerKeyDictionary;

}
-(id)objectForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjects;
@end

