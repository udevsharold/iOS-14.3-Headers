/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocation;

@interface RTPotentialNoiseLocation : NSObject {

	BOOL _isNoise;
	RTLocation* _location;

}

@property (nonatomic,readonly) RTLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,setter=setNoise:,nonatomic) BOOL isNoise;              //@synthesize isNoise=_isNoise - In the implementation block
-(void)setNoise:(BOOL)arg1 ;
-(RTLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(BOOL)isNoise;
@end
