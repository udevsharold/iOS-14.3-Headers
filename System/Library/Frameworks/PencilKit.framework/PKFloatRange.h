/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKFloatRange : NSObject <NSCopying> {

	double _lowerBound;
	double _upperBound;

}

@property (nonatomic,readonly) double lowerBound;              //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,readonly) double upperBound;              //@synthesize upperBound=_upperBound - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lowerBound;
-(double)upperBound;
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end

