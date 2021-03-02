/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TFDataAggregationTask : NSObject {

	/*^block*/id _loadDataBlock;
	/*^block*/id _extractValuesBlock;
	NSString* _name;
	NSString* _logKey;
	NSArray* _providedEntryIdentifiers;

}

@property (nonatomic,copy) id loadDataBlock;                                         //@synthesize loadDataBlock=_loadDataBlock - In the implementation block
@property (nonatomic,copy) id extractValuesBlock;                                    //@synthesize extractValuesBlock=_extractValuesBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                               //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * providedEntryIdentifiers;              //@synthesize providedEntryIdentifiers=_providedEntryIdentifiers - In the implementation block
+(id)deviceInfoTask;
+(id)_readableRATStringFromCTRadioAccessTechnology:(id)arg1 ;
+(id)_readableNetworkConnectionTypStringFromNWPath:(id)arg1 ;
+(id)networkInfoTask;
+(id)sessionInfoTaskForIdentifier:(id)arg1 ;
+(id)watchInfoTask;
+(id)regionInfoTask;
+(id)snapshotTasksForSession:(id)arg1 ;
+(id)anytimeTasksForSession:(id)arg1 ;
-(NSString *)logKey;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 providedEntryIdentifiers:(id)arg2 ;
-(void)setLoadDataBlock:(id)arg1 ;
-(void)setExtractValuesBlock:(id)arg1 ;
-(NSArray *)providedEntryIdentifiers;
-(void)extractDataPropertiesFromData:(id)arg1 intoDataContainer:(id)arg2 ;
-(void)loadDataOnQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)loadDataBlock;
-(id)extractValuesBlock;
@end
