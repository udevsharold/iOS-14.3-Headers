/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject

@property (getter=_isImpl,nonatomic,readonly) UITextSelectionRectImpl * isImpl; 
@property (nonatomic,readonly) BOOL _drawsOwnHighlight; 
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) long long writingDirection; 
@property (nonatomic,readonly) BOOL containsStart; 
@property (nonatomic,readonly) BOOL containsEnd; 
@property (nonatomic,readonly) BOOL isVertical; 
+(id)startRectFromRects:(id)arg1 ;
+(id)endRectFromRects:(id)arg1 ;
+(CGRect)startEdgeFromRects:(id)arg1 ;
+(CGRect)endEdgeFromRects:(id)arg1 ;
+(BOOL)startIsHorizontal:(id)arg1 ;
+(BOOL)endIsHorizontal:(id)arg1 ;
-(BOOL)isVertical;
-(id)range;
-(CGRect)rect;
-(unsigned long long)hash;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(long long)writingDirection;
-(BOOL)_drawsOwnHighlight;
-(BOOL)isEqual:(id)arg1 ;
-(id)_isImpl;
@end
