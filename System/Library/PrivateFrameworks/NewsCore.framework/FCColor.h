/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCColor : NSObject <NSCopying> {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,readonly) double red;                  //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;                 //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) NSString * hex; 
+(id)nullableColorWithHexString:(id)arg1 ;
+(id)blackColor;
+(id)colorWithHexString:(id)arg1 ;
+(id)whiteColor;
+(id)clearColor;
+(id)colorWithPBColor:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(NSString *)hex;
-(id)init;
-(double)alpha;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pbColor;
-(double)blue;
-(unsigned long long)hash;
-(id)legibleColor;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(BOOL)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2 ;
-(void)readDeconstructedRepresentationWithAcccessor:(/*^block*/id)arg1 ;
-(double)green;
@end
