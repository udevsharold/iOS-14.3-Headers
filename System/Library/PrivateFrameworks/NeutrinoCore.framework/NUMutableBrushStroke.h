/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBrushStroke.h>

@interface NUMutableBrushStroke : NUBrushStroke

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) float softness; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) long long pressureMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)points;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)appendPoint:(SCD_Struct_NU23)arg1 ;
-(id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4 ;
-(void)appendPoints:(SCD_Struct_NU23*)arg1 pointCount:(long long)arg2 ;
@end
