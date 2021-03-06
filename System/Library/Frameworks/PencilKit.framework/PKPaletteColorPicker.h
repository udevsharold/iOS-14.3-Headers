/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol PKPaletteColorPicker <NSObject>
@property (nonatomic,copy) UIColor * selectedColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@required
-(UIColor *)selectedColor;
-(void)setSelectedColor:(id)arg1;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1;
-(void)setSelectedColorForPoint:(CGPoint)arg1;

@end

