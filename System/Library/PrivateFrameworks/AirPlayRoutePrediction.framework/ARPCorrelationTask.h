/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class NSString;

@interface ARPCorrelationTask : NSObject {

	NSString* _file;
	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,copy,readonly) NSString * file;                                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(void)execute;
-(NSString *)file;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)longFormVideoAppBundleIDs;
@end

