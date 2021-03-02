/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDisplaySpec : NSObject {

	long long _contentMode;
	CGSize _targetSize;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) long long contentMode;                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;              //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
-(void)setTargetSize:(CGSize)arg1 ;
-(CGSize)targetSize;
-(id)init;
-(long long)contentMode;
-(BOOL)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(BOOL)hasExplicitCrop;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(id)description;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(CGRect)arg3 ;
-(CGRect)normalizedCropRect;
-(id)shortDescription;
-(CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
@end
