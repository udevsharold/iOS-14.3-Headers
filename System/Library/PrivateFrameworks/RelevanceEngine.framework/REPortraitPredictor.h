/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPortraitPredictorProperties.h>

@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {

	PPNamedEntityStore* _namedEntityStore;
	NSMutableDictionary* _namedEntityScores;

}

@property (nonatomic,readonly) NSDictionary * namedEntityScores; 
+(double)updateInterval;
-(void)dealloc;
-(void)update;
-(id)_init;
-(float)userAffinityToContent:(id)arg1 ;
-(void)_loadStoreIfNeeded;
-(NSDictionary *)namedEntityScores;
@end

