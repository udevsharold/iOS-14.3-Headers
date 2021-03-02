/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIFont;

@interface _MKCompassViewSizeParameter : NSObject {

	NSString* _imageNamePart;
	double _diameter;
	UIFont* _font;
	double _textOffsetFromCenter;

}

@property (nonatomic,copy) NSString * imageNamePart;                   //@synthesize imageNamePart=_imageNamePart - In the implementation block
@property (assign,nonatomic) double diameter;                          //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double textOffsetFromCenter;              //@synthesize textOffsetFromCenter=_textOffsetFromCenter - In the implementation block
-(void)setImageNamePart:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(double)textOffsetFromCenter;
-(double)diameter;
-(NSString *)imageNamePart;
-(void)setDiameter:(double)arg1 ;
-(void)setTextOffsetFromCenter:(double)arg1 ;
@end
