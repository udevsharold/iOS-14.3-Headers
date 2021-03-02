/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface _MKCompassViewStyleParameter : NSObject {

	NSString* _imageNamePart;
	UIColor* _textColor;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy) NSString * imageNamePart;                 //@synthesize imageNamePart=_imageNamePart - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setImageNamePart:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSString *)imageNamePart;
-(UIColor *)backgroundColor;
@end
