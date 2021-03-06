/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <GraphVisualizer/GVNode.h>

@class NSMutableArray;

@interface CIGVNode : GVNode {

	CGRect extent;
	CGSize titleSize;
	CGSize labelSize;
	CGSize imagesSize;
	CGSize roisSize;
	CGSize badgeSize;
	CGSize contentSize;
	NSMutableArray* images;
	NSMutableArray* rois;
	int color;
	int shape;
	CFStringRef title;
	CFStringRef label;

}

@property (readonly) CGRect extent; 
@property (assign,nonatomic) int shape; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) CFStringRef title; 
@property (nonatomic,readonly) CGRect titleFrame; 
@property (nonatomic,readonly) CGRect badgeFrame; 
@property (assign,nonatomic) CFStringRef label; 
@property (nonatomic,readonly) CGRect labelFrame; 
@property (nonatomic,readonly) CFArrayRef images; 
@property (nonatomic,readonly) CGRect imagesFrame; 
@property (nonatomic,readonly) CFArrayRef rois; 
@property (nonatomic,readonly) CGRect roisFrame; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) CGSize contentInsertSize; 
@property (nonatomic,readonly) CGSize contentCornerSize; 
+(CFDictionaryRef)textAttributesForTitle;
+(CFDictionaryRef)textAttributesForLabel;
-(CGRect)contentFrame;
-(CGRect)extent;
-(CFArrayRef)rois;
-(void)setColor:(int)arg1 ;
-(void)addRoi:(CGRect)arg1 ;
-(CGRect)roisFrame;
-(void)updateSize;
-(void)updateBadgeSize;
-(CGSize)contentInsertSize;
-(id)initWithCINode:(void*)arg1 extent:(CGRect)arg2 ;
-(CGRect)badgeFrame;
-(CGSize)contentCornerSize;
-(CGRect)imagesFrame;
-(id)init;
-(int)color;
-(void)dealloc;
-(int)shape;
-(void)setShape:(int)arg1 ;
-(CFArrayRef)images;
-(CGRect)titleFrame;
-(id)description;
-(CGRect)labelFrame;
-(void)updateContentSize;
-(void)addImage:(CGImageRef)arg1 ;
-(void)setLabel:(CFStringRef)arg1 ;
-(void)setTitle:(CFStringRef)arg1 ;
-(CFStringRef)label;
-(CFStringRef)title;
@end

