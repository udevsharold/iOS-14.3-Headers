/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSArray;

@interface NUSpace : NSObject {

	NSArray* _transformStack;

}

@property (retain) NSArray * transformStack;              //@synthesize transformStack=_transformStack - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(void)appendTransform:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTransformStack:(id)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 toSpace:(id)arg2 ;
-(CGPoint)transformPointForward:(CGPoint)arg1 ;
-(CGPoint)transformPointBackward:(CGPoint)arg1 ;
-(SCD_Struct_NU4)transformTime:(SCD_Struct_NU4)arg1 ;
-(SCD_Struct_NU4)transformTime:(SCD_Struct_NU4)arg1 toSpace:(id)arg2 ;
-(SCD_Struct_NU4)transformTimeBackward:(SCD_Struct_NU4)arg1 ;
-(BOOL)isEqualToSpace:(id)arg1 ;
-(NSArray *)transformStack;
-(void)setTransformStack:(NSArray *)arg1 ;
@end

