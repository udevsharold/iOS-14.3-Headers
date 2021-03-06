/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSDate;

@interface SFCacheEntry : NSObject {

	NSObject* _item;
	NSDate* _lastUsed;

}

@property (nonatomic,retain) NSObject * item;                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDate * lastUsed;              //@synthesize lastUsed=_lastUsed - In the implementation block
-(NSObject *)item;
-(void)setItem:(NSObject *)arg1 ;
-(NSDate *)lastUsed;
-(void)setLastUsed:(NSDate *)arg1 ;
-(id)initWithCacheItem:(id)arg1 ;
@end

