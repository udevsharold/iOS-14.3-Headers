/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSLayoutManager;

@interface UITextDragPreviewRenderer : NSObject {

	NSRange _range;
	CGRect _firstRect;
	CGRect _lastRect;
	CGRect _middleRect;
	CGPoint _origin;
	UIImage* _image;
	BOOL _calculated;
	BOOL _unifyRects;
	NSLayoutManager* _layoutManager;

}

@property (nonatomic,readonly) NSLayoutManager * layoutManager;              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) CGRect firstLineRect; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) CGRect lastLineRect; 
-(NSLayoutManager *)layoutManager;
-(UIImage *)image;
-(CGRect)bodyRect;
-(CGRect)lastLineRect;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3 ;
-(CGRect)firstLineRect;
-(void)_calculateRectsUsingLayoutManager:(id)arg1 ;
-(CGRect)_rawBoundingRect;
-(CGRect)_correctlyOffsetBoundingRect;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 ;
-(void)adjustFirstLineRect:(inout CGRect*)arg1 bodyRect:(inout CGRect*)arg2 lastLineRect:(inout CGRect*)arg3 textOrigin:(CGPoint)arg4 ;
-(void)_calculate;
@end
