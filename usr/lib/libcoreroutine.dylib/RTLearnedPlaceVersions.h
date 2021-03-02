/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying> {

	BOOL _isRotted;
	RTLearnedPlace* _inferredVersion;
	RTLearnedPlace* _existingVersion;
	RTLearnedPlace* _truthfulCounterpart;

}

@property (nonatomic,retain) RTLearnedPlace * inferredVersion;                  //@synthesize inferredVersion=_inferredVersion - In the implementation block
@property (nonatomic,retain) RTLearnedPlace * existingVersion;                  //@synthesize existingVersion=_existingVersion - In the implementation block
@property (nonatomic,retain) RTLearnedPlace * truthfulCounterpart;              //@synthesize truthfulCounterpart=_truthfulCounterpart - In the implementation block
@property (assign,nonatomic) BOOL isRotted;                                     //@synthesize isRotted=_isRotted - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTLearnedPlace *)existingVersion;
-(RTLearnedPlace *)truthfulCounterpart;
-(RTLearnedPlace *)inferredVersion;
-(void)setInferredVersion:(RTLearnedPlace *)arg1 ;
-(void)setExistingVersion:(RTLearnedPlace *)arg1 ;
-(void)setTruthfulCounterpart:(RTLearnedPlace *)arg1 ;
-(id)trueVersion;
-(BOOL)isRotted;
-(void)setIsRotted:(BOOL)arg1 ;
@end
