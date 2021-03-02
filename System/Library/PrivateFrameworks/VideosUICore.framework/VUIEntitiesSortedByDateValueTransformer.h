/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDate;

@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer {

	unsigned long long _maxEntities;
	NSDate* _earliestDate;
	/*^block*/id _dateForEntityBlock;

}

@property (nonatomic,copy) id dateForEntityBlock;                         //@synthesize dateForEntityBlock=_dateForEntityBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntities;              //@synthesize maxEntities=_maxEntities - In the implementation block
@property (nonatomic,copy) NSDate * earliestDate;                         //@synthesize earliestDate=_earliestDate - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(NSDate *)earliestDate;
-(id)initWithDateForEntityBlock:(/*^block*/id)arg1 ;
-(void)setMaxEntities:(unsigned long long)arg1 ;
-(id)dateForEntityBlock;
-(unsigned long long)maxEntities;
-(void)setDateForEntityBlock:(id)arg1 ;
@end
