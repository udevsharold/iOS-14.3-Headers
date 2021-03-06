/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, CPImageSetAssetRegistration;

@interface CPImageSet : NSObject <NSSecureCoding> {

	UIImage* _lightContentImage;
	UIImage* _darkContentImage;
	CPImageSetAssetRegistration* _currentAssetRegistration;

}

@property (nonatomic,retain) CPImageSetAssetRegistration * currentAssetRegistration;              //@synthesize currentAssetRegistration=_currentAssetRegistration - In the implementation block
@property (nonatomic,retain) UIImage * lightContentImage;                                         //@synthesize lightContentImage=_lightContentImage - In the implementation block
@property (nonatomic,retain) UIImage * darkContentImage;                                          //@synthesize darkContentImage=_darkContentImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithImage:(id)arg1 ;
-(id)image;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 treatmentBlock:(/*^block*/id)arg2 ;
-(UIImage *)lightContentImage;
-(UIImage *)darkContentImage;
-(CPImageSetAssetRegistration *)currentAssetRegistration;
-(void)setCurrentAssetRegistration:(CPImageSetAssetRegistration *)arg1 ;
-(void)setDarkContentImage:(UIImage *)arg1 ;
-(void)setLightContentImage:(UIImage *)arg1 ;
-(id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2 ;
-(void)swapStyles;
-(void)resizeImagesToSize:(CGSize)arg1 ;
@end

