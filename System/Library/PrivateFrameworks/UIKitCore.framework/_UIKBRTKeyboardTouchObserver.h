/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIKBRTKeyboardTouchObserver : NSObject {

	int _homeRowOffsetIndex;
	NSArray* _rowOffsets;
	NSArray* _rowXEdges;
	NSArray* _rowYEdgesLeft;
	NSArray* _rowYEdgesRight;
	CGPoint _fCenter;
	CGPoint _jCenter;
	CGSize _keySize;

}

@property (assign,nonatomic) CGPoint fCenter;                       //@synthesize fCenter=_fCenter - In the implementation block
@property (assign,nonatomic) CGPoint jCenter;                       //@synthesize jCenter=_jCenter - In the implementation block
@property (assign,nonatomic) CGSize keySize;                        //@synthesize keySize=_keySize - In the implementation block
@property (nonatomic,retain) NSArray * rowOffsets;                  //@synthesize rowOffsets=_rowOffsets - In the implementation block
@property (assign,nonatomic) int homeRowOffsetIndex;                //@synthesize homeRowOffsetIndex=_homeRowOffsetIndex - In the implementation block
@property (nonatomic,retain) NSArray * rowXEdges;                   //@synthesize rowXEdges=_rowXEdges - In the implementation block
@property (nonatomic,retain) NSArray * rowYEdgesLeft;               //@synthesize rowYEdgesLeft=_rowYEdgesLeft - In the implementation block
@property (nonatomic,retain) NSArray * rowYEdgesRight;              //@synthesize rowYEdgesRight=_rowYEdgesRight - In the implementation block
-(CGPoint)fCenter;
-(CGPoint)jCenter;
-(CGSize)keySize;
-(void)reset;
-(NSArray *)rowXEdges;
-(void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(BOOL)arg2 ;
-(void)addTouchLocation:(CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4 ;
-(void)moveTouchWithIdentifier:(id)arg1 toLocation:(CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4 ;
-(void)updateWithFCenter:(CGPoint)arg1 jCenter:(CGPoint)arg2 keySize:(CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5 ;
-(NSArray *)rowOffsets;
-(void)setFCenter:(CGPoint)arg1 ;
-(void)setJCenter:(CGPoint)arg1 ;
-(void)setKeySize:(CGSize)arg1 ;
-(void)setRowOffsets:(NSArray *)arg1 ;
-(void)addTouchLocation:(CGPoint)arg1 withRadius:(double)arg2 withIdentifier:(id)arg3 ;
-(int)homeRowOffsetIndex;
-(void)removeTouchWithIdentifier:(id)arg1 ;
-(void)setHomeRowOffsetIndex:(int)arg1 ;
-(void)setRowXEdges:(NSArray *)arg1 ;
-(NSArray *)rowYEdgesLeft;
-(void)setRowYEdgesLeft:(NSArray *)arg1 ;
-(NSArray *)rowYEdgesRight;
-(void)setRowYEdgesRight:(NSArray *)arg1 ;
@end

