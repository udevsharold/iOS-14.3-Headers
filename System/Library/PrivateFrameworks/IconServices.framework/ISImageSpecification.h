/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@interface ISImageSpecification : NSObject {

	double _scale;
	ISImageSpecification* _smallerSpecification;
	ISImageSpecification* _largerSpecification;
	CGSize _size;

}

@property (readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (readonly) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (readonly) ISImageSpecification * smallerSpecification;              //@synthesize smallerSpecification=_smallerSpecification - In the implementation block
@property (readonly) ISImageSpecification * largerSpecification;               //@synthesize largerSpecification=_largerSpecification - In the implementation block
-(double)scale;
-(ISImageSpecification *)smallerSpecification;
-(ISImageSpecification *)largerSpecification;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)size;
-(void)setLargerSpecification:(ISImageSpecification *)arg1 ;
-(void)setSmallerSpecification:(ISImageSpecification *)arg1 ;
@end

