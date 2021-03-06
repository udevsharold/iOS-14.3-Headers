/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature {

	NSString* _lengthID;

}

@property (nonatomic,retain) NSString * lengthID;              //@synthesize lengthID=_lengthID - In the implementation block
+(id)mediumLengthFeature;
+(id)longLengthFeature;
+(id)shortLengthFeature;
-(id)init;
-(id)initWithLengthIdentifier:(id)arg1 ;
-(NSString *)lengthID;
-(void)setLengthID:(NSString *)arg1 ;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(id)fr_description;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
@end

