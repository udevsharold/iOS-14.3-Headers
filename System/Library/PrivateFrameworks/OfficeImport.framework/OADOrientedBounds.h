/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADOrientedBounds : NSObject {

	CGRect mBounds;
	float mRotation;
	unsigned mFlipX : 1;
	unsigned mFlipY : 1;
	int mModeX;
	int mModeY;

}
+(id)orientedBoundsWithBounds:(CGRect)arg1 ;
+(id)orientedBoundsWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
+(BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1 ;
-(float)rotation;
-(id)init;
-(void)setRotation:(float)arg1 ;
-(CGRect)bounds;
-(int)xMode;
-(int)yMode;
-(CGRect)boundingBox;
-(void)setFlipX:(BOOL)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(unsigned long long)hash;
-(BOOL)flipY;
-(id)description;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)flipX;
-(void)setOrientedBounds:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
-(CGSize)boundingBoxSize;
-(void)setXMode:(int)arg1 ;
-(void)setYMode:(int)arg1 ;
-(BOOL)isEqualToOrientedBounds:(id)arg1 ;
@end

