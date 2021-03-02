/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BBColor, BBImage;

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	BBColor* _titleColor;
	BBImage* _image;
	BBColor* _color;
	long long _style;
	NSString* _viewClassName;

}

@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBColor * titleColor;                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) BBImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBColor * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * viewClassName;              //@synthesize viewClassName=_viewClassName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appearanceWithTitle:(id)arg1 ;
-(void)setColor:(BBColor *)arg1 ;
-(BBColor *)titleColor;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BBColor *)color;
-(void)setTitleColor:(BBColor *)arg1 ;
-(BBImage *)image;
-(long long)style;
-(void)setImage:(BBImage *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSString *)viewClassName;
-(BOOL)isEqual:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setViewClassName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
@end
