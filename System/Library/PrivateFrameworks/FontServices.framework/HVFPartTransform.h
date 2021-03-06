/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFPartTransform : NSObject {

	HVF_PartTransform* partTransform;

}

@property (assign,nonatomic) CGVector translation; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) HVFAxisValues* axisValues; 
@property (assign,nonatomic) HVFSubpartTransforms* subpartTransforms; 
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(CGVector)translation;
-(void)setTranslation:(CGVector)arg1 ;
-(id)initForPartAtIndex:(unsigned long long)arg1 withLoader:(/*^block*/id)arg2 ;
-(HVFAxisValues*)axisValues;
-(HVFSubpartTransforms*)subpartTransforms;
-(BOOL)renderToContext:(/*^block*/id)arg1 ;
@end

