/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned long long _max;
	unsigned long long _count;
	unsigned long long _nestingLevel;
	_NSUndoObject* _head;

}
-(id)groupIdentifier;
-(void)push:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(id)popUndoObject;
-(void)_removeBottom;
-(BOOL)isDiscardable;
-(void)markBegin;
-(void)setGroupIdentifier:(id)arg1 ;
-(id)description;
-(void)markEnd;
-(id)topUndoObject;
-(id)_beginMark;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(BOOL)popAndInvoke;
-(unsigned long long)nestingLevel;
-(void)removeAllObjects;
-(unsigned long long)max;
@end
