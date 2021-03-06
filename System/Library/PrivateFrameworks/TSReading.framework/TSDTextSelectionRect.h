/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class UITextRange;

@interface TSDTextSelectionRect : UITextSelectionRect {

	CGRect _rect;
	long long _writingDirection;
	UITextRange* _range;
	BOOL _containsStart;
	BOOL _containsEnd;
	BOOL _isVertical;

}

@property (nonatomic,retain) UITextRange * range;              //@synthesize range=_range - In the implementation block
-(BOOL)isVertical;
-(UITextRange *)range;
-(CGRect)rect;
-(void)dealloc;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(long long)writingDirection;
-(void)setRange:(UITextRange *)arg1 ;
-(id)initWithRect:(CGRect)arg1 direction:(long long)arg2 range:(id)arg3 containsStart:(BOOL)arg4 containsEnd:(BOOL)arg5 isVertical:(BOOL)arg6 ;
@end

