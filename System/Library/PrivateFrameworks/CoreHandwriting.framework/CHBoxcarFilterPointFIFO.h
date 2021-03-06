/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@interface CHBoxcarFilterPointFIFO : CHPointFIFO {

	float _spacing;
	unsigned long long _width;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _prevPoints;

}

@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned long long width;                                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                                                            //@synthesize spacing=_spacing - In the implementation block
-(float)spacing;
-(void)setSpacing:(float)arg1 ;
-(void)clear;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(vector<float __attribute__((ext_vector_type(4))))prevPoints;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(void)flush;
@end

