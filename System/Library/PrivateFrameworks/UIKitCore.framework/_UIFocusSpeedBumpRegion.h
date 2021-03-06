/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion {

	unsigned long long _speedBumpEdges;

}

@property (assign,nonatomic) unsigned long long speedBumpEdges;              //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1 ;
-(unsigned long long)speedBumpEdges;
-(id)initWithFrame:(CGRect)arg1 speedBumpEdges:(unsigned long long)arg2 ;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

