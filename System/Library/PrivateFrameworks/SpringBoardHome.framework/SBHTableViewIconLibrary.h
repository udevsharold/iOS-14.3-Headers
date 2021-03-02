/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHIconLibraryQueryEngineObserver.h>

@protocol SBHIconLibraryQueryEngine;
@class NSHashTable, NSMapTable, SBHIconModel, SBHIconLibraryQueryResult, NSString;

@interface SBHTableViewIconLibrary : NSObject <SBHIconLibraryQueryEngineObserver> {

	NSHashTable* _observers;
	NSMapTable* _completionHandlerForQuery;
	id<SBHIconLibraryQueryEngine> _queryEngine;
	SBHIconModel* _iconModel;
	SBHIconLibraryQueryResult* _lastQueryResults;

}

@property (nonatomic,readonly) SBHIconModel * iconModel;                                  //@synthesize iconModel=_iconModel - In the implementation block
@property (nonatomic,readonly) id<SBHIconLibraryQueryEngine> queryEngine;                 //@synthesize queryEngine=_queryEngine - In the implementation block
@property (nonatomic,readonly) SBHIconLibraryQueryResult * lastQueryResults;              //@synthesize lastQueryResults=_lastQueryResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBHIconModel *)iconModel;
-(void)removeObserver:(id)arg1 ;
-(id<SBHIconLibraryQueryEngine>)queryEngine;
-(void)addObserver:(id)arg1 ;
-(id)initWithIconModel:(id)arg1 queryEngine:(id)arg2 ;
-(void)executeQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dispatchQueryResult:(id)arg1 ;
-(void)engine:(id)arg1 queryResultsWereUpdated:(id)arg2 ;
-(void)engine:(id)arg1 failedToExecuteQuery:(id)arg2 withError:(id)arg3 ;
-(SBHIconLibraryQueryResult *)lastQueryResults;
-(void)executeQuery:(id)arg1 ;
-(id)initWithIconModel:(id)arg1 ;
@end
