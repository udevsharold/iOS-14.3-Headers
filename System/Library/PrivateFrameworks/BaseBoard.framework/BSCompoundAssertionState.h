/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSOrderedSet;


@protocol BSCompoundAssertionState
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
@property (readonly) NSOrderedSet * orderedContext; 
@required
-(NSOrderedSet *)orderedContext;
-(BOOL)isActive;
-(NSSet *)context;

@end
