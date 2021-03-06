/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIIndexBarVisualStyle.h>

@class UIIndexBarView, NSString;

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {

	UIIndexBarView* _indexBarView;

}

@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView;              //@synthesize indexBarView=_indexBarView - In the implementation block
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(id)initWithView:(id)arg1 ;
-(double)minLineHeight;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(id)displayEntryFromEntry:(id)arg1 ;
-(UIIndexBarView *)indexBarView;
-(void)setIndexBarView:(UIIndexBarView *)arg1 ;
-(BOOL)overlay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
@end

