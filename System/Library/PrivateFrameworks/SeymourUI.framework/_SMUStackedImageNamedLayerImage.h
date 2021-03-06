/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class NSString, UIImage;

@interface _SMUStackedImageNamedLayerImage : NSObject <UINamedLayerImage> {

	BOOL _fixedFrame;
	int _blendMode;
	CGImageRef _image;
	NSString* _name;
	double _opacity;
	UIImage* _imageObj;
	CGRect _frame;

}

@property (assign,nonatomic) CGImageRef image;                                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                   //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;                                                 //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                                                  //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;                                                //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (nonatomic,retain) UIImage * imageObj;                                             //@synthesize imageObj=_imageObj - In the implementation block
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setName:(NSString *)arg1 ;
-(BOOL)fixedFrame;
-(CGRect)frame;
-(void)setBlendMode:(int)arg1 ;
-(double)opacity;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(UIImage *)imageObj;
-(int)blendMode;
-(NSString *)name;
-(void)setOpacity:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImageObj:(UIImage *)arg1 ;
-(void)setFixedFrame:(BOOL)arg1 ;
@end

