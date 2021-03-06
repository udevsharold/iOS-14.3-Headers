/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor, UIImage;


@protocol UIPreviewActionItem_Internal <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long style; 
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) UIImage * image; 
@required
-(id)_color;
-(UIImage *)image;
-(long long)style;
-(void)setImage:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(void)_setColor:(id)arg1;
-(void)setStyle:(long long)arg1;
-(NSString *)identifier;
-(id)_effectiveColor;
-(void)setTitle:(id)arg1;
-(id)_effectiveImage;
-(NSString *)title;

@end

