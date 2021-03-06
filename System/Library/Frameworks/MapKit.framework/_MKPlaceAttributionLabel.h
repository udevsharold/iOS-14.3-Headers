/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface _MKPlaceAttributionLabel : NSObject {

	UIImage* image;
	double textBaselineOffset;
	double imageBaselineOffset;
	NSString* imagePlaceholder;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double textBaselineOffset; 
@property (assign,nonatomic) double imageBaselineOffset; 
@property (nonatomic,retain) NSString * imagePlaceholder; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)imagePlaceholder;
-(double)textBaselineOffset;
-(double)imageBaselineOffset;
-(id)attributionWithString:(id)arg1 ;
-(void)setTextBaselineOffset:(double)arg1 ;
-(void)setImageBaselineOffset:(double)arg1 ;
-(void)setImagePlaceholder:(NSString *)arg1 ;
@end

