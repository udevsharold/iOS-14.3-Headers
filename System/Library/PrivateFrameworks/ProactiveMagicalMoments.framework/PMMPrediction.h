/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface PMMPrediction : NSObject {

	NSArray* _predictedItems;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSArray * predictedItems;              //@synthesize predictedItems=_predictedItems - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(NSDate *)expirationDate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)predictedItems;
-(id)initWithPredictedItems:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)isEqualToPrediction:(id)arg1 ;
@end

