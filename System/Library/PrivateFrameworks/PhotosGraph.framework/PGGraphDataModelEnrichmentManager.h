/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGGraphDataModelEnrichmentManagerDelegate;
@class NSArray, PGManager;

@interface PGGraphDataModelEnrichmentManager : NSObject {

	NSArray* _enrichmentProcessors;
	long long _enrichmentContext;
	PGManager* _manager;
	id<PGGraphDataModelEnrichmentManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PGManager * manager;                                                      //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * enrichmentProcessors;                                           //@synthesize enrichmentProcessors=_enrichmentProcessors - In the implementation block
@property (nonatomic,readonly) long long enrichmentContext;                                              //@synthesize enrichmentContext=_enrichmentContext - In the implementation block
+(id)lightWeightEnrichmentProcessors;
+(id)weeklyEnrichmentProcessors;
+(id)backgroundEnrichmentProcessors;
+(id)enrichmentProcessorsForDataModelEnrichmentContext:(long long)arg1 ;
+(id)liveUpdateEnrichmentProcessors;
+(id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)arg1 ;
-(long long)enrichmentContext;
-(NSArray *)enrichmentProcessors;
-(PGManager *)manager;
-(id)initWithManager:(id)arg1 enrichmentProcessors:(id)arg2 ;
-(BOOL)enrichDataModelForHighlightUUIDs:(id)arg1 withError:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<PGGraphDataModelEnrichmentManagerDelegate>)arg1 ;
-(BOOL)enrichDataModelWithError:(id*)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)initWithManager:(id)arg1 enrichmentContext:(long long)arg2 ;
-(BOOL)_enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id<PGGraphDataModelEnrichmentManagerDelegate>)delegate;
@end
