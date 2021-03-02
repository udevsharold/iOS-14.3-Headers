/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, NSArray, FCSpotlightOperationResult, NSError;

@interface FCEditorialOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	NSArray* _trendingHeadlines;
	FCSpotlightOperationResult* _spotlightResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;
	NSArray* _editorialSectionGroups;

}

@property (copy) NSArray * trendingHeadlines;                                  //@synthesize trendingHeadlines=_trendingHeadlines - In the implementation block
@property (copy) NSArray * editorialSectionGroups;                             //@synthesize editorialSectionGroups=_editorialSectionGroups - In the implementation block
@property (retain) FCSpotlightOperationResult * spotlightResult;               //@synthesize spotlightResult=_spotlightResult - In the implementation block
@property (retain) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                  //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(NSError *)error;
-(void)enumerateEditorialSectionsByRecencyWithBlock:(/*^block*/id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)catchUpCompletionHandler;
-(void)setSpotlightResult:(FCSpotlightOperationResult *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setTrendingHeadlines:(NSArray *)arg1 ;
-(FCSpotlightOperationResult *)spotlightResult;
-(FCCloudContext *)context;
-(void)setEditorialSectionGroups:(NSArray *)arg1 ;
-(NSArray *)trendingHeadlines;
-(NSArray *)editorialSectionGroups;
@end
