/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIRenderContext : NSObject {

	float _drawableDiameter;
	SCD_Struct_AR2 _skewAdjustmentMatrix;
	BOOL _opaque;
	BOOL _presentsWithTransaction;
	float _screenScale;
	 _drawableSize;

}

@property (nonatomic,readonly) float drawableDiameter; 
@property (nonatomic,readonly) SCD_Struct_AR2 skewAdjustmentMatrix; 
@property (assign,nonatomic) BOOL opaque;                                        //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,readonly)  drawableSize;                                    //@synthesize drawableSize=_drawableSize - In the implementation block
@property (nonatomic,readonly) float screenScale;                                //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) BOOL presentsWithTransaction;                       //@synthesize presentsWithTransaction=_presentsWithTransaction - In the implementation block
-(float)screenScale;
-(BOOL)presentsWithTransaction;
-()drawableSize;
-(BOOL)opaque;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithDrawableSize:;
-(SCD_Struct_AR2)skewAdjustmentMatrix;
-(float)drawableDiameter;
@end
